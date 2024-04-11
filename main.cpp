#include <iostream>

int main() {
    std::cout << "It's coming!";

    enum Color { red, white, green };
    Color c = nullptr;
 
    switch (c)
    {
        case red  : std::cout << "red\n";   break;
        case white: std::cout << "white\n"; break;
        case green : std::cout << "green\n";  break;
        default: std::cout << "transparent\n";
    }
    
    return 10;
}
