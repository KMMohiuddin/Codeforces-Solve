#include<stdio.h>
int main(){
int a,b,c,count =0,count2=0,n;
scanf("%d",&n);
for(int i=0;i<n;i++){
    scanf("%d %d %d",&a,&b,&c);
    if(a==1) count++;
    if (b==1) count++;
     if (c==1) count++;
     if(count>1)count2++;
     count =0;
}
printf("%d",count2);

}
