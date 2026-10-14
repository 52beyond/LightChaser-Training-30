#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student{
    char name[20];
    float score[3];
};
int main(){
    int num;
    int i,x;
    printf("请输入学生人数\n");
    scanf("%d",&num);
    struct student *all=malloc(num*sizeof(struct student));
    for(i=0;i<num;i++)
    {
        printf("请输入第%d个学生的名字\n",i+1);
        scanf("%s",all[i].name);
        printf("请输入3科成绩");
        for(x=0;x<3;x++)
        {
            scanf("%f",&all[i].score[x]);
        }
    }
    printf("成绩单为");
    for (i = 0; i < num; i++) {
        float total = all[i].score[0] + all[i].score[1] + all[i].score[2];
        printf("%s: %.1f, %.1f, %.1f, 总分: %.1f\n", 
               all[i].name, 
               all[i].score[0], 
               all[i].score[1], 
               all[i].score[2], 
               total);
    }
    free(all);
    return 0;
}