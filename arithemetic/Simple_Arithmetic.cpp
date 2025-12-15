#include<iostream>
using namespace std;
int main()
{
    int a,b,sum,sub,mul,div;
    cout<<"Enter your first number: ";
    cin>>a;
    cout<<"Enter your second number: ";
    cin>>b;
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;//IN THIS BOTH A AND B ARE CONSIDERED sAS A NON-ZERO NUMBER;
    cout<<"The result is: "<<endl<<sum<<endl<<sub<<endl<<mul<<endl<<div<<endl;
    return 0;
}