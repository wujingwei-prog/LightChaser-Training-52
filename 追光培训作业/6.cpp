#include <stdio.h>
#include <stdlib.h>
struct student{
	char name[20];
	float score;
};
int main()
{
    int n,i;
	printf("请输入学生人数：");
	scanf("%d",&n);
	struct student stu[100];
	for(i=0;i<n;i++){
		printf("请输入第%d位学生的姓名和分数:",i+1);
		scanf("%s%f",stu[i].name,&stu[i].score);
	}
	for(i=0;i<n;i++){
		printf("姓名：%s,分数：%.2f\n",stu[i].name,stu[i].score);
	}
	return 0;
}
