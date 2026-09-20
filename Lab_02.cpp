//Lab_02.cpp
// <Євченко Костянтин>
// Лінійні програми.
// Варіант 8
#include <iostream>
#include <cmath>
#include <Windows.h>

using namespace std;

int main() 
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double x; // вхідний параметр
    double y; // вхідний параметр
    double z1; // результат обчислення 1-го виразу
    double z2; // результат обчислення 2-го виразу

    cout << "Введіть значення x: "; cin >> x;
    cout << "Введіть значення y: "; cin >> y;

    z1 = pow(cos(x), 4) + pow(sin(y), 2) +  pow(sin(2*x), 2)/4 - 1;
    z2 = sin(y + x) * sin(y - x);

    cout << endl;
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;

    cin.get();
    return 0;
}