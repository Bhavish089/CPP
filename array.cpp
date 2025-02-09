#include <iostream>
#include <vector>
#include <string>

int en() {
    int numUsers;
    std::cout << "Enter the no. of Employee: ";
    std::cin >> numUsers;

    std::vector<std::string> usernames(numUsers);
    std::vector<std::string> passwords(numUsers);

    for (int i = 0; i < numUsers; ++i) {
        std::cout << "Enter username " << i + 1 << ": ";
        std::cin >> usernames[i];
        std::cout << "Enter password " << i + 1 << ": ";
        std::cin >> passwords[i];
    }

    std::cout << "\nEntered Usernames and Passwords:\n";
    for (int i = 0; i < numUsers; ++i) {
        std::cout << "Username " << i + 1 << ": " << usernames[i] << ", Password " << i + 1 << ": " << passwords[i] << "\n";
    }
}

int main() {
    std::cout << en();
    return 0;
}