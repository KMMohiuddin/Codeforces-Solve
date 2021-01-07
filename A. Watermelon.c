
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w;//,c;
    scanf("%d",&w);
    //c=w/2;
    if(w%2==0&&w>=1&&w<=100&&w>2)
         printf("YES");
    else
        printf("NO");
    return 0;
}
