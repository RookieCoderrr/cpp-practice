//
// Created by 秦梓烈 on 05/10/2022.
//
#include "iostream"
using namespace std ;

typedef long long ll ;

void foo (unsigned ll) {
    std::cout << "1" ;
}
void foo(unsigned long long ){
    std::cout << "2" ;
}
int main() {
    foo(2ull) ;
    return 0 ;
}
