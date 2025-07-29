// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout << "Name: " << std::flush;
    std::cin >> name;
    std::cout << "Word " << name << '.' << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}