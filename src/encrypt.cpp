#include "caesar.h"
#include "iostream"

/**
 * Entry of the application
 */
int main() {

    std::string text;
    std::cout << "Bitte geben sie ihren Text ein:\n";
    std::cin >> text;
    std::cout << "caesar::encrypt(" << text << ")=" << caesar::encrypt(text) << std::endl;

}