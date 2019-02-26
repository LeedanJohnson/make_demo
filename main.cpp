#include <iostream>
#include "custommath.hpp"
#include "customstring.hpp"

int main(int argc, char** argv) {
    int val_1 = 0;
    int val_2 = 0;

    std::string str_1 = "";
    std::string str_2 = "";

    std::cout << "Please enter an int:\n";
    std::cin >> val_1;
    std::cout << "\nPlease enter a second int\n";
    std::cin >> val_2;
    std::cout << "Please enter a string:\n";
    std::cin >> str_1;
    std::cout << "\nPlease enter a second string\n";
    std::cin >> str_2;

    std::cout << "\nThe sum of your nums is: " << custommath::add(val_1, val_2) << std::endl;
    std::cout << "\nThe difference of your nums is: " << custommath::sub(val_1, val_2) << std::endl;

    std::cout << "\nThe concat of your strings is: " << customstring::concat(str_1, str_2) << std::endl;
    return 0;
}
