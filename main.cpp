#include <bits/stdc++.h>
#include <cmath>

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
    std::cout << "8. Solve a quadratic equation\n";
}

void solveQuadratic() {
    double x, y, z;
        std::cout << "Enter the coefficient of x^2: " << std::endl;
        cin >> x;
        std::cout << "Enter the coefficient of x: " << std::endl;
        cin >> y;
        std::cout << "Enter the Constant term: "<< std::endl;
        cin >> z;
    if(x == 0) {
        std::cout << "Sorry man, but this shit ain't no quadratic!" << '\n' << std::endl;
    };
    double D = (y * y) - (4 * x * z);

    if(D < 0) {
        std::cout << "The given quadratic doesn't have any real roots" << '\n' << std::endl;
    }

    if(D == 0) {
        double root1 = (-y + sqrt(D)) / (2 * x);
        std::cout << "Roots are real and equal in value" << std::endl;
        std::cout << "First Root = Second Root = " << root1 << '\n' << std::endl;
    }
    
    if(D > 0) {
        double root1 = (-y + sqrt(D)) / (2 * x);
        double root2 = (-y - sqrt(D)) / (2 * x);
        std::cout << "Roots are real and Distinct\n" << std::endl;
        std::cout << "First Root: " << root1 << '\n' << std::endl;
        std::cout << "Second Root: " << root2 << '\n' << std::endl;
    }
}

int main () {
    int op;
    double a, b; // Where a and b are inputs and x, y and z are the coefficients of x squared, x and then the constant respectively
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
    } else if(op == 8) {
        solveQuadratic();
    } 
    
    else {
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
        case 8:
            solveQuadratic();
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
