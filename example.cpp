#include <iostream>
int main(){
    int a=38;
    int b=15;
    int c=3;
    int d=28;
    int e=4;
    int f=91;
    int g=46;
    int result=a+b*c-d/e-f+g; 
/* 
1) b*c=45 
2) d/e=7
3) a+(1)=83
4) (3)-(2)=76
5) (4)-f=-15
6) (5)+g=31
*/
    std::cout<<"Результат:"<<result<<std::endl;
}

