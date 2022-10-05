//
// Created by 秦梓烈 on 05/10/2022.
//
#include <iostream>

int main() {
    int i = 1 ;
    do {
        std::cout << i ;
        i++ ;
        if (i < 3)
            continue ;
    } while (false) ;

    return 0 ;
}
