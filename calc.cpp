#include <iostream>
#include <cmath>


float add(float x, float y) {
    return x + y;
}

float sub(float x , float y) {
    return x-y;
}

float mul (float x , float y) {
    return x * y;
}

float div (float x , float y) {
    return x / y; 
}

float mod (float x , float y) {
    return (int)x % (int)y;
}

float root (float x) {
    return x * x;
}

float detree (float x , float y , float z , float s , float t , float u , float v , float w , float q) {
    return x * ((t*q)-(w*u)) - y * ((s*q) - (u*v)) + z * ((s*w) - (t*v));
}

float detwo (float x , float y , float z , float s) {
    return (x * s) - (y * z); 
}

float percent (float x , float y) {
    return (x * y) / 100;
}

float eigenvaluethree (float x , float y , float z , float s , float t , float u , float v , float w , float q , float lem) {
    return (x - lem) * ((t * lem) - (u * w)) - y * (s *( q - lem) - (u*v)) + z * ((s * w) - ((t-lem)* v));
}

float eigenvaluetwo (float x , float y , float s , float t , float lem) {
    return (x - lem) * (t - lem) - (y * s);
}

float eigenvectorthree(float x, float y, float z, float s, float t, float u, float v, float w, float q, float lem, float* eigenvector) {
    // Assuming the matrix is:
    // | x  y  z |
    // | s  t  u |
    // | v  w  q |
    // And lem is the eigenvalue

    // Calculate the eigenvector components
    float a = x - lem;
    float b = y;
    float c = z;
    float d = s;
    float e = t - lem;
    float f = u;
    float g = v;
    float h = w;
    float i = q - lem;

    // Solve the system of linear equations
    // a * v1 + b * v2 + c * v3 = 0
    // d * v1 + e * v2 + f * v3 = 0
    // g * v1 + h * v2 + i * v3 = 0

    // For simplicity, we can assume v3 = 1 and solve for v1 and v2
    float v3 = 1;
    float v2 = (c * f - a * i) / (b * f - e * c);
    float v1 = -(b * v2 + c * v3) / a;

    // Normalize the eigenvector
    float norm = std::sqrt(v1 * v1 + v2 * v2 + v3 * v3);
    eigenvector[0] = v1 / norm;
    eigenvector[1] = v2 / norm;
    eigenvector[2] = v3 / norm;

    return 0;
}

int main() {
    float x, y, z, s, t, u, v, w, q, lem;
    float eigenvector[3];
    int choice;

    std::cout << "Select operation:\n";
    std::cout << "1. Add\n";
    std::cout << "2. Subtract\n";
    std::cout << "3. Multiply\n";
    std::cout << "4. Divide\n";
    std::cout << "5. Modulus\n";
    std::cout << "6. Square Root\n";
    std::cout << "7. Determinant of 3x3 matrix\n";
    std::cout << "8. Determinant of 2x2 matrix\n";
    std::cout << "9. Percentage\n";
    std::cout << "10. Eigenvalue of 3x3 matrix\n";
    std::cout << "11. Eigenvalue of 2x2 matrix\n";
    std::cout << "12. Eigenvector of 3x3 matrix\n";
    std::cout << "Enter choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Result: " << add(x, y) << std::endl;
            break;
        case 2:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Result: " << sub(x, y) << std::endl;
            break;
        case 3:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Result: " << mul(x, y) << std::endl;
            break;
        case 4:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Result: " << div(x, y) << std::endl;
            break;
        case 5:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Result: " << mod(x, y) << std::endl;
            break;
        case 6:
            std::cout << "Enter a number: ";
            std::cin >> x;
            std::cout << "Result: " << root(x) << std::endl;
            break;
        case 7:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Enter third number: ";
            std::cin >> z;
            std::cout << "Enter fourth number: ";
            std::cin >> s;
            std::cout << "Enter fifth number: ";
            std::cin >> t;
            std::cout << "Enter sixth number: ";
            std::cin >> u;
            std::cout << "Enter seventh number: ";
            std::cin >> v;
            std::cout << "Enter eighth number: ";
            std::cin >> w;
            std::cout << "Enter ninth number: ";
            std::cin >> q;
            std::cout << "Result: " << detree(x, y, z, s, t, u, v, w, q) << std::endl;
            break;
        case 8:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Enter third number: ";
            std::cin >> z;
            std::cout << "Enter fourth number: ";
            std::cin >> s;
            std::cout << "Result: " << detwo(x, y, z, s) << std::endl;
            break;
        case 9:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Result: " << percent(x, y) << std::endl;
            break;
        case 10:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Enter third number: ";
            std::cin >> z;
            std::cout << "Enter fourth number: ";
            std::cin >> s;
            std::cout << "Enter fifth number: ";
            std::cin >> t;
            std::cout << "Enter sixth number: ";
            std::cin >> u;
            std::cout << "Enter seventh number: ";
            std::cin >> v;
            std::cout << "Enter eighth number: ";
            std::cin >> w;
            std::cout << "Enter ninth number: ";
            std::cin >> q;
            std::cout << "Enter eigenvalue: ";
            std::cin >> lem;
            std::cout << "Result: " << eigenvaluethree(x, y, z, s, t, u, v, w, q, lem) << std::endl;
            break;
        case 11:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Enter third number: ";
            std::cin >> s;
            std::cout << "Enter fourth number: ";
            std::cin >> t;
            std::cout << "Enter eigenvalue: ";
            std::cin >> lem;
            std::cout << "Result: " << eigenvaluetwo(x, y, s, t, lem) << std::endl;
            break;
        case 12:
            std::cout << "Enter first number: ";
            std::cin >> x;
            std::cout << "Enter second number: ";
            std::cin >> y;
            std::cout << "Enter third number: ";
            std::cin >> z;
            std::cout << "Enter fourth number: ";
            std::cin >> s;
            std::cout << "Enter fifth number: ";
            std::cin >> t;
            std::cout << "Enter sixth number: ";
            std::cin >> u;
            std::cout << "Enter seventh number: ";
            std::cin >> v;
            std::cout << "Enter eighth number: ";
            std::cin >> w;
            std::cout << "Enter ninth number: ";
            std::cin >> q;
            std::cout << "Enter eigenvalue: ";
            std::cin >> lem;
            eigenvectorthree(x, y, z, s, t, u, v, w, q, lem, eigenvector);
            std::cout << "Eigenvector: [" << eigenvector[0] << ", " << eigenvector[1] << ", " << eigenvector[2] << "]" << std::endl;
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }
}
