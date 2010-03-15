#ifndef DOCUMENT_H
#define DOCUMENT_H

#define PHONE_LIST_PUBLIC   1
#define PHONE_LIST_ALL      2
#define COMMITTEE_LIST      3
#define TASK_LIST           4

#include <QTextDocument>
#include <QTextCursor>
#include <QMessageBox>
#include <QTextTable>

#include "lib/imodel.h"
#include "model/member_committee_models.h"


class Document : public QTextDocument
{
public:
    Document(int doctype);
    ~Document();

private:
    QTextCursor *cursor;


    void generatePhoneList(bool isconfidential);
    void generateCommitteeList(void);
    void generateTaskList(void);


};

#endif // DOCUMENT_H
