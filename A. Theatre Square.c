#include<stdio.h>
int main(){
long long int n,m,a;
scanf("%lld %lld %lld",&n,&m,&a);
long double length,width,len,wid;
unsigned long long int noOfStone;
len=(n/a);
wid=(m/a);

if((n%a)==0)
    length= len;
else
    length = len+1;
if((m%a)==0)
width= wid;
else
width=(m/a)+1;
noOfStone = (long long int)length*(long long int)width;
printf("%llu",(long long int)noOfStone);

}
