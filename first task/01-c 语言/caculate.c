#include <stdio.h>
int main(){
    // 提示用户输入两个数字 a、b
    printf("Please input two number a,b\n");
    // 说明 a 是被除数，b 是除数
    printf("a is dividend , b is divisor\n");
    float a,b;              // 定义两个单精度浮点变量 a 和 b
    printf("a=\n");         // 提示输入被除数 a
    scanf("%f",&a);         // 读取用户输入的被除数 a
    printf("b=\n");         // 提示输入除数 b
    scanf("%f",&b);         // 读取用户输入的除数 b
    if(b==0)                // 判断除数是否为 0
    {
        printf("b can't be 0");   // 除数为 0 时不合法，给出提示
    }else{
        printf("a/b=%f",a/b);     // 否则输出 a/b 的运算结果
    }
    return 0;               // 程序正常结束
}
