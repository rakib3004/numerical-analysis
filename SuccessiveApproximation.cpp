#include <bits/stdc++.h>

using namespace std;

#define f(x) (cos(x)-3*(x)+5)
#define fi(x) ((cos(x)+5)/3)
#define EPS 1.0e-4

int main()
{
    int n=0;
    double a=1, b=2, x0;

    while(1)
    {
        x0=fi(a);
        n++;

        if(fabs(f(x0))<EPS)
        {
            cout<<"Root = "<<x0<<endl;
            cout<<"No of itr = "<<n<<endl;
            exit(0);
        }

        a=x0;
    }
}
