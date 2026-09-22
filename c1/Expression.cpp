#include <iostream>

// five() is a function that returns the value 5
int five()
{
    return 5;
}

int main()
{
    int a{ 2 };             // initialize variable a with literal value 2
    int b{ 2 + 3 };         // initialize variable b with computed value 5
    int c{ (2 * 3) + 4 };   // initialize variable c with computed value 10
    int d{ b };             // initialize variable d with variable value 5
    int e{ five() };        // initialize variable e with function return value 5

    int x {};
    x = 5;          // x = 5 has side effect of assigning 5 to x, evaluates to x
    x = 2 + 3;      // has side effect of assigning 5 to x, evaluates to x
    std::cout << x; // has side effect of printing value of x to console, evaluates to std::cout


    return 0;
}