#include <iostream>
#include <cmath>
#include <string>
#include "HW7.h"

using namespace std;

int main()
{
Complex number1;
cout << "Enter the first complex number: ";
cin >> number1;

Complex number2;
cout << "Enter the second complex number: ";
cin >> number2;

cout << "(" << number1 << ")" << " + " << "(" << number2
<< ") = " << (number1 + number2) << endl;
cout << "(" << number1 << ")" << " - " << "(" << number2
<< ") = " << (number1 - number2) << endl;
cout << "(" << number1 << ")" << " * " << "(" << number2
<< ") = " << (number1 * number2) << endl;
cout << "(" << number1 << ")" << " / " << "(" << number2
<< ") = " << (number1 / number2) << endl;
cout << "|" << number1 << "|" << " = " << number1.abs() << endl;

number1[0] = 3.4;
cout << "number1:"<<number1 << endl;
cout << "number2:"<<number2 << endl;
number2=number1++;
cout << "number1:"<<number1 << endl;
cout << "number2:"<<number2 << endl;
number2=++number1;
cout << "number1:"<<number1 << endl;
cout << "number2:"<<number2 << endl;

cout << "(3 + number2)="<< (3 + number2)<< endl;
cout << "(number2 += number1)="<<(number2 += number1)<< endl;
cout << "(number2 = number1)="<<(number2 = number1) << endl;

return 0;
}
