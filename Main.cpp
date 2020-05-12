#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <cstring>
#include "CSql.h"


using namespace std;

int main(int argc, char* argv[])
{
	
	CSql ps("Data Source=(local);Initial Catalog=AdventureWorks2017;Integrated Security=True;User ID=sa;Password='';Connect Timeout=30");

	ps.ProcessQuery("select Name from Production.Location;");
	cout << "Hello World";

	return 0;
}