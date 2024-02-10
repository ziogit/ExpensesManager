#include <iostream>

int main() {
    std::cout << "Let's start";
    std::cout << "Don't know why I'm doing this";
    std::cout << "I need some more";
    std::cout << "At least 30 commits";
    std::cout << "Slowly but walking";

    enum Color { red, white, green };
    Color r = red;
 
    switch(r)
    {
        case red  : std::cout << "red\n";   break;
        case white: std::cout << "white\n"; break;
        case green : std::cout << "green\n";  break;
    }
    
    return 0;
}
