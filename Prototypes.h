//
//  Header.h
//  Lab1
//
//  Created by Админ on 08.09.2018.
//  Copyright © 2018 Admin. All rights reserved.
//

#ifndef Prototypes
#define Prototypes
#pragma once
#define _CRT_NON_CONFORMING_WCSTOK
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <fstream>
#include <ctime>

using std::cin;
using std::wcin;
using std::cout;
using std::endl;
using std::setw;
using std::ifstream;
using std::ofstream;
using std::wifstream;
using std::ios;

void perimetr();
int output(double,double,double);
int tops(double,double,double);
void input();
void output();
void diagonal();
void input2();
#endif /* Header_h */
