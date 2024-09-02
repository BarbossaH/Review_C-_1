#include <iostream>
#include <string>
int main(){

std::string name;
int age;
std::cout <<"What's your age ? :";
std::cin >> age;
std::cout <<"What's your name ? :";
// std::cin >> name;
std::getline(std::cin, name); //this will cause a bug without "ws"
std::getline(std::cin>>std::ws, name);
// std::getline(std::cin, name);

    std::cout <<"Hello " << name <<" and your age is " <<age << '\n';
    return 0;
}