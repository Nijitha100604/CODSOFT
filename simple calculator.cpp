/* Task 2 - Simple Calculator */

#include<iostream>
using namespace std;

int main()
{
    double num1, num2;
    cout<<"Enter the number 1:";
    cin>>num1;
    cout<<"Enter the number 2:";
    cin>>num2;

    char op;
    cout<<"Enter the operator (+,-,*,/):";
    cin>>op;

    switch(op)
    {
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;
    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
    default:
        cout<<"Invalid Operator!";
        break;
    }
    return 0;
}
