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
    printf("\t\t||                 ѧ���ɼ�����ϵͳ                 ||\n");
    printf("\t\t||                  1.���ѧ���ɼ�                  ||\n");//4
	printf("\t\t||                  2.���ѧ���ɼ�                  ||\n");
    printf("\t\t||                  3.��ѯѧ���ɼ�                  ||\n");
    printf("\t\t||                  4.ѧ����������                  ||\n");//��ƽ���ɼ��ͼ�����ɼ�
    printf("\t\t||                  5.�˳�ѧ���ɼ�����ϵͳ          ||\n");
    printf("\t\t======================================================\n");
}

void Input()//1.���ѧ���ɼ�
{
	printf("\t\t������ѧ������:");
	scanf("%d",&stu_num); 
    printf("\t\t�밴˳������ѧ��������ѧ�ţ�ѧ�Ƴɼ�����ͬ��֮����Tab������\n");
    printf("\t\t����	ѧ��    Math    English		C\n");
    for(i=0;i<stu_num;i++)
    {
        printf("\t\t");
        scanf("%s%s%f%f%f", stu[i].Name, stu[i].ID,&stu[i].Math, &stu[i].English, &stu[i].C);
    }
        printf("\t\t��ʾ���ɼ�������ϣ�\n\n");
		printf("\t\t------�����-------\n\n");
}

void Output()//2.���ȫ��ѧ����Ϣ
{
    printf("\t\t����\tѧ��\t\tMath\t\tEnglish\t\tC\n");
	for (i = 0; i < stu_num; i++)
    {
        printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	}
}

void Find()//3.��ѯѧ���ɼ�
{
    int a, i;
    float sum, ave;
    printf("\t\t======================================================\n");
    printf("\t\t||            ����ӭ����ѧ����Ϣ��ѯϵͳ��          ||\n");
	printf("\t\t||                1.��ѧ����������                  ||\n");
    printf("\t\t||                2.��ѧ��ѧ�Ų���                  ||\n");
    printf("\t\t======================================================\n");
    printf("\t\t>>>��ѡ��1--2��");
    scanf("%d", &a);
    switch (a)
    {
    case 1://1.��ѧ������������
    {
        char Name[20];
        printf("\t\t>>>������Ҫ���ҵ�ѧ����������");
        scanf("%s", Name);
        printf("\t\t>>>������%sͬѧ����Ϣ��\n\n",Name);
        for ( i = 0;  i< stu_num; i++)
        {
            if (strcmp(Name, stu[i].Name) == 0)
            {
                sum = stu[i].Math + stu[i].English + stu[i].C;
                ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
                printf("\t\t����\tѧ��\tMath\tEnglish\tC\tƽ���ɼ�\t�ܳɼ�\n");
                printf("\t\t%s\t %s\t %.2f\t\t  %.2f\t\t %.2f\t\t%.2f\t\t%.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C, ave, sum);
            }
 
        }
                 
    }
    break;
    case 2://2.��ѧ��ѧ�Ų���
    {
        char Num[20];
        printf("\t\t>>>������Ҫ���ҵ�ѧ����ѧ�ţ�");
        scanf("%s", Num);
        printf("\t\t>>>������%s��ͬѧ����Ϣ��\n\n",Num);
        for ( i = 0; i < stu_num; i++)
        {
            if (0 == strcmp(Num, stu[i].ID))
            {
                sum = stu[i].Math + stu[i].English + stu[i].C;
                ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
                printf("\t\t����\tѧ��\tMath\tEhglish\tC\tƽ���ɼ�\t�ܳɼ�\n");
                printf("\t\t%s\t %s\t %.2f\t\t  %.2f\t\t %.2f\t\t%.2f\t\t%.2f\n\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[i].C, ave,sum);
            }
             
        }
    }
    break;
	default:
            printf("\n\t\t>>>������������������!\n\n");
    }
}
void Order()//4.ѧ����������
{
    int a;
	float ave,sum;
    printf("\t\t======================================================\n");
    printf("\t\t||            ����ӭ����ѧ���ɼ�����ϵͳ��          ||\n");
    printf("\t\t||                1.��ѧ���ܳɼ�����                ||\n");
    printf("\t\t||                2.��ѧ��C�ɼ�����                 ||\n");
	printf("\t\t||                3.��ѧ����ѧ�ɼ�����              ||\n");
	printf("\t\t||                4.��ѧ��Ӣ��ɼ�����              ||\n");
	printf("\t\t||                5.��ѧ��ѧ������ɼ�              ||\n");
    printf("\t\t======================================================\n");
    printf("\t\t>>>��ѡ��1--5��");
    scanf("%d", &a);
    printf("\t\t>>>�������£�\n\n");
    printf("\t\t����\tѧ��\tMath\tEnglish\tC\tƽ���ɼ�\t�ܳɼ�\n");
    switch (a)
    {
    case 1://1.��ѧ���ܳɼ�����  ���ݷ�
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
		 printf("\t\t����\tѧ��\t\tMath\t\tEnglish\t\tC\n");
	     for ( i = 0; i < stu_num; i++)
		 {
			 sum = stu[i].Math + stu[i].English + stu[i].C;
             ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
           //printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	        printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[n].C,ave, sum);
         }
        
         
    }break;
    case 2://2.��ѧ��C�ɼ�����
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
         printf("\t\t����\tѧ��\t\tMath\t\tEnglish\t\tC\n");
	     for ( i = 0; i < stu_num; i++)
		 {
			 sum = stu[i].Math + stu[i].English + stu[i].C;
             ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
           //printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	        printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[n].C,ave, sum);
         }
    } break;
	case 3://3.��ѧ��Math�ɼ�����
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
		 printf("\t\t����\tѧ��\t\tMath\t\tEnglish\t\tC\n");
	     for ( i = 0; i < stu_num; i++)
		 {
			 sum = stu[i].Math + stu[i].English + stu[i].C;
             ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
           //printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	        printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[n].C,ave, sum);
         }
    }
    break;
	case 4://4.��ѧ��English�ɼ�����
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
		 printf("\t\t����\tѧ��\t\tMath\t\tEnglish\t\tC\n");
	     for (i = 0; i < stu_num; i++)
		 {
			 sum = stu[i].Math + stu[i].English + stu[i].C;
             ave = (stu[i].Math + stu[i].English + stu[i].C) / 3;
           //printf("\t\t%s\t%s\t %.2f\t\t  %.2f\t\t %.2f\n\n", stu[i].Name, stu[i].ID, stu[i].Math, stu[i].English, stu[i].C);
	        printf("\t\t%s\t%s\t  %.2f\t\t  %.2f\t\t%.2f\t\t%.2f\t\t%.2f\n", stu[i].Name, stu[i].ID,  stu[i].Math, stu[i].English, stu[n].C,ave, sum);
         }
    }
    break;
    case 5://5.��ѧ��ѧ������ɼ�
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
		 printf("\t\t����\tѧ��\t\tMath\t\tEnglish\t\tC\n");
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
            printf("\n\t\t>>>������������������!\n\n");
    }

}


int main()
{
    int selection;
    while (1)
    {
        Menu();
        printf("\t\t>>>��ѡ��1--5:");
        scanf("%d", &selection);
        printf("\n");
        switch (selection)
        {
        case 1:  Input();     break;  //1.���ѧ���ɼ�
		case 2:  Output();    break;  //2.���ȫ��ѧ����Ϣ
        case 3:  Find();      break;  //3.��ѯѧ���ɼ�
        case 4:  Order();     break;  //4.ѧ����������
        case 5:
            printf("\n\t\t>>>���ѳɹ��˳�ѧ���ɼ�����ϵͳ����лʹ�ã�\n\n");
            exit(0);
            break;
        default:
            printf("\n\t\t>>>������������������!\n\n");
        }
    }
    return 0;
}
