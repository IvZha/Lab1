//
//  perimetr.cpp
//  Lab1
//
//  Created by Админ on 08.09.2018.
//  Copyright © 2018 Admin. All rights reserved.
//

#include <stdio.h>
#include "Prototypes.h"
#include "rectangle.h"

void Rectangle::perimetr()
{
    int p;
    p = 2*((abs(x2-x1))+(abs(y2-y1)));
    cout<<"You entered coordinates of rectangle:"<<endl;
    cout<<"A:"<<"("<<x1<<";"<<y1<<")"<<endl;
    cout<<"B:"<<"("<<x2<<";"<<y1<<")"<<endl;
    cout<<"C:"<<"("<<x2<<";"<<y2<<")"<<endl;
    cout<<"D:"<<"("<<x1<<";"<<y2<<")"<<endl;
    cout<<"Perimetr = "<<p<<endl;
}

