#include <stdio.h>
int main(void)
{
	int i=0;
	int sum=0;
	for(i=1;i<=100;i++){
		if(i%2!=0){
		sum=sum+i;	
		}
	}
	printf("1到100的奇数和为：%d",sum);
	return 0;
}
