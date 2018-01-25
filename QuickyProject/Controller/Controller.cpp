//
//  Controller.cpp
//  QuickyProject
//
//  Created by Heaps, Dane on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

int testArray[] = {1, 2, 3, 4, 5, 6, 7};
int a, result = 0;

Controller :: Controller()
{
    
}

void Controller:: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout <<"This loop has executed " << index + 1 << " times" << endl;
    }
    
    for (a=0; a < 7; a++)
    {
        result += testArray[a];
    }
    cout << result << endl;
}

