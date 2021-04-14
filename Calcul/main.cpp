/*  \
     \ \
      \ \  /\
       \ \/  \/\
        \/\  /\ \
           \/  \ \
                \ \
      by kormiron  \     */

#include <iostream>
#include <cassert>
#include <fstream>
#include <ctime>
#include <Windows.h>
#include <string>
#include "Func.h"
#include "TEST.h"
using namespace std;




int main()
{
    setlocale(LC_ALL, "");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream InputFile("input.txt");
    ofstream FinalResult("output.txt");

    int x, y, r, p;
    char op[10], amp[10];

    InputFile >> x >> op >> y >> amp;

    p = Operator(*op, *amp);
    
    switch (p)
    {
    case 1:
        r = Sum(x, y);
        FinalResult << r;
        FinalResult.close();
        break;
    case 2:
        r = Del(x, y);
        FinalResult << r;
        FinalResult.close();
        break;
    case 3:
        r = Mul(x, y);
        FinalResult << r;
        FinalResult.close();
        break;
    case 4:
        r = Div(x, y);
        FinalResult << r;
        FinalResult.close();
        break;
    default:
        break;
    }

    cout << "----------------------" << endl;
    TestSum();
    TestDiv();
    TestDel();
    TestMul();
    TestOperator();
    cout << "----------------------" << endl;

    return 0;
}