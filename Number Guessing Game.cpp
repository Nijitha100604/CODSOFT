/* Codsoft Task 2 - Number Guessing Game */

#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    srand(time(0));
    int randnum = rand()%100;
    cout<<randnum<<endl;
    cout<<"Enter the number between 1 to 100: ";
    int num;
    cin>>num;
    int flag =0;
    while(flag != 1)
    {
        if(num==randnum)
        {
            flag =1;
            cout<<"Correct"<<endl;
        }
        else if(num>randnum)
        {
            cout<<"To high! Try again."<<endl;
            cout<<"Enter the number between 1 to 100: ";
            cin>>num;
        }
        else if(num<randnum)
        {
            cout<<"To low! Try again."<<endl;
            cout<<"Enter the number between 1 to 100: ";
            cin>>num;
        }
    }
    return 0;
}
