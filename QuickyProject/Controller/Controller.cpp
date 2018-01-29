//
//  Controller.cpp
//  QuickyProject
//
//  Created by Heaps, Dane on 1/25/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "Controller.hpp"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int testArray[] = {1, 2, 3, 4, 5, 6, 7};
int a, result = 0;

Controller :: Controller()
{
    vector <int> intVector;
    vector <string> stringVector;
    
    for (int i = 1; i <=5; i++)
    {
        intVector.push_back(i);
        cout << i << endl;
    }
    
    stringVector.push_back("Monday");
    stringVector.push_back("Tuesday");
    stringVector.push_back("Wednesday");
    stringVector.push_back("Thursday");
    stringVector.push_back("Friday");
    stringVector.push_back("Saturday");
    stringVector.push_back("Sunday");
    for (auto i = stringVector.begin(); i != stringVector.end(); i++)
    {
        cout << *i << ' ';
    }
}

void Controller:: start()
{

}

