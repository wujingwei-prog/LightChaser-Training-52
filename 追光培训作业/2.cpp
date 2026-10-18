#include <stdio.h>
int main(void)
{
	char c;
	int a,b;
	scanf("%d%c%d",&a,&c,&b);
	switch(c){
		case'+':
			printf("%d",a+b);
			break;
		case'-':
		    printf("%d",a-b);
		    break;
		case'*':
			printf("%d",a*b);
			break;
		case'/':
			if(b==0){
			printf("错误，0不能作为除数");
			}
			else{
				printf("%d",a/b);
			} 
			break;
		default:
			printf("暂不支持该运算符");			
	}
	return 0;
}
