#include <iostream>

//When the preprocessor processes the file containing this code, it will replace MY_NAME (on line 7) with
//"Alex". Note that MY_NAME is a name, and the substitution text is a constant value,
//so object-like macros with substitution text are also named constants.
#define MY_NAME "Alex"

int main()
{
    std::cout << "My name is: " << MY_NAME << '\n';

    return 0;
}