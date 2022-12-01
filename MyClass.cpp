#include <iostream>
#include "MyClass.hpp"

MyClass::MyClass()
:x(1), y(1.1), z(new double(1))
{}

MyClass::MyClass(int a, float b, double c)
:x(a), y(b), z(new double(c))
{}

MyClass::~MyClass() {
    delete z;
}

MyClass::MyClass(const MyClass& rhs)
:x(rhs.x), y(rhs.y), z(new double(*rhs.z))
{}

MyClass& MyClass::operator=(const MyClass& rhs) {
    x = rhs.x;
    y = rhs.y;
    double *p = z;
    z = new double(*rhs.z);
    delete p;
    return *this;
}

MyClass& MyClass::operator=(int a) {
    x = a;
    return *this;
}

MyClass& MyClass::operator+=(const MyClass& rhs) {
    x += rhs.x;
    y += rhs.y;
    *z += *rhs.z;
    return *this;
}

std::string MyClass::print() {
    std::string result = 
          "x = " + std::to_string(x) 
        + ", y = " + std::to_string(y) 
        + ", z = " + std::to_string(*z);
    return result;
}