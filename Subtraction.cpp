#include <iostream>
int main(){
    int x=13;
    int y=7;
    int diff={x-y};
    int other_diff={x-y-x};
    std::cout<<"Разность:"<<diff<<std::endl;
    std::cout<<"Другая разность:"<<other_diff<<std::endl;
}