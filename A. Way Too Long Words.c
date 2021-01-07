#include<stdio.h>
int main(){
int l,w,i,n;
char c[100];
scanf("%d",&w);
for(i=0;i<=w;i++){
gets(c);
l= strlen(c);
if(l>10){
    printf("%c%d%c\n",c[0],l-2,c[l-1]);
}else
printf("%s\n",c);}

}
