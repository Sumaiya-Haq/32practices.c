// inline Floyd's Triangle
#include<iostream>
using namespace std;
 inline void tri(int n)
 {
    int count=1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=i;j++){
             cout<<" "<<count;
          count ++;
        }
        cout<<endl;
    }
 }
 int main()
 {
    int n;
    cin>>n;
   tri(n);
   return 0;
   
 }
