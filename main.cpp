#include <bits/stdc++.h>

using namespace std;

void showMenu() {
    std::cout << "What operation do you want to use?\n";
    std::cout << "1. +\n";
    std::cout << "2. -\n";
    std::cout << "3. x\n";
    std::cout << "4. /\n";
    std::cout << "5. ^2\n";
    std::cout << "6. √\n";
}
int main () {
    int op;
    double a, b, result;

    while(true) {
        showMenu();
    std::cout << "What is the operation you want to use?: ";    
    cin >> op;
    
    if (op == 5 || op == 6) {
        std::cout << "Enter a number: ";
        cin >> a;
    } else {
    std::cout << "Enter two numbers: ";
    cin >> a >> b;
    }

    switch(op) {
        case 1:
            result = a + b;
            break;
        case 2:
            result = a - b;
            break;
        case 3:
            result = a * b;
            break;
        case 4:
            if(b != 0) {
            result = a / b;
            } else {
                std::cout << "Error: a number cannot be divided by zero!";

            }
            break;
        case 5:
            result = pow(a, 2);
            break;
        case 6:
            if (a >= 0) {
    result = sqrt(a);
            } else {
                cout << "Error: cannot find the square root of a negative number.";
            }
            break;
        default:
            std::cout << "ERROR! The operator used isn't correct. ";
            result = -DBL_MAX;

    }
    if(result != -DBL_MAX) {
        std::cout << "Result: " << result << std::endl;
    }
    }
    return 0;
}
