//
//  Controller.cpp
//  QuickyProject
//
//  Created by Heaps, Dane on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

Controller :: Controller()
{
    
}

void Controller:: start()
{
    for (int index = 0; index < 10; index++)
    {
        cout <<"This loop has executed " << index + 1 << " times" << endl;
    }
}

