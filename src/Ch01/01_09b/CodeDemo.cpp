// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>

int main(){
    std::string name;
    std::cout << "Enter your name: " << std::flush;
    std::cin >> name;
    std::cout << "Yoou are You: " << name << "!" << std::endl;
    std::cout << std::endl << std::endl;
    return 0;
}