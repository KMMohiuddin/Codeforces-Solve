#include<stdio.h>
int main(){

int n,k,i,count=0;
scanf("%d %d",&n,&k);
int score[n-1];
for(i=0;i<n;i++){
    scanf("%d",&score[i]);
}

for(i=n-1;i>=0;i--){

    if(score[i]!=0 && score[i]>=score[k-1]){
      count++;

    }

}
printf("%d",count);
}
