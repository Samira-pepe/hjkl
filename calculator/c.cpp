#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double num1,num2,result;
    char operation, choice='\0';
    cout<<"Введите число: \n";
    cin>>num1;
    cout<<"Введите операцию (+,-,*,/,p,s): \n";
    cin>>operation;
    cout<<"Введите другое число: \n";
    cin>>num2;
    switch (operation)
    {
    case '+':
    result=num1+num2;
    cout<<num1<<operation<<num2<<"="<<result<<endl;
        break;
    case '-':
    result=num1-num2;
    cout<<num1<<operation<<num2<<"="<<result<<endl;
        break;
        case '*':
    result=num1*num2;
    cout<<num1<<operation<<num2<<"="<<result<<endl;
        break;
        case '/':
        if (num2!=0){
    result=num1/num2;
    cout<<num1<<operation<<num2<<"="<<result<<endl;
        }
        else{
            cout<<"Ошибка:на 0 делить нельзя.";
        }
        break;
        case 'p': //p-pow
        result=pow(num1,num2);
        cout << num1<<"^"<<num2<< "=" <<result<< endl;
        break;
        case 's': //s-sqrt
        result=pow(num1,(1/num2));
       cout << num1<<"^"<<1/num2<< "=" <<result<< endl;
    
        break;
    default:
    cout<<"Ошибка:недопустимая операция."<<endl;
        break;
    }
}