#include <bits/stdc++.h>

using namespace std;

void showMenu() {
    std::cout << "What operation do you want to use?\n";
    std::cout << "1. addition (+)\n";
    std::cout << "2. subtraction (-)\n";
    std::cout << "3. multiplication (x)\n";
    std::cout << "4. division (/)\n";
    std::cout << "5. square (^2)\n";
    std::cout << "6. square root(√)\n";
    std::cout << "7. Logarithmic function\n";
}
int main () {
    int op;
    double a, b;
    std::optional<double> result;

    while(true) {
        showMenu();
    std::cout << "What is the operation you want to use?: ";    
    cin >> op;
    
    if (op == 5 || op == 6) {
        std::cout << "Enter a number: ";
        cin >> a;
    } else if(op == 7){
        std::cout << "Enter the Number: ";
        cin >> a;
        std::cout << "Enter the base: ";;
        cin >> b;
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
                std::cout << "Error: a number cannot be divided by zero!\n";

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
        case 7:
            if (a <= 0 || b <= 0) {
                std::cout << "Sorry, accept you are dumb man. Who in this world would find the logarithm of a negative number? \n";
            } else {
                std::cout << "The result of the given logarithmic function is: " << std::log(a) / std::log(b) << '\n'; 
            }
           break; 
        default:
            std::cout << "ERROR! The operator used isn't correct.\n ";

    }
    if(result.has_value()) {
        std::cout << "Result: " << result.value() << '\n' << std::endl;
    std::cout << "--------------------------------------------" << '\n' << std::endl;
    }
    }

    return 0;
}
