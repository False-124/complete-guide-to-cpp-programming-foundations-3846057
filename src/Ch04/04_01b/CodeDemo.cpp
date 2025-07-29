// Complete Guide to C++ Programming Foundations
// Exercise 04_01
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define LEVELS 4

int main(){
    const size_t LEVELS = 4; // Define the number of levels as a constant
    int enemies[LEVELS];
    float levelDifficulty[] = {1.0, 3.5, 6.0, 10.5};
    enemies[0] = 10;
    enemies[1] = 20;
    enemies[2] = 30;
    enemies[3] = 40;

    std::cout<< "4 levels:" << std::endl;
    std::cout<< "Level 1: " << enemies[0] << std::endl;
    std::cout<< "Level 2: " << enemies[1] << std::endl;
    std::cout<< "Level 3: " << enemies[2] << std::endl;
    std::cout<< "Level 4: " << enemies[3] << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
