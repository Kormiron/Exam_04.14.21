#pragma once
#include <iostream>
using namespace std;

int Sum(int x, int y)
{
    int result = x + y;
    return result;
}

int Del(int x, int y)
{
    int result = x - y;
    return result;
}

int Mul(int x, int y)
{
    int result = x * y;
    return result;
}

int Div(int x, int y)
{
    if(x != 0 && y == 0 || x == 0 && y == 0){
        int result = NULL;
        return result;
    }
    else
    {
        int result = x / y;
        return result;
    }
}


int Operator(char a,char b) 
{
    int p;
    if (a == '+' && b == '=' || a == '+') {
        p = 1;
        return p;
    }
    if (a == '-' && b == '=' || a == '-') {
        p = 2;
        return p;
    }
    if (a == '*' && b == '=' || a == '*') {
        p = 3;
        return p;
    }
    if (a == '/' && b == '=' || a == '/') {
        p = 4;
        return p;
    }
    else {
        cout << "ERROR: --UNKNOWN OPERATION-- " << endl;
    }
}

