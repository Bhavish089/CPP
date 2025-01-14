#include <iostream>

float add(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float multi(float a, float b) {
    return a * b;
}

float divi(float a, float b) {
    return a / b;
} 

float perc(float a, float b) {
    return (a / b) * 100; 
}

float sroot(float a) {
    return a * a;   
}

float area(float a, float b) {
    return a * b;
}

float circum(float a) {
    return 2 * 3.14159 * a;
}

float radaii(float a) {
    return 3.14159 * a * a;
}

int main() {
    int choice;
    float x, y;
    char cont;

    do {
        std::cout << "What action you want to take?:\n\t1. Add\n\t2. Subtract\n\t3. Multiply\n\t4. Division\n\t5. Percentage\n\tEnter the number: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cout << "Enter first number: ";
                std::cin >> x;
                std::cout << "Enter second number: ";
                std::cin >> y;
                std::cout << "The sum is: " << add(x, y) << std::endl;
                break;
            case 2:
                std::cout << "Enter first number: ";
                std::cin >> x;
                std::cout << "Enter second number: ";
                std::cin >> y;
                std::cout << "The difference is: " << sub(x, y) << std::endl;
                break;
            case 3:
                std::cout << "Enter first number: ";
                std::cin >> x;
                std::cout << "Enter second number: ";
                std::cin >> y;
                std::cout << "The product is: " << multi(x, y) << std::endl;
                break;
            case 4:
                std::cout << "Enter first number: ";
                std::cin >> x;
                std::cout << "Enter second number: ";
                std::cin >> y;
                std::cout << "The quotient is: " << divi(x, y) << std::endl;
                break;
            case 5:
                std::cout << "Enter the part: ";
                std::cin >> x;
                std::cout << "Enter the whole: ";
                std::cin >> y;
                std::cout << "The percentage is: " << perc(x, y) << std::endl;
                break;
            case 6:
                std::cout << "Enter the number: ";
                std::cin >> x;
                std::cout << "The square root is: " << sroot(x) << std::endl;
                break;
            case 7:
                std::cout << "Enter the length: ";
                std::cin >> x;
                std::cout << "Enter the width: ";
                std::cin >> y;
                std::cout << "The area is: " << area(x, y) << std::endl;
                break;
            default:
                std::cout << "Invalid choice" << std::endl;
                break;
        }

        std::cout << "Do you want to perform another operation? (y/n): ";
        std::cin >> cont;
        if(cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N') {
            std::cout << "Invalid choice" << std::endl;
            std::cout << "Program ends" << std::endl;
            break;
        }
    } while (cont == 'y' || cont == 'Y');

    return 0;
}