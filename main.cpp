#include <iostream>

int main() {
    std::cout << "Let's start";
    std::cout << "Don't know why I'm doing this";

    enum Color { red, white, green };
    Color r = red;
 
    switch(r)
    {
        case red  : std::cout << "red\n";   break;
        case white: std::cout << "white\n"; break;
        case green : std::cout << "green\n";  break;
        default: std::cout << "none\n";
    }
    
    return 1;
}
