
#include<bits/stdc++.h>
using namespace std;
int matrix[100][100];
int semiMatrix[100][100];
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
        for(j=0; j<n; j++)
        {
            cin>>matrix[i][j];
        }
    }
}
void show_value(int result_matrix[100][100])
{
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<result_matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}
int determin_function(int subMatrix[100][100],int n){
    int inverse_matrix[100][100];
    int i1=0,j1=0;
int sign=1;
    int result = 0;

    if(n==2)
    {
        return (subMatrix[0][0]*subMatrix[1][1]-subMatrix[0][1]*subMatrix[1][0]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                if(j==0&&k==i)
                {
                    continue;
                }
                else
                {
                    inverse_matrix[i1][j1] = subMatrix[j][k];
                    j1++;
                    if(j1>n-1)
                    {

                        i1++;
                        j1=0;
                    }
                }
            }
        }
    result = result+(sign*subMatrix[0][i]*determin_function(inverse_matrix,n-1));
    sign = sign*(-1);
    }
    return result;
}
int getCoFactor (int p, int q)
{
	int i = 0, j = 0;
	for(int row = 0; row < n; ++row){
		for(int col = 0; col < n; ++col){
			if(row != p && col != q){
				semiMatrix[i][j++] = matrix[row][col];
				if(j == n-1){
					j = 0;
					i++;
				}
			}
		}
	}
	return determin_function(semiMatrix,n-1)*((pow(-1,(p+q))));
}
void matrix_inversion(){
int i2,j2;
int a=0,b=0;
int transpose_matrix[100][100];

for(i2=0;i2<n;i2++){
    for(j2=0;j2<n;j2++){
transpose_matrix[i2][j2]=getCoFactor(i2,j2);
    }
}

int result_matrix[100][100];
 int deter = determin_function(matrix,n);
for(i2=0;i2<n;i2++){
    for(j2=0;j2<n;j2++){
result_matrix[i2][j2]=deter*transpose_matrix[j2][i2];
    }
}
 show_value(result_matrix);

}

int main()
{
    set_matrix_size();
    input_matrix_element();

    matrix_inversion();


    return 0;
}
