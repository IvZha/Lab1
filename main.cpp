//
//  main.cpp
//  Lab1
//
//  Created by Админ on 08.09.2018.
//  Copyright © 2018 Admin. All rights reserved.
//

#include <iostream>
#include "Prototypes.h"
#include "rectangle.h"

int main(int argc, const char * argv[])
{
    cout<<" 1.Enter the first rectangle \n 2.Output result for first rectangle \n 3.Find perimetr for first rectangle \n 4.Find diagonal for first rectangle \n 5.Enter the second rectangle \n 6.Output result for second rectangle \n 7. Find perimetr for second rectangle \n 8.Find diagonal for second rectangle. \n 9.Compare two rectangles. \n 0-Exit"<<endl;
    Rectangle ObjectA;
    Rectangle ObjectB;
    char Control;
  //  cout<<">";
    while(true)
    {
        cout<<">";
    cin>>Control;
      //  cout<<">";
    switch (Control)
    {
        case '1':
            ObjectA.input();
           // cout<<">";
           // cin>>Control;
            break;
        case '2':
            ObjectA.output();
         //   cout<<">";
         //   cin>>Control;
            break;
        case '3':
            ObjectA.perimetr();
          //  cout<<">";
          //  cin>>Control;
            break;
        case '4':
            ObjectA.diagonal();
           // cout<<">";
         //   cin>>Control;
            break;
        case '5':
            ObjectB.input();
           // cout<<">";
           // cin>>Control;
            break;
        case '6':
            ObjectB.output();
         //   cout<<">";
         //   cin>>Control;
            break;
        case '7':
            ObjectB.perimetr();
            break;
        case '8':
            ObjectB.diagonal();
            break;
            
        case '0':
        {
            return false;
        }
        default:
        {
            cout<<"You entered the wrong character"<<endl;
        }
    }
    }
    return 0;
}
