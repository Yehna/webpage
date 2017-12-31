#include<stdio.h>
#include<stdlib.h>
struct Student
	{ int id;
	  char name[20];
	  int score[3]; 
	}group[5];
int main()
{
	int i,aver;
	void input();
	void average();
	void max();
	input();
	average();
	max();
	system("pause");
	return 0;
}
void input()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("输入第%d学生学号、姓名和三科成绩：\n",i+1);
		scanf("%d %s %d %d %d",&group[i].id,group[i].name,&group[i].score[0],&group[i].score[1],&group[i].score[2]);	
	}
}
void average()
{
	int i,aver;
	for(i=0;i<5;i++)
	{
		aver=(group[i].score[0]+group[i].score[1]+group[i].score[2])/3;
		printf("第%d位学生的平均分为%d\n",i+1,aver);
	}	
}
void max()
{
	int i,j,k,max;
	for(j=0;j<3;j++) 
	{
		for(i=0;i<4;i++)
		{
			if(group[i].score[j]>group[i+1].score[j]){k=i;max=group[i].score[j];}
			else {k=i+1;max=group[i+1].score[j];}
		}
		printf("第%d位同学第%d科成绩最高，成绩为：%d\n",k,j,max);
	}
}
