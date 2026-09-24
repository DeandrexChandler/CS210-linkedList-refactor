#pragma once

#include <iostream>
using namespace std;

class Data
{
  public:
    int numID;
    string name;

    Data(int numID, string name)
    {
        this->numID = numID;
        this->name = name;
    }
    void print() { cout << numID << " " << name << endl; }
};