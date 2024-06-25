#include <iostream>
using namespace std;
int main(){
    auto x=4;
    auto y=7.5;
    auto z='a';
    auto f=true;
    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(z).name()<<endl;
    cout<<typeid(f).name()<<endl;

}