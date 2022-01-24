#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    int a=0,b=1,next;
    cout<<a<<" "<<b<<" ";
    for(i=0;i<n-2;i++)
    {
        next=a+b;
        a=b;
        b=next;
        cout<<next<<" "<<" ";
    }
}
