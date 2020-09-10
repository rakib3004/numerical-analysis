#include<bits/stdc++.h>
using namespace std;
int main(){
   FILE *inputPointer = freopen("InputData.txt", "r", stdin);
	FILE *outputPointer = freopen("OutputResult.txt", "a+", stdout);

	int n;
	cin>>n;
	while(n--){
double a[3],b[3],c[3],d[3];
for(int i=0;i<3;i++){
    cin>>a[i]>>b[i]>>c[i]>>d[i];
}

 bool p,q,r;
 p=false;
 q=false;
 r=false;
 if(((abs(a[0]))>(abs(b[0])+abs(c[0])))){
    p=true;
 }if((abs(b[1]))>(abs(a[1])+abs(c[1]))){
     q=true;
 }if((abs(c[2]))>(abs(a[2])+abs(b[2]))){
 r=true;
 }
 bool pqr = p&q&r;

 if(pqr){
double x,y,z;
 int n=25;

 x=d[0]/a[0];
 y=d[1]/b[1];
 z=d[2]/c[2];
 double x1,y1,z1;

 for(int i=0;i<n;i++){
x1=(d[0]-(b[0]*y)-(c[0]*z))/a[0];
y1=(d[1]-(a[1]*x)-(c[1]*z))/b[1];
z1=(d[2]-(a[2]*x)-(b[2]*y))/c[2];
x=x1;
y=y1;
z=z1;

//cout<<"Iteration "<<(i+1)<<" "<<endl;
//cout<<"x = "<<x<<endl;
//cout<<"y = "<<y<<endl;
//cout<<"z = "<<z<<endl<<endl;
}
double x2,x3,x4,x5,y2,y3,y4,y5,z2,z3,z4,z5;

x2 = floor(x);
x3 = ceil(x);

cout<<"The answer is : "<<endl;
cout<<"x = "<<x<<endl;
cout<<"y = "<<y<<endl;
cout<<"z = "<<z<<endl;
 }

 else{
    cout<<"Invalid Input for this system!!!!"<<endl;
    return 0;
 }
 	}
fclose(inputPointer);
	fclose(outputPointer);
      return 0;
}

//15 3 -2 85
//2 10 1 51
//1 -2 8 5


//10 -1 2 6
//-1 11 1 22
//2 -1 10 -10
