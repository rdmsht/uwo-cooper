/********************************************************************************
** Form generated from reading UI file 'AddMemberlJ2808.ui'
**
** Created: Thu Mar 4 15:09:13 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef ADDMEMBERLJ2808_H
#define ADDMEMBERLJ2808_H

#include <iostream>
#include <QtGui>
#include <QDialog>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextEdit>
#include <QLayout>
#include "datatype/member.h"
#include <time.h>

class Ui_AddMember : public QDialog
{
Q_OBJECT
public:
    QGridLayout *layout;
    QLabel *UserIDLabel;
    QLabel *LastNameLabel;
    QLineEdit *UnitEdit;
    QLineEdit *CommitteeEdit;
    QLabel *label;
    QLineEdit *GivenNameEdit;
    QRadioButton *ArrearYesButton;
    QLineEdit *LastNameEdit;
    QLabel *CommitteeLabel;
    QRadioButton *PrivateYesButton;
    QLineEdit *UserIDEdit;
    QLabel *InArrearsLabel;
    QLabel *PasswordLabel;
    QLineEdit *ArrearsAmountEdit;
    QPushButton *addNewButton;
    QLabel *GivenNameLabel;
    QLineEdit *NumberEdit;
    QLineEdit *lineEdit;
    QLabel *NumberLabel;
    QLabel *UnitLabel;
    QRadioButton *ArrearsNoButton;
    QLineEdit *PasswordEdit;
    QRadioButton *PrivateNoButton;
    QLabel *PrivateNoLabel;
    QPushButton *cancelButton;
    QRadioButton *CommitteeNoButton;
    QRadioButton *CommitteeYesButton;
    QLabel *label_2;
    QRadioButton *under21NoButton;
    QRadioButton *Under21YesButton;
    QTextEdit *Under21List;
    QButtonGroup *buttonGroup_2;
    QButtonGroup *buttonGroup_3;
    QButtonGroup *buttonGroup;
  //  Q *;

    Ui_AddMember(QWidget *parent = 0) : QDialog(parent)
    {
        layout = new QGridLayout;
        layout->setObjectName(QString::fromUtf8("layout"));

        layout = new QGridLayout();
        layout->setObjectName(QString::fromUtf8("layout"));
        LastNameLabel = new QLabel();
        LastNameLabel->setObjectName(QString::fromUtf8("LastNameLabel"));

        layout->addWidget(LastNameLabel, 0, 0, 1, 1);

        LastNameEdit = new QLineEdit();
        LastNameEdit->setObjectName(QString::fromUtf8("LastNameEdit"));
        LastNameEdit->setEnabled(true);

        layout->addWidget(LastNameEdit, 0, 2, 1, 4);

        GivenNameLabel = new QLabel();
        GivenNameLabel->setObjectName(QString::fromUtf8("GivenNameLabel"));

        layout->addWidget(GivenNameLabel, 1, 0, 1, 1);

        GivenNameEdit = new QLineEdit();
        GivenNameEdit->setObjectName(QString::fromUtf8("GivenNameEdit"));
        GivenNameEdit->setEnabled(true);

        layout->addWidget(GivenNameEdit, 1, 2, 1, 4);

        NumberLabel = new QLabel();
        NumberLabel->setObjectName(QString::fromUtf8("NumberLabel"));

        layout->addWidget(NumberLabel, 2, 0, 1, 2);

        NumberEdit = new QLineEdit();
        NumberEdit->setObjectName(QString::fromUtf8("NumberEdit"));
        NumberEdit->setEnabled(true);

        layout->addWidget(NumberEdit, 2, 2, 1, 4);

        UnitLabel = new QLabel();
        UnitLabel->setObjectName(QString::fromUtf8("UnitLabel"));

        layout->addWidget(UnitLabel, 3, 0, 1, 1);

        UnitEdit = new QLineEdit();
        UnitEdit->setObjectName(QString::fromUtf8("UnitEdit"));
        UnitEdit->setEnabled(true);

        layout->addWidget(UnitEdit, 3, 2, 1, 4);

        CommitteeLabel = new QLabel();
        CommitteeLabel->setObjectName(QString::fromUtf8("CommitteeLabel"));

        layout->addWidget(CommitteeLabel, 4, 0, 1, 1);

        CommitteeNoButton = new QRadioButton();
        buttonGroup_3 = new QButtonGroup();
        buttonGroup_3->setObjectName(QString::fromUtf8("buttonGroup_3"));
        buttonGroup_3->addButton(CommitteeNoButton);
        CommitteeNoButton->setObjectName(QString::fromUtf8("CommitteeNoButton"));
        CommitteeNoButton->setChecked(true);

        layout->addWidget(CommitteeNoButton, 4, 1, 1, 1);

        CommitteeYesButton = new QRadioButton();
        buttonGroup_3->addButton(CommitteeYesButton);
        CommitteeYesButton->setObjectName(QString::fromUtf8("CommitteeYesButton"));

        layout->addWidget(CommitteeYesButton, 4, 2, 1, 1);

        CommitteeEdit = new QLineEdit();
        CommitteeEdit->setObjectName(QString::fromUtf8("CommitteeEdit"));
        CommitteeEdit->setEnabled(false);

        layout->addWidget(CommitteeEdit, 4, 3, 1, 3);

        UserIDLabel = new QLabel();
        UserIDLabel->setObjectName(QString::fromUtf8("UserIDLabel"));

        layout->addWidget(UserIDLabel, 5, 0, 1, 1);

        UserIDEdit = new QLineEdit();
        UserIDEdit->setObjectName(QString::fromUtf8("UserIDEdit"));
        UserIDEdit->setEnabled(true);

        layout->addWidget(UserIDEdit, 5, 2, 1, 4);

        PasswordLabel = new QLabel();
        PasswordLabel->setObjectName(QString::fromUtf8("PasswordLabel"));

        layout->addWidget(PasswordLabel, 6, 0, 1, 1);

        PasswordEdit = new QLineEdit();
        PasswordEdit->setObjectName(QString::fromUtf8("PasswordEdit"));

        layout->addWidget(PasswordEdit, 6, 2, 1, 4);

        label = new QLabel();
        label->setObjectName(QString::fromUtf8("label"));

        layout->addWidget(label, 7, 0, 1, 1);

        lineEdit = new QLineEdit();
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);

        layout->addWidget(lineEdit, 7, 2, 1, 4);

        InArrearsLabel = new QLabel();
        InArrearsLabel->setObjectName(QString::fromUtf8("InArrearsLabel"));

        layout->addWidget(InArrearsLabel, 8, 0, 1, 1);

        ArrearsNoButton = new QRadioButton();
        buttonGroup_2 = new QButtonGroup();
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(ArrearsNoButton);
        ArrearsNoButton->setObjectName(QString::fromUtf8("ArrearsNoButton"));
        ArrearsNoButton->setChecked(true);

        layout->addWidget(ArrearsNoButton, 8, 2, 1, 1);

        ArrearYesButton = new QRadioButton();
        buttonGroup_2->addButton(ArrearYesButton);
        ArrearYesButton->setObjectName(QString::fromUtf8("ArrearYesButton"));

        layout->addWidget(ArrearYesButton, 8, 4, 1, 1);

        ArrearsAmountEdit = new QLineEdit();
        ArrearsAmountEdit->setObjectName(QString::fromUtf8("ArrearsAmountEdit"));
        ArrearsAmountEdit->setEnabled(false);
        ArrearsAmountEdit->setFrame(true);
        ArrearsAmountEdit->setDragEnabled(false);
        ArrearsAmountEdit->setReadOnly(false);

        layout->addWidget(ArrearsAmountEdit, 8, 5, 1, 1);

        PrivateNoLabel = new QLabel();
        PrivateNoLabel->setObjectName(QString::fromUtf8("PrivateNoLabel"));

        layout->addWidget(PrivateNoLabel, 9, 0, 1, 1);

        PrivateNoButton = new QRadioButton();
        buttonGroup = new QButtonGroup();
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(PrivateNoButton);
        PrivateNoButton->setObjectName(QString::fromUtf8("PrivateNoButton"));
        PrivateNoButton->setChecked(true);

        layout->addWidget(PrivateNoButton, 9, 2, 1, 1);

        PrivateYesButton = new QRadioButton();
        buttonGroup->addButton(PrivateYesButton);
        PrivateYesButton->setObjectName(QString::fromUtf8("PrivateYesButton"));

        layout->addWidget(PrivateYesButton, 9, 4, 1, 1);

        label_2 = new QLabel();
        label_2->setObjectName(QString::fromUtf8("label_2"));

        layout->addWidget(label_2, 10, 0, 1, 4);

        under21NoButton = new QRadioButton();
        under21NoButton->setObjectName(QString::fromUtf8("under21NoButton"));
        under21NoButton->setChecked(true);

        layout->addWidget(under21NoButton, 10, 4, 1, 1);

        Under21YesButton = new QRadioButton();
        Under21YesButton->setObjectName(QString::fromUtf8("Under21YesButton"));

        layout->addWidget(Under21YesButton, 10, 5, 1, 1);

        Under21List = new QTextEdit();
        Under21List->setObjectName(QString::fromUtf8("Under21List"));
        Under21List->setEnabled(false);

        layout->addWidget(Under21List, 10, 6, 1, 1);

        addNewButton = new QPushButton();
        addNewButton->setObjectName(QString::fromUtf8("addMember"));
        connect(addNewButton, SIGNAL(clicked()), this, SLOT(addMember()));
     //   connect(addNewButton, SIGNAL(clicked()), this, SLOT(accept()));

        layout->addWidget(addNewButton, 11, 2, 1, 3);

        cancelButton = new QPushButton();
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        connect(cancelButton, SIGNAL(clicked()), this, SLOT(close()));

        layout->addWidget(cancelButton, 11, 5, 1, 1);

        setLayout(layout);
        setWindowTitle(tr("Add Member"));

        retranslateUi();
        QObject::connect(Under21YesButton, SIGNAL(toggled(bool)), Under21List, SLOT(setEnabled(bool)));
        QObject::connect(ArrearYesButton, SIGNAL(toggled(bool)), ArrearsAmountEdit, SLOT(setEnabled(bool)));
        QObject::connect(CommitteeYesButton, SIGNAL(toggled(bool)), CommitteeEdit, SLOT(setEnabled(bool)));

    //    QMetaObject::connectSlotsByName();
    } // setupUi

    void retranslateUi()
    {
    
       // ->setWindowTitle(QApplication::translate("", "", 0, QApplication::UnicodeUTF8));
        UserIDLabel->setText(QApplication::translate("", "UserID:", 0, QApplication::UnicodeUTF8));
        LastNameLabel->setText(QApplication::translate("", "Last Name:", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("", "Move-in Date:", 0, QApplication::UnicodeUTF8));
        ArrearYesButton->setText(QApplication::translate("", "Yes:", 0, QApplication::UnicodeUTF8));
        LastNameEdit->setText(QString());
        CommitteeLabel->setText(QApplication::translate("", "In Committee?:", 0, QApplication::UnicodeUTF8));
        PrivateYesButton->setText(QApplication::translate("", "Yes", 0, QApplication::UnicodeUTF8));
        InArrearsLabel->setText(QApplication::translate("", "In Arrears?", 0, QApplication::UnicodeUTF8));
        PasswordLabel->setText(QApplication::translate("", "Password:", 0, QApplication::UnicodeUTF8));
        addNewButton->setText(QApplication::translate("addMember", "Add New Member", 0, QApplication::UnicodeUTF8));
        GivenNameLabel->setText(QApplication::translate("", "Given Name(s):", 0, QApplication::UnicodeUTF8));
        NumberLabel->setText(QApplication::translate("", "Telephone Number:", 0, QApplication::UnicodeUTF8));
        UnitLabel->setText(QApplication::translate("", "Unit Number:", 0, QApplication::UnicodeUTF8));
        ArrearsNoButton->setText(QApplication::translate("", "No", 0, QApplication::UnicodeUTF8));
        PrivateNoButton->setText(QApplication::translate("", "No", 0, QApplication::UnicodeUTF8));
        PrivateNoLabel->setText(QApplication::translate("", "Private Number?", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("", "Cancel", 0, QApplication::UnicodeUTF8));
        CommitteeNoButton->setText(QApplication::translate("", "No", 0, QApplication::UnicodeUTF8));
        CommitteeYesButton->setText(QApplication::translate("", "Yes: ", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("", "Anyone Under 21 Living with Member?", 0, QApplication::UnicodeUTF8));
        under21NoButton->setText(QApplication::translate("", "No", 0, QApplication::UnicodeUTF8));
        Under21YesButton->setText(QApplication::translate("", "Yes (Please enter name and age):", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

public slots:
    void addMember(){
        cout << "blah blah" << endl;

        QString lastname = LastNameEdit->text();
        QString name = GivenNameEdit->text();
        QString telephone = NumberEdit->text();
        QString unit = UnitEdit->text();
        QString committee = CommitteeEdit->text();
        QString userid = UserIDEdit->text();
        QString password = PasswordEdit->text();
        QString date = lineEdit->text();

            cout << "blAH" << endl;
        if(lastname.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                         tr("Please enter a name."));
            return;
        }

        if(name.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                         tr("Please enter a name."));
            return;
        }

        if(telephone.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                         tr("Please enter a phone number."));
            return;
        }

        if(unit.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                         tr("Please enter a unit number."));
            return;
        }

        if(committee.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                         tr("Please enter a committee."));
            return;
        }

        if(userid.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                         tr("Please enter a userid."));
            return;
        }

        if(password.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                         tr("Please enter a password."));
            return;
        }

        if(date.isEmpty())
        {
            QMessageBox::information(this, tr("Empty Field"),
                         tr("Please enter a move-in date."));
            return;
        }
        cout << "blah371" << endl;
        Member::create(name, lastname, telephone, false, userid, password, time(0));
        cout << "blah after create" << endl;
      //  hide();
    }
};



#endif // ADDMEMBERLJ2808_H