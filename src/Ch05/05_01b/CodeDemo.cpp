// Complete Guide to C++ Programming Foundations
// Exercise 05_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int score = 1023;
    bool gamePaused = false;
    char action = 'x';

    if (score > 1000) {
        std::cout << "You have a high score!" << std::endl;
    } 
    
    if (score %2)
        std::cout << "Score is odd" << std::endl;
    else
        std::cout << "Score is even" << std::endl;

    std::cout << "The action '" << action << "' is ";
    if (action != 'a' && action != 'w' && action != 'd' && action != 's') 
        std::cout << "not ";
    std::cout << "A movement key" << std::endl;

    if (gamePaused) {
        std::cout << "Game is paused" << std::endl;
    } else {
        std::cout << "Game is running" << std::endl;
    }

    
    std::cout << std::endl << std::endl;
    return 0;
}
