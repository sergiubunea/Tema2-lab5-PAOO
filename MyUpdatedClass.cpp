#include "MyUpdatedClass.hpp"

MyUpdatedClass::MyUpdatedClass()
:MyClass(), c('a')
{}

MyUpdatedClass::MyUpdatedClass(int a, float b, double c, char d)
:MyClass(a, b, c), c(d)
{}

MyUpdatedClass::MyUpdatedClass(const MyUpdatedClass& rhs)
:MyClass(rhs), c(rhs.c)
{}

MyUpdatedClass& MyUpdatedClass::operator=(const MyUpdatedClass& rhs) {
    MyClass::operator=(rhs);
    c = rhs.c;
    return *this;
}

std::string MyUpdatedClass::print() {
    std::string result = MyClass::print() + ", c = " + c;
    return result;
}