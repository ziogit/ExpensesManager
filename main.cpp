#include <iostream>

int main() {
    std::cout << "I'm tired and sick, but I'm building. ok";

    enum Color { red, white, green, yellow, blue, white };
    Color c = 0xFFFFFF;
 
    switch (c)
    {
        case red  : std::cout << "Red\n";   break;
        case white: std::cout << "White\n"; break;
        case green : std::cout << "Green\n";  break;
        case yellow : std::cout << "Yellow\n";  break;
        case blue : std::cout << "Blue\n";  break;
        default: std::cout << "nullPtr\n";
    }
    
    return 0;
}
