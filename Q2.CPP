#include <iostream>
#include <string>
#include <algorithm>  // for std::reverse

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);  // Use getline to read full line including spaces

    std::reverse(input.begin(), input.end());

    std::cout << "Reversed string: " << input << std::endl;

    return 0;
}

