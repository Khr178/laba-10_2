////////////////////////////////////////////////////
//////Print.cpp
#include "print.h"
#include <fstream>
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
#include <iomanip>
#include "var.h" 

using namespace std;
using namespace nsPr;
using namespace nsVar;

void nsPr::PrintTXT()
{
	ifstream fin(fname); 
	string s; 
	while (getline(fin, s)) 
	{
		cout << s << endl; 
	}
	cout << endl;
}