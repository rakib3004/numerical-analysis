#include<bits/stdc++.h>
using namespace std;
double matrix[100][100];
double semiMatrix[100][100];
double product[100];
double final_matrix[100];
int i,j,k;
int n;
void set_matrix_size()
{
    cout<<"Enter Matrix Size : ";
    cin>>n;
}
void input_matrix_element()
{
    cout<<"Enter Matrix Element : "<<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<=n; j++)
        {
             if(j==n){
        cin>>product[i];
        }
        else
            cin>>matrix[i][j];

        }
        }
        }

int main(){
    set_matrix_size();
    input_matrix_element();
    return 0;
}
