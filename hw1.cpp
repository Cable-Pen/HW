#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
int a[100];
int x;
float y;
int z;
for(int i=0;i<100;i++)
a[i]=0;
for(int j=1;j<=6000000;j++){
x=rand()%100;
y=float(x)/100;
z=y*100;
a[z]++;
}
float w=1;
while(w>=1 || w<0){
cout<<"enter a number between 0.00 to 0.99 ";
cin>>w;}
int e=w*100;
cout<< "there are " << a[e] << " of " << w; 

int ff;
cin>>ff;

return 0;
}