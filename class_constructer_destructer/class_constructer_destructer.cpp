#include <iostream>

class Arbre {
public :
    Arbre()             { std::cout << "cA" ; }
    virtual ~Arbre()    { std::cout << "~A" ; }
} ;

class Refuge {
public :
    Refuge()             { std::cout << "cR" ; }
    virtual ~Refuge()    { std::cout << "~R" ; }
} ;

class Erable : public Arbre , public Refuge {
public :
    Erable()    { std::cout << "cE" ; }
    ~Erable()   { std::cout << "~E" ; }
} ;

int main (int argc , char* argv[]) {

    Erable e ;

    return 0 ;
}