/*
 * tasklistview.cc
 *
 *  Created on: Mar 11, 2010
 *      Author: Stephan Beltran
 *     Version: $Id$
 */

#include "view/tasklistview.h"

/**
 * Initialize the popup for managing a committee's tasks.
 */
TaskListView::TaskListView(CommitteeModel *comm, QWidget *parent)
 : QDialog(parent) {

    committee = comm;
    FormLayoutPtr layout(this);

    //Add layout
    task_list = layout << "Select a Task" |= new ModelListWidget<TaskModel>;

    //Button Creation and Additions
    add_button = new QPushButton("Add Task");
    edit_button = new QPushButton("Edit task");
    delete_button = new QPushButton("Delete Task");
    QPushButton *close_button = new QPushButton("Close");

    layout << add_button | edit_button | delete_button | close_button;

    //misc
    edit_button->setEnabled(false);
    delete_button->setEnabled(false);
    setModal(true);
    setWindowTitle("Add Task");
    populateTaskList();

    //Connect slots/signals
    connect(add_button, SIGNAL(clicked()), this, SLOT(addTasks()));
    connect(edit_button, SIGNAL(clicked()), this, SLOT(editTasks()));
    connect(delete_button, SIGNAL(clicked()), this, SLOT(deleteTasks()));
    connect(close_button, SIGNAL(clicked()), this, SLOT(accept()));
    connect(
        task_list, SIGNAL(itemSelectionChanged()),
        this, SLOT(activateButtons())
    );
}

/**
 * Destructor.
 */
TaskListView::~TaskListView(void) {

}

/**
 * Populate the task list.
 */
void TaskListView::populateTaskList(void) {
    TaskModel::iterator_range tasks(committee->findTasks());
    task_list->fill(&TaskModel::findAll);
}

/**
 * De/activate the various control buttons depending on the task selected.
 */
void TaskListView::activateButtons() {
    TaskModel *task(task_list->getModel());
    if(0 == task) {
        return;
    }
    edit_button->setEnabled(true);
    delete_button->setEnabled(task->getStatus());
}


/**
 * Pop up the add tasks view.
 */
void TaskListView::addTasks() {
    AddTaskView addTaskDialog(committee, this);
    if(QDialog::Accepted == addTaskDialog.exec()) {
        populateTaskList();
    }
}

/**
 * Pop up the edit tasks view.
 */
void TaskListView::editTasks() {
    TaskModel *task(task_list->getModel());
    EditTaskView editTaskDialog(task, this);
    if (QDialog::Accepted == editTaskDialog.exec()) {
        populateTaskList();
    }
}

/**
 * Delete a task.
 */
void TaskListView::deleteTasks() {
    TaskModel *task(task_list->getModel());
    if(0 != task) {
        int ret(QMessageBox::question(this,
            "Please Confirm",
            "Are you sure that you want to delete the task?",
            QMessageBox::Yes,
            QMessageBox::No
        ));
        if(QMessageBox::Yes == ret) {
            task->remove();
            populateTaskList();
        }
    }
}
