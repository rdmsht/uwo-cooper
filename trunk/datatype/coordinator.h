
#ifndef COORDINATOR_H
#define COORDINATOR_H

#include <string>

#include <QSqlQuery>
#include <QVariant>

#include "conf.h"
#include "cooperdb.h"

#include "user.h"
#include "permission.h"

using namespace std;

class Coordinator : public User
{
public:
	static bool exists(void);
	static User *create(string full_name, string password);
	static User *load(void);
	static User *load(string password);

	virtual string getUserName(void);
	virtual void save(void);
	virtual bool hasPermission(const Permission p);
	virtual ~Coordinator();

private:
	Coordinator(int, string, string);

	static bool does_exist;
	static User *coord;

};

#endif // COORDINATOR_H