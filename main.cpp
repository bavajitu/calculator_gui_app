#include <bits/stdc++.h>

using namespace std;

int main () {
    char op;
    double a, b, result;

    std::cout << "What is the operation you want to use?: ";    
    cin >> op;

    std::cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(op) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            std::cout << "ERROR! The operator used isn't correct. ";
            result = -DBL_MAX;

    }
    if(result != -DBL_MAX) {
        std::cout << "Result: " << result << std::endl;
    }
    return 0;
}
