
//     a
//    abc
//   abcde
//    abc
//     a
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter any number";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" "; //printing space
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<char(c+96);// printing star.
        }
        cout<<endl;
    }
    for(r=n-1;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" "; //printing space
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<char(c+96);// printing star.
        }
        cout<<endl;
    }
    getch();

}