﻿// 10.2.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

#include "process.h"
#include "print.h"
#include "var.h"
#include "Proccess.cpp"
#include "Proccess.h"

using namespace nsPr;
using namespace nsVar;

int main()
{
    cout << "enter file name 1: "; cin >> fname;

	PrintTXT(); 
	ProccessTXT1();
	return 0;
}