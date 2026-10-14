#include <stdio.h>
#include <stdlib.h>
int main(){
    int *a;
    int number;
    int i;
    printf("请输入数量\n");
    scanf("%d",&number);
    a=(int*)(malloc(number*sizeof(int)));
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
        printf("a[%d]=%d\n",i,a[i]);
    }
    int x;
    int sum=0;
    for(x=0;x<number;x++)
    {
        sum+=a[x];
    }
    float divided=sum/number;
    printf("sum/number=%f",divided);
    free(a);
    return 0;
}