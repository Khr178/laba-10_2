//////////////////////////////////////////////
/////Proccess.cpp
#include "print.h"
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
#include <iomanip>
#include "var.h"
#include "process.h"
#include "Proccess.h"

using namespace std;

using namespace nsPr;
using namespace nsVar;
void nsPr::ProccessTXT1()
{
	{
		ifstream fin(fname); 
		string s; 
		int i, count = 1, c = 0;
		bool one = false;
		while (getline(fin, s)) 
		{
			while (getline(fin, s))
			{
				for (int i = 0; i < s.length() - 1; i++) 
				{
					if (s[i] == ' ') one = true;
					if (s[i] == ' ' && s[i + 1] == 'b') c++;
					else
					{
						if (c < count) c = count;
						count = 1;
					}
				}
			}
		}

		cout << count;
	}
}