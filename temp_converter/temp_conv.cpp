#include<iostream>
using namespace std;
int main()
{
    float c,conv;
    cout<<"Enter temperature in celsius:";
    cin>>c;
    conv= (1.8*c)+32;
    cout<<"The temperature in fahrenheit is:"<<conv<<endl;
    return 0;

}