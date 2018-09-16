//
//  diagonal.cpp
//  Lab1
//
//  Created by Админ on 08.09.2018.
//  Copyright © 2018 Admin. All rights reserved.
//

#include <stdio.h>
#include "Prototypes.h"
#include "rectangle.h"

void Rectangle::diagonal()
{
    double d;
    d=sqrt(pow((abs(x2-x1)),2)+pow((abs(y2-y1)),2));
    cout<<"A:"<<"("<<x1<<";"<<y1<<")"<<endl;
    cout<<"B:"<<"("<<x2<<";"<<y1<<")"<<endl;
    cout<<"C:"<<"("<<x2<<";"<<y2<<")"<<endl;
    cout<<"D:"<<"("<<x1<<";"<<y2<<")"<<endl;
    cout<<"Diagonal = "<<d<<endl;
}
