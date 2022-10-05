//
// Created by 秦梓烈 on 05/10/2022.
//

#include "iostream"
using namespace std ;
class Base{
protected:
    int m_value;
public:
    Base(int value) : m_value(value) { }
    virtual const char* getName() {return "Base" ;}
};

class Derived:public Base {
public:
    Derived(int value) : Base(value) { }
    virtual const char* getName() {return "Derived" ;}
};

int main() {
    Derived d(5) ;
    Base& b = d ;
    cout << b.getName() ;
    return 0 ;

}


