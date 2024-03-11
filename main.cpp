#include <iostream>

int main() {
    std::cout << "It's coming!, for sure";

    enum Color { red, white, green };
    Color c = red;
 
    switch (c)
    {
        case red  : std::cout << "red\n";   break;
        case white: std::cout << "white\n"; break;
        case green : std::cout << "green\n";  break;
        default: std::cout << "none\n";
    }
    
    return 0;
}
