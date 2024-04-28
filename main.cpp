#include <iostream>

int main() {
    std::cout << "It's coming! (maybe)";

    enum Color { red, white, green };
    Color c = 0xFFFFFF;
 
    switch (c)
    {
        case red  : std::cout << "red\n";   break;
        case white: std::cout << "white\n"; break;
        case green : std::cout << "green\n";  break;
        case yellow : std::cout << "yellow\n";  break;
        default: std::cout << "null\n";
    }
    
    return 0;
}
