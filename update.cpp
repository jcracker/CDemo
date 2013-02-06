#include <iostream>
#include <mysql/mysql.h>
#include <string.h>

using namespace std;

main()
{
	MYSQL mysql;
	mysql_init(&mysql);
	mysql_real_connect(&mysql,"localhost","root","root","cplus",3306,NULL,0);
	string sql = "update user set password='love' where username like 'wangp%';";

	mysql_query(&mysql,sql.c_str());
	mysql_close(&mysql);
}
