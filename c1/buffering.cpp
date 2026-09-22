#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers: ";

    int x{};
    std::cin >> x; // If you enter 4 5 here, the buffer will be {4, 5}

    int y{};
    std::cin >> y; //Thus the prompt will not appear as we have an item in the buffer {5}

    std::cout << "You entered " << x << " and " << y << '\n'; // The program will go directly here and print "You entered 4 and 5"

    return 0;
}