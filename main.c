#include <stdio.h>
#include <stdlib.h>

int main()
{int t[10];
int i,n,max1;
int max2;
    printf("enter the number");
    for(i=0;i<10;i++){
        printf("yhe number t[%d]",i+1);
        scanf("%d",&t[i]);

    }max1=t[0];
    max2=t[0];
    for(i=1;i<10;i++){
        if(t[i]>max1){
            max2=max1;
            max1=t[i];
        }
        if(t[i]>max2 && t[i]<max1)
            max2=t[i];
        }
    printf("the max1=%d\n",max1);
    printf("the max2=%d\n",max2);
    return 0;
}
