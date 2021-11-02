#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>
#include <iostream>
using namespace std;

class Complex
{
public:
  Complex();
  Complex(double r, double i);
  Complex (double r);
  double getReal() const;
  double getImaginary() const;
  Complex add(const Complex& Complex1) const;
  Complex subtract(const Complex& Complex1) const;
  Complex multiply(const Complex& Complex1) const;
  Complex divide(const Complex& Complex1) const;
  Complex operator+(const Complex& Complex1);
  Complex operator-(const Complex& Complex1);
  Complex operator/(const Complex& Complex1);
  Complex operator*(const Complex& Complex1);

  Complex abs() const;
  bool equals(const Complex& Complex1) const;
  friend Complex operator+(int toAdd, Complex& Complex1);
  string toString() const;
  bool operator<(Complex& Complex1);
  Complex operator+=(const Complex& Complex1);
  Complex operator-=(const Complex& Complex1);
  Complex operator/=(const Complex& Complex1);
  Complex operator*=(const Complex& Complex1);
  Complex & operator+();
  Complex & operator-();
  Complex& operator--();
  Complex& operator++();
  Complex operator++(int dummy);
  Complex operator--(int dummy);


  double &operator[](int index);

  friend ostream& operator<<(ostream&, const Complex&);
  friend istream& operator>>(istream&, Complex&);

private:
  double a;
  double b;
};

#endif
