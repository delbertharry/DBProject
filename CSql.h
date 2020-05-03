//#import "c:\program files\common files\system\ado\msado15.dll" rename ("EOF","adoEOF") no_namespace
#pragma once
#include <string>
#include <cstring>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>

using namespace std;

class CSql
{
public:
	CSql();
	~CSql();

protected:
	int CreateConnection(string ConnectionString);
	int DestroyConnection();
	string ProcessQuery(string pSql);
private:
	string _sqlQuery;
	string _sqlConnection;
};

int CSql::CreateConnection(string ConnectionString) 
{
	//TODO: Pas définir a ce moment
	if (1)
	{
		_sqlConnection = ConnectionString;
	}
	return 0;
}

int CSql::DestroyConnection()
{
	//TODO: Pas définir a ce moment
	return 0;
}

string CSql::ProcessQuery(string pSql)
{
	//TODO: Pas définir a ce moment
	_sqlQuery = pSql;

	return NULL;
}

CSql::CSql()
{
	//TODO: Pas définir a ce moment mais je le definissais pour me mettre en memoire.
}

CSql::~CSql()
{
	//TODO: Pas définir a ce moment mais je le definissais pour me mettre en memoire.
}