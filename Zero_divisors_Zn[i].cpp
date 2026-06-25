#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,x,y,n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    cout<<"Pairs of zero divisors in the form a+ib and c+id in Zn[i] are:"<<"\n\n"<<"a "<<"b\t\t"<<"c "<<"d"<<endl;
    
    for(a=0;a<n;a++)
    {
        for(c=0;c<n;c++)
        {
            for(b=0;b<n;b++)
            {
                for(d=0;d<n;d++)
                {
                    if(a==0 && b==0)
                    {
                    
                    }
                    else if(c==0 && d==0)
                    {

                    }

                    else
                    {   
                        x=(a*c-b*d);
                        y=(a*d+b*c);
                        
                        if(x%n==0 && y%n==0)
                        {
                            cout<<a<<" "<<b<<"\t\t"<<c<<" "<<d<<endl;
                        }
                    }     
                }
            }
        }
        
    }        
    return 0;
}