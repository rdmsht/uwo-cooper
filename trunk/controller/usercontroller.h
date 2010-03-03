#ifndef USERCONTROLLER_H
#define USERCONTROLLER_H

#include <string>
#include "../datatype/user.h"
#include "authorizationcontroller.h"

using namespace std;

class UserController
{
public:
    UserController();
    ~UserController();
    static int addUserAccount(string *name, string *pwd);
    static int changeUserInfo(string *attribute, string *value);
    static int userLogin(string *name, string *pwd);
    static void userLogoff();
    static void setActiveUser(User *theUser);
    static User *getUser(string *name);
private:
    static User *activeUser;
};

#endif // USERCONTROLLER_H
