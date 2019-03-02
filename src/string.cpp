#include <iostream>

int main(){
    std::string name;
    int age;
    
    std::cout << "Input your name and age." << std::endl;
    std::cin >> name >> age;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;

    return 0;
}
