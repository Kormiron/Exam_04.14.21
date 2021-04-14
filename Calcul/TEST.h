#pragma once
#include <iostream>
#include <cassert>
#include "Func.h"
using namespace std;



void TestSum() {
    assert(Sum(3, 6) == 9);
    assert(Sum(-3, -6) == -9);
    assert(Sum(3, 0) == 3);
    assert(Sum(6, -3) == 3);
    cout << "Test Sum passed" << endl;
}

void TestDel() {
    assert(Del(3, 6) == -3);
    assert(Del(-3, -6) == 3);
    assert(Del(3, 0) == 3);
    assert(Del(3, -3) == 6);
    cout << "Test Del passed" << endl;
}

void TestMul() {
    assert(Mul(3, 6) == 18);
    assert(Mul(-3, -6) == 18);
    assert(Mul(3, 0) == 0);
    assert(Mul(3, -3) == -9);
    cout << "Test Mul passed" << endl;
}

void TestDiv() {
    assert(Div(6, 6) == 1);
    assert(Div(-12, -6) == 2);
    assert(Div(0, 3) == 0);
    assert(Div(0, 0) == NULL);
    assert(Div(3, -3) == -1);
    cout << "Test Div passed" << endl;
}

void TestOperator() {
    assert(Operator('+', '=') == 1);
    assert(Operator('-', '=') == 2);
    assert(Operator('*', '=') == 3);
    assert(Operator('/', '=') == 4);
    cout << "Test Operator passed" << endl;
}