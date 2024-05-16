#include <iostream>

int main() {
    std::cout << "I'm tired and sick";

    enum Color { red, white, green };
    Color c = 0xffffff;
 
    switch (c)
    {
        case red  : std::cout << "red\n";   break;
        case white: std::cout << "white\n"; break;
        case green : std::cout << "green\n";  break;
        case yellow : std::cout << "yellow\n";  break;
        case blue : std::cout << "blue\n";  break;
        case white : std::cout << "white\n";  break;
        default: std::cout << "nullptr\n";
    }
    
    return 0;
}
