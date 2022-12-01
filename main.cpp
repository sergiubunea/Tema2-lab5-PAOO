#include <iostream>
// #include "MyClass.hpp"
#include "MyUpdatedClass.hpp"

int main() {

    MyClass obj1;
    std::cout << "obj1: " << obj1.print() << "\n";

    obj1 = obj1;
    std::cout << "obj1: " << obj1.print() << "\n";

    obj1 = 0;
    std::cout << "obj1: " << obj1.print() << "\n";  

    MyClass obj2(2, 3.5, 7);

    obj1 += obj2;
    std::cout << "obj1: " << obj1.print() << "\n";

    MyClass obj3(obj2);
    std::cout << "obj3: " << obj3.print() << "\n";

    MyUpdatedClass obj4(1, 2, 3, 'z');
    std::cout << "obj4: " << obj4.print() << "\n";

    MyUpdatedClass obj5;
    obj5 = obj4;
    std::cout << "obj5: " << obj5.print() << "\n";

    return 0;
}