//
// Created by 秦梓烈 on 05/10/2022.
//

#include <iostream>

int main()
{
    int x = 3 ;

    switch(x)
    {
        case 0 :
            int x = 1 ;
            std::cout << x << std::endl ;
            break ;
        case 3 :
            std::cout << x << std::endl ;
            break ;
        default :
            x = 2 ;
            std::cout << x << std::endl ;
    }

    return 0 ;
}