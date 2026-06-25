#include<iostream>
using namespace std;
#define pi 3.14

struct circle
{
    double r;
};  
int main()
{
    circle c[20];
    double area[20];
    int i,n;
    cout<<"Enter the number of circles:\t"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cout<<"Enter the radius:\t"<<endl;
        cin>>c[i].r;
    }

    for(i=1;i<=n;i++)
    {
        area[i]=pi*(c[i].r*c[i].r);
        cout<<"The area is:\t"<<area[i]<<endl;
    }
    return 0;
}


