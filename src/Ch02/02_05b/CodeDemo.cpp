// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>
int a,b = 5;
int main(){
    a = -10;
    bool my_flag;
    std::cout << "a = "<< a <<std::endl;
    std::cout << "b = "<< b <<std::endl;
    std::cout << "a + b = "<< a+b <<std::endl;
    std::cout << "flag = "<< my_flag <<std::endl;
    my_flag = true;
    std::cout << "flag = "<< my_flag <<std::endl;
    unsigned int positive = a+b;
    std::cout << "positive = " << positive << std::endl;
    return 0;
}
