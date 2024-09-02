#include <iostream>
using  std::cout;
using  std::endl;

namespace first {
    int x=0;
}

namespace second
{
    int x=1;
} // namespace second

int main(){
    
    cout << first::x << second::x<<endl;
    return 0;
}