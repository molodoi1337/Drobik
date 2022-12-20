#include <Windows.h>
#include <iostream>
#include "Drob.h"
using namespace std;

int main()
{
    Drob obj1(2,7);
    Drob obj2(4, 11);
    Drob obj3 = obj1 * obj2;
}

