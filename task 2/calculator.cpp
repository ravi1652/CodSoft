
#include <iostream>
using namespace std;

int main(){
    float a,b;
    char op;

    cout<<"Enter your first number :";
    cin>>a;
    cout<<"Enter your second number :";
    cin>>b;

    cout<<"Enter any operator which is to be done like :"<<endl;
    cout<<"1)Addition(+) \n";
    cout<<"2)Subtraction(-) \n";
    cout<<"3)Multiplication(*) \n";
    cout<<"4)Division(/) \n";
    cout<<"Operator is :";
    cin>>op;

    switch(op){
    case '+':
        cout<< a <<"+"<< b <<"="<<a+b<<endl;
        break;
    case '-':
        cout<< a <<"-"<< b <<"="<<a-b<<endl;
        break;
    case '*':
        cout<< a <<"*"<< b <<"="<<a*b<<endl;    
        break;
    case '/':
        cout<< a <<"/"<< b <<"="<<a/b<<endl;
        break;

    }
}