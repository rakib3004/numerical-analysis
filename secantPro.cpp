
#include<bits/stdc++.h>
using namespace std;
#define f(x) ((x)*(x)*(x)-8*(x)-5)

#define EPS 1.0e-3
int main()
{
    int n=0;
        double x0,x1,x2;
         x0=3;
         x1=4;

    while(1)
    {
        x2=((x0*f(x1)-x1*f(x0))/(f(x1)-f(x0)));

        x0 = x1;
        x1 = x2;

        n++;
        if(fabs(f(x2))<EPS)
        {
            cout<<"Root = "<<x0<<endl;
            cout<<"No of itr = "<<n<<endl;
            exit(0);
        }

    }
}

