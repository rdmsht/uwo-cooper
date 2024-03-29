/*
 * dependantlistview.h
 *
 *  Created on: Mar 14, 2010
 *      Author: petergoodman
 *     Version: $Id$
 */

#ifndef DEPENDANTLISTVIEW_H_
#define DEPENDANTLISTVIEW_H_

#include <QWidget>
#include <QDialog>
#include <QGridLayout>
#include <QPushButton>
#include <QScrollArea>

#include "model/membermodel.h"
#include "model/dependantmodel.h"

#include "view/adddependantview.h"
#include "view/dependantlistitemview.h"

class DependantListView : public QDialog {
    Q_OBJECT

public:
    DependantListView(MemberModel *member, QWidget *parent = 0);

private:
    MemberModel *member;
    QGridLayout *list_layout;
    QScrollArea *list;

public slots:
    void removeDependantFromList(DependantListItemView *);
    void addDependantToList(DependantModel *);
};

#endif /* DEPENDANTLISTVIEW_H_ */
