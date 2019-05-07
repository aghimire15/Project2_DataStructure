#include<iostream>
#include<string>
#include<fstream>
#include "coder.h"

using namespace std;
int main()
{
    Coder *myCoder = new Coder();

    myCoder->buildMap("code_with_letters.txt");
    myCoder->makeTree();

    string test1 = myCoder->encode("hi");
    cout << test1;
}