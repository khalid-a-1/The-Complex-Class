#include "HW7.h"
#include <sstream> // Used in toString to convert numbers to strings
#include <cstdlib> // For the abs function
#include <iostream>
#include <cmath>
#include <string>

Complex::Complex()
{
   a = 0.0;
   b = 0.0;
}

Complex::Complex(double r){
  a= r;
  b = 0;
}

Complex::Complex(double r, double i)
{
  a=r;
  b=i;
}

double Complex::getReal() const
{
  return a;
}

double Complex::getImaginary() const
{
  return b;
}



Complex Complex::add(const Complex& Complex1) const
{
  double real = (a+ Complex1.getReal());
  double imag =  (b+ Complex1.getImaginary());
  return Complex(real,imag);
}



Complex Complex::subtract(const Complex& Complex1) const
{
  double real = (a- Complex1.getReal());
  double imag =  (b- Complex1.getImaginary());
  return Complex(real,imag);

}

Complex Complex::multiply(const  Complex& Complex1) const
{
  double real = (a* Complex1.getReal())- (b*Complex1.getImaginary());
  double imag =  (b* Complex1.getReal())+ (a*Complex1.getImaginary());
  return Complex(real,imag);
}

Complex Complex::divide(const  Complex& Complex1) const
{
  double real = ((a* Complex1.getReal())- (b*Complex1.getImaginary()))/(pow(Complex1.getReal(),2)+pow(Complex1.getImaginary(),2));
  double imag = ((b* Complex1.getReal())- (a*Complex1.getImaginary()))/(pow(Complex1.getReal(),2)+pow(Complex1.getImaginary(),2));
  return Complex(real,imag);
}

Complex Complex::abs() const
{
  return (sqrt(pow(a,2)+pow(b, 2)));
}


string Complex::toString() const
{
  stringstream ss;
  ss << a;

  if (b > 0)
    ss << "+" << b<<"i";
  else if (b<0){
    ss<< "-"<<b<<"i";
  }

  return ss.str();
}


Complex Complex::operator+(const Complex& Complex1) {
  return add(Complex1);
}

Complex operator+(int toAdd, Complex& Complex1) {

  return Complex(toAdd) + Complex1;
}

Complex Complex::operator-(const Complex& Complex1) {
  return subtract(Complex1);
}

Complex Complex::operator/(const Complex& Complex1) {
  return divide(Complex1);
}

Complex Complex::operator*(const Complex& Complex1) {
  return multiply(Complex1);
}

Complex Complex::operator+=(const Complex &Complex1){
  *this = add(Complex1);
  return *this;
}

Complex Complex::operator-=(const Complex &Complex1){
  *this = subtract(Complex1);
  return *this;
}

Complex Complex::operator*=(const Complex &Complex1){
  *this = multiply(Complex1);
  return *this;
}

Complex Complex::operator/=(const Complex &Complex1){
  *this = divide(Complex1);
  return *this;
}

Complex& Complex::operator+(){
  return *this;
}

Complex& Complex::operator-(){
  return *this;
}
//prefix
Complex& Complex::operator++(){
  a+=1;
  return *this;
}

Complex& Complex::operator--(){
  a-=1;
  return *this;
}

Complex Complex::operator++(int dummy)
{
  Complex temp(a, b);
  a +=1;
  return temp;
}

Complex Complex::operator--(int dummy)
{
  Complex temp(a, b);
  a -= 1;
  return temp;
}



double& Complex::operator[](int index){
  if (index == 0){
    return a;
  }
  else if (index == 1){
    return b;
  }
  else{
    throw runtime_error("subscription out of range");
  }
}

istream& operator>>(istream& in, Complex& Complex1){
  in >> Complex1.a;
  in >> Complex1.b;
  return in;
}

ostream& operator<<(ostream& out, const Complex &Complex1){
  out << Complex1.a << "+" << Complex1.b<< "i";
  return out;
}
