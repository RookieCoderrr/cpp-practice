//
// Created by 秦梓烈 on 05/10/2022.
//

#include "iostream"
using namespace std ;

int main() {
    int x = -1;
    try {
        cout << "Inside try/ " ;
        if (x < 0) {
            throw x ;
            cout << "After throw. " ;
        }
    }
    catch (int x) {
        cout << "Exception caught. " ;
    }
    cout << "After catch." ;
    return 0 ;
}