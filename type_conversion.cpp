#include <iostream>

int main(){

    int x1 = 3.31;

    double x2 = (int)3.4;
char x = 100;
int correct = 8;
int total = 10;
int score = correct/total *100;
double score_d = correct/total*100;
double score_d_1 = (double)correct/total*100;
double score_d_2 = correct/(double)total*100;
    std::cout<< score<<'\n';
    std::cout<< score_d<<"\n";
    std::cout<< score_d_1<<"\n";
    std::cout<< score_d_2<<"\n";
    return 0;
}