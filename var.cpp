#include <iostream>
#include <typeinfo>
#include <string.h>

int main() {
    int x = 1;
    float z = 2.4f;
    char y = 'a';
    int arr[2] = {0,1};

    std::cout << "x data type: " << typeid(x).name() << std::endl;
    std::cout << "int  =  i" << std::endl;
    std::cout << "y data type: " << typeid(y).name() << std::endl;
    std::cout << "char = c" << std::endl;
    std::cout << "z data type: " << typeid(z).name() << std::endl;
    std::cout << "float = f" << std::endl;
    std::cout << "arr data type: " << typeid(arr).name() << std::endl;
    std::cout << "array = a2_i" << std::endl;
}