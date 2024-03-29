/*
 * viewmemberview.h
 *
 *  Created on: Mar 12, 2010
 *      Author: petergoodman
 *     Version: $Id$
 */

#ifndef VIEWMEMBERVIEW_H_
#define VIEWMEMBERVIEW_H_

#include <sstream>

#include <QWidget>
#include <QDateTime>
#include <QString>
#include <QTextStream>

#include "lib/gui/formlayoutptr.h"

#include "model/membermodel.h"
#include "model/committeemodel.h"
#include "model/dependantmodel.h"
#include "model/unitmodel.h"

class ViewMemberView : public QWidget {
public:
    ViewMemberView(MemberModel *member, QWidget *parent=0);
};

#endif /* VIEWMEMBERVIEW_H_ */
