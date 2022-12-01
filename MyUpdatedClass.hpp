#include <iostream>
#include "MyClass.hpp"

class MyUpdatedClass: public MyClass{
    public:
        MyUpdatedClass();
        MyUpdatedClass(int a, float b, double c, char d);
        MyUpdatedClass(const MyUpdatedClass& rhs);
        MyUpdatedClass& operator=(const MyUpdatedClass& rhs);
        std::string print();
    private:
        char c;
};