#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct student
{
    char Name[20];
	char ID[20];
    float Math;
	float English;
	float C;
}
stu[1000];
int stu_num=0; 
int i;

void Menu()
{
    printf("\t\t======================================================\n");
    printf("\t\t||                 学生成绩管理系统                 ||\n");
    printf("\t\t||                  1.添加学生成绩                  ||\n");//4
	printf("\t\t||                  2.输出学生成绩                  ||\n");
    printf("\t\t||                  3.查询学生成绩                  ||\n");
    printf("\t\t||                  4.学生数据排序                  ||\n");//按平均成绩和计算机成绩
    printf("\t\t||                  5.退出学生成绩管理系统          ||\n");
    printf("\t\t======================================================\n");
}

void Input()//1.添加学生成绩
{
	printf("\t\t请输入学生个数:");
	scanf("%d",&stu_num); 
    printf("\t\t请按顺序输入学生姓名，学号，学科成绩，不同项之间用Tab隔开：\n");
    printf("\t\t姓名	学号    Math    English		C\n");
    for(i=0;i<stu_num;i++)
    {
        printf("\t\t");
        scanf("%s%s%f%f%f", stu[i].Name, stu[i].ID,&stu[i].Math, &stu[i].English, &stu[i].C);
    }
        printf("\t\t提示：成绩存入完毕！\n\n");
		printf("\t\t------请继续-------\n\n");
}

void Output()//2.输出全班学生信息
{
    printf("\t\t姓名\t学号\t\tMath\t\tEnglish\t\tC\n");
	for (i = 0; i < stu_num; i++)
    {
        printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	}
}

void Find()//3.查询学生成绩
{
    int a, i;
    float sum, ave;
    printf("\t\t======================================================\n");
    printf("\t\t||            ※欢迎进入学生信息查询系统※          ||\n");
	printf("\t\t||                1.按学生姓名查找                  ||\n");
    printf("\t\t||                2.按学生学号查找                  ||\n");
    printf("\t\t======================================================\n");
    printf("\t\t>>>请选择1--2：");
    scanf("%d", &a);
    switch (a)
    {
    case 1://1.按学生的姓名查找
    {
        char Name[20];
        printf("\t\t>>>请输入要查找的学生的姓名：");
        scanf("%s", Name);
        printf("\t\t>>>以下是%s同学的信息：\n\n",Name);
        for ( i = 0;  i< stu_num; i++)
        {
            if (strcmp(Name, stu[i].Name) == 0)
            {
                sum = stu[i].Math + stu[i].English + stu[i].C;
                ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
                printf("\t\t姓名\t学号\tMath\tEnglish\tC\t平均成绩\t总成绩\n");
                printf("\t\t%s\t %s\t %.2f\t\t  %.2f\t\t %.2f\t\t%.2f\t\t%.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C, ave, sum);
            }
 
        }
                 
    }
    break;
    case 2://2.按学生学号查找
    {
        char Num[20];
        printf("\t\t>>>请输入要查找的学生的学号：");
        scanf("%s", Num);
        printf("\t\t>>>以下是%s号同学的信息：\n\n",Num);
        for ( i = 0; i < stu_num; i++)
        {
            if (0 == strcmp(Num, stu[i].ID))
            {
                sum = stu[i].Math + stu[i].English + stu[i].C;
                ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
                printf("\t\t姓名\t学号\tMath\tEhglish\tC\t平均成绩\t总成绩\n");
                printf("\t\t%s\t %s\t %.2f\t\t  %.2f\t\t %.2f\t\t%.2f\t\t%.2f\n\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[i].C, ave,sum);
            }
             
        }
    }
    break;
	default:
            printf("\n\t\t>>>输入有误，请重新输入!\n\n");
    }
}
void Order()//4.学生数据排序
{
    int a;
	float ave,sum;
    printf("\t\t======================================================\n");
    printf("\t\t||            ※欢迎进入学生成绩排序系统※          ||\n");
    printf("\t\t||                1.按学生总成绩排序                ||\n");
    printf("\t\t||                2.按学生C成绩排序                 ||\n");
	printf("\t\t||                3.按学生数学成绩排序              ||\n");
	printf("\t\t||                4.按学生英语成绩排序              ||\n");
	printf("\t\t||                5.按学生学号排序成绩              ||\n");
    printf("\t\t======================================================\n");
    printf("\t\t>>>请选择1--5：");
    scanf("%d", &a);
    printf("\t\t>>>排序如下：\n\n");
    printf("\t\t姓名\t学号\tMath\tEnglish\tC\t平均成绩\t总成绩\n");
    switch (a)
    {
    case 1://1.按学生总成绩排序  起泡法
    {
        int m, n;
        struct student tmp;
        for (m = 0; m < stu_num; m++)
        {
            for (n = 0; n < stu_num-1-m; n++)
			{
				if ((stu[n].Math+stu[n].English+stu[n].C) < (stu[n+1].Math+stu[n+1].English+stu[n+1].C))
				 {
                    tmp = stu[n+1];
                    stu[n+1] = stu[n];
                    stu[n] = tmp;
				 }
			}
		}
		 printf("\t\t姓名\t学号\t\tMath\t\tEnglish\t\tC\n");
	     for ( i = 0; i < stu_num; i++)
		 {
			 sum = stu[i].Math + stu[i].English + stu[i].C;
             ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
           //printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	        printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[n].C,ave, sum);
         }
        
         
    }break;
    case 2://2.按学生C成绩排序
    {
        int m, n;
        struct student tmp;
        for (m = 0; m < stu_num; m++)
        {
            for (n = 0; n < stu_num-1 - m; n++)
            {
                if (stu[n].C < stu[n+1].C)
                {
                    tmp = stu[n+1];
                    stu[n+1] = stu[n];
                    stu[n] = tmp;
                }
               // printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[n].Name, stu[n].ID,  stu[n].Math, stu[n].English, stu[n].C, (stu[n].Math + stu[n].English + stu[n].C) / 3, stu[n].Math + stu[n].English + stu[n].C);
            }
        }
         printf("\t\t姓名\t学号\t\tMath\t\tEnglish\t\tC\n");
	     for ( i = 0; i < stu_num; i++)
		 {
			 sum = stu[i].Math + stu[i].English + stu[i].C;
             ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
           //printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	        printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[n].C,ave, sum);
         }
    } break;
	case 3://3.按学生Math成绩排序
    {
        int m, n;
        struct student tmp;
        for (m = 0; m < stu_num; m++)
        {
            for (n = 0; n < stu_num-1 - m; n++)
            {
                if (stu[n ].Math < stu[n+1].Math)
                {
                    tmp = stu[n+1];
                    stu[n + 1] = stu[n];
                    stu[n] = tmp;
                }
                //printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[n].Name, stu[n].ID,  stu[n].Math, stu[n].English, stu[n].C, (stu[n].Math + stu[n].English + stu[n].C) / 3, stu[n].Math + stu[n].English + stu[n].C);
            }
        }
		 printf("\t\t姓名\t学号\t\tMath\t\tEnglish\t\tC\n");
	     for ( i = 0; i < stu_num; i++)
		 {
			 sum = stu[i].Math + stu[i].English + stu[i].C;
             ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
           //printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	        printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[n].C,ave, sum);
         }
    }
    break;
	case 4://4.按学生English成绩排序
    {
        int m, n;
        struct student tmp;
        for (m = 0; m < stu_num; m++)
        {
            for (n = 0; n < stu_num-1 - m; n++)
            {
                if (stu[n+1].English > stu[n].English)
                {
                    tmp = stu[n+1];
                    stu[n+1] = stu[n];
                    stu[n] = tmp;
                }
               // printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[n].Name, stu[n].ID,  stu[n].Math, stu[n].English, stu[n].C, (stu[n].Math + stu[n].English + stu[n].C) / 3, stu[n].Math + stu[n].English + stu[n].C);
            }
        }
		 printf("\t\t姓名\t学号\t\tMath\t\tEnglish\t\tC\n");
	     for (i = 0; i < stu_num; i++)
		 {
			 sum = stu[i].Math + stu[i].English + stu[i].C;
             ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
           //printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	        printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[n].C,ave, sum);
         }
    }
    break;
    case 5://5.按学生学号排序成绩
    {
        int m, n;
        struct student tmp;
        for (m = 0; m < stu_num; m++)
        {
            for (n = 0; n < stu_num-1 - m; n++)
            {
                if (stu[n+1].ID > stu[n].ID)
                {
                    tmp = stu[n+1];
                    stu[n+1] = stu[n];
                    stu[n] = tmp;
                }
               // printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[n].Name, stu[n].ID,  stu[n].Math, stu[n].English, stu[n].C, (stu[n].Math + stu[n].English + stu[n].C) / 3, stu[n].Math + stu[n].English + stu[n].C);
            }
        }
		 printf("\t\t姓名\t学号\t\tMath\t\tEnglish\t\tC\n");
	     for ( i = 0; i < stu_num; i++)
		 {
			 sum = stu[i].Math + stu[i].English + stu[i].C;
             ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
           //printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	        printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[n].C,ave, sum);
         }
    }
    break;
	default:
            printf("\n\t\t>>>输入有误，请重新输入!\n\n");
    }

}


int main()
{
    int selection;
    while (1)
    {
        Menu();
        printf("\t\t>>>请选择1--5:");
        scanf("%d", &selection);
        printf("\n");
        switch (selection)
        {
        case 1:  Input();     break;  //1.添加学生成绩
		case 2:  Output();    break;  //2.输出全班学生信息
        case 3:  Find();      break;  //3.查询学生成绩
        case 4:  Order();     break;  //4.学生数据排序
        case 5:
            printf("\n\t\t>>>您已成功退出学生成绩管理系统，感谢使用！\n\n");
            exit(0);
            break;
        default:
            printf("\n\t\t>>>输入有误，请重新输入!\n\n");
        }
    }
    return 0;
}
