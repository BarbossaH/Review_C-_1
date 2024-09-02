#include <iostream>
#include <vector>


typedef std::string text_t;
typedef int number_t;

using text_1_t  = std::string;
using number_1_t = int;
int main(){
    text_t myName = "Julian";
    number_t age = 43;
    text_1_t name = "julian";
    number_1_t my_age = 44;
    std::cout << myName << "\n and my age is " << age << "\n";
    std::cout << name << "\n and my age is " << my_age << "\n";
    return 0;
}