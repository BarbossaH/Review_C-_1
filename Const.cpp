#include <iostream>
#include <cmath>
#include <string>
#include  <ctime>
int main(){
    using std::cout;
    #pragma region basic math method
// double x = 3.3;
// double y = 3.4;
// // double z= std::max(x,y);
// // double z = std::min(x,y);

// // double z=pow(2,4);
// // double zz = abs(-9);
// // double z = round(sqrt(2)); //四舍五入
// double z = (sqrt(3));
// double up = ceil(z);
// double fl = floor(z);
// using std::cout;
// cout <<up << "and " <<fl;
#pragma endregion
   
   #pragma region 
//    double a;
//    double b;
//    double c;

//    std::cout << "Enter side A: ";
//    std::cin>>a;
//      std::cout << "Enter side B: ";
//    std::cin>>b;

//    a = pow(a,2);
//    b = pow(b,2);
//    c=sqrt(a+b);

//    std::cout << "Side c: " << c;
   #pragma endregion
   
   #pragma region switch
//    int month;
//     std::cin >> month;
//     switch (month)
//     {
//     case 0:
//     std::cout << "this is Winter";

//         break;
//             case 1:
//     std::cout << "this is Spring";

//         break;
//             case 2:
//     std::cout << "this is Summer";

//         break;
//             case 3:
//     std::cout << "this is Autumn";

//         break;
    
//     default:
//     std::cout << "this is Default9";
//         break;
//     }

   #pragma endregion
   
   #pragma region 

//    std::string name;
//    std::cout << "Enter your name: ";
//    std::getline(std::cin, name);
// if(name.empty()){
//     std::cout << "You didn't enter your name";
//     return 0;
// }
//    if(name.length()>12){
//     std::cout << "Your name cannot be over 12 characters";
//    }else{
//     std::cout << "Welcome " << name;

//    }
   #pragma endregion
   
   #pragma region random number
//    srand(time(NULL));
//    int num = rand()%6+1;
// cout << num <<'\n';

srand(time(0));
int randNum = rand()%100+1;
int guess;
int tries;

cout << "******* Number guessing game*******\n";

do
{
    cout << "Enter a number between 1 - 100\n" ;
    std::cin >> guess;
    tries++;
    if(guess>randNum){
        cout << "Bigger\n";
    }else if(guess<randNum){
        cout << "Smaller\n";
    }else{
        cout << "Correct";
    }
} while (guess!=randNum);

cout << "Game over and you take " << tries << " tries\n";

   #pragma endregion
    return 0;
}