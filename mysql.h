/* mysql.h */
#ifndef MYSQL_H
#define MYSQL_H

#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <stdexcept>

#include "reference.h"

#include <mysql_connection.h>
#include <mysql_driver.h>
#include <mysql_error.h>
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

class MySQL : public Reference {
    OBJ_TYPE(MySQL,Reference);

protected:
    static void _bind_methods();
    String sql2String(sql::SQLString s);
    bool has_only_digits(String s);

    sql::SQLString host;
    sql::SQLString user;
    sql::SQLString pass;
    sql::SQLString database;

public:

    void credentials(String shost, String suser, String spass);
    void select_database(String db);
    void execute(String s);
    Variant query(String q, String columnId="1");

    MySQL();
};

#endif
