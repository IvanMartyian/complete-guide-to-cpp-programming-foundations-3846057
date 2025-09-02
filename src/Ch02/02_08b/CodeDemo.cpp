// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script};
enum class menu_section {background, music, texture, sound};

int main () {
    int sound = 8;

    asset_type asset_value;

    asset_value = asset_type::sound;

    std::cout << "asset value: " << (int)sound << std::endl;
    return 0;
}
