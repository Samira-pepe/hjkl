#include <iostream>
#include <cmath>
int main(){
    int x=2;
    int y=7;
    int powe=pow(x,y);
    int other_pow=pow(y,x);
    std::cout<<"Степень:"<<powe<<std::endl;
    std::cout<<"Другая степень:"<<other_pow<<std::endl;
}