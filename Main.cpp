#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <cstring>
#include "CSql.h"


using namespace std;

int main(int argc, char* argv[])
{
	
	string ConnectionString;

	if (argc > 1)
	{ 
		ConnectionString = string(argv[1]);

		CSql ps(ConnectionString.c_str());
		if (ps.GetError() == 0)
		{
			ps.ProcessQuery("select Name, LocationID  from Production.Location  order by LocationID;");
		}
	
		cout << ps.GetMsg();
	}
	else
	{
		cout << "No command line arguments";
	}

	return 0;
}

/* http://wiki.ogre3d.org/Precompiled+headers */
/* https://www.youtube.com/watch?v=1g_Xng_uH2w */