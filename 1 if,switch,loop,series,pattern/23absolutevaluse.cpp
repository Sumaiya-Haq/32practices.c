#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your integer number= ";
    cin>>num;

    if(num<0)
    {
        cout<<(-num);
    }

    else{
        cout<<num;
    }

    getch();
}