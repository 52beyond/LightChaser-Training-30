#include <stdio.h>
int main(){
    int a,sum=0;
    for(a=1;a<=100;a=a+2){
        sum=a+sum;
    }
    printf("%d",sum);
    return 0;
}