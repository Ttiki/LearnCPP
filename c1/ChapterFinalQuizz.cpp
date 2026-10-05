//
// Created by Clément Combier on 05/10/2026.
//

#include <iostream>

int myProgram() {
    int x, y {};
    std::cout << "Enter an integer:";
    std::cin >> x;

    std::cout << "Enter another integer:";
    std::cin >> y;

    std::cout << x + "+" + y + "=" x+y +". \n";
    std::cout << x + "-" + y + "=" x-y + ". \n";

    return 0;
}

// Solution
int main() {

    myProgram();

    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";

    return 0;
}