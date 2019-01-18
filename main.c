#include <stdio.h>
struct student
{
    int name[100];
    int yw;
    int sx;
    int yy;
};
int index=0;
struct student arr[1000];

int main(){
    while(1)
    {
        printf("1---添加学生成绩\n");
        printf("2---删除学生成绩\n");
        printf("3---显示所有学生成绩\n");
        printf("4---业务1:所有总分不及格的学生\n");
        printf("5---业务2:每一科都不及格的学生\n");
        printf("6---业务3:显示总分最高的学生\n");
        printf("7---业务4:显示平均分最高的学生\n");
        printf("8---退出系统\n");
        
        printf("请输入你要使用的功能按键\n");
        int code;
        scanf("%d",&code);

        if(code==1)
        {
            printf("请输入学生姓名\n");
            scanf("%s",arr[index].name);
            printf("请输入语文成绩\n");
            scanf("%d",&(arr[index].yw));
            printf("请输入数学成绩\n");
            scanf("%d",&(arr[index].sx));
            printf("请输入英语成绩\n");
            scanf("%d",&(arr[index].yy));
            index++;

            printf("添加成功，回车继续\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);

        }
        if(code==2)
        {
            if(index>0)
            {
                index--;
                printf("删除成功，回车继续\n");
            }
            else
            {
                printf("当前无可删除的学生信息\n");
            }
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code==3)
        {
            printf("输出所有学生成绩:\n");
            for(int i=0;i<index;i++)
            {
                printf("第%d个学生%s语文成绩%d数学成绩%d英语成绩%d",i+1,arr[i].name,arr[i].yw,arr[i].sx,arr[i].yy);
            }
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if(code==4)
        {
            printf("总分不及格的学生有\n");
            for(int i=0;i<index;i++)
            {
                if(arr[i].yw+arr[i].sx+arr[i].yy<180)
                {
                    printf("%s同学总成绩不及格",arr[i].name);
                    char x;
                    scanf("%c",&x);
                    scanf("%c",&x);
                }
                else
                {
                    printf("无不及格同学");
                    char x;
                    scanf("%c",&x);
                    scanf("%c",&x);
                }
            }
        }
        if(code==5)
        {
            for(int i=0;i<index;i++)
            {
                if(arr[i].yw<60 && arr[i].sx<60 && arr[i].yy<60)
                {
                    printf("%s同学各科成绩不及格",arr[i].name);
                    char x;
                    scanf("%c",&x);
                    scanf("%c",&x);
                }
                else
                {
                    printf("无不及格同学");
                    char x;
                    scanf("%c",&x);
                    scanf("%c",&x);
                }
            }
        }
        if(code==6)
        {
            
            printf("总分最高的学生为：\n");

            int max = 0;
            int stuID = 0;
            
            for(int i = 0; i < index; i++)
            {
                int sum = arr[i].yw + arr[i].sx + arr[i].yy;
                if(max < sum){
                    max  =  sum;
                    stuID = i;
                }
            }
            printf("总分最高的学生姓名为%s，语文：%d，数学%d，英语%d\n",arr[stuID].name,arr[stuID].yw,arr[stuID].sx,arr[stuID].yingyu);
            
            printf("\n点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if(code==7)
        {
            double max = 0.0;
            int stuID = 0;
            for(int  i = 0; i < index; i++)
            {
                if(arr[i].yw >= 60 && arr[i].sx >= 60 && arr[i].yy >= 60){
                    double avg = (arr[i].yw + arr[i].sx + arr[i].yy)/3.0;
                    if(max < avg){
                        max = avg;
                        stuID = i;
                    }

                }
            }

            printf("平均分最高且无不及格科目的学生姓名为%s，语文：%d，数学%d，英语%d\n",arr[stuID].name,arr[stuID].yuwen,arr[stuID].shuxue,arr[stuID].yingyu);
            
            printf("\n点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if(code==8)
        {
            break;
        }
    }
    return 0;

}