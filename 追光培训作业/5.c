#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,sum=0;
    printf("要几个数？");
    if (scanf("%d",&n)!=1)return 1;

    int *arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("内存不足\n");
        return 1;
    }
     printf("请依次输入%d个数字:\n",n);
    for(i=0;i<n;i++){
         scanf("%d",&arr[i]);  
         sum+=arr[i];
    }  
    double avg=(double)sum/n;
    printf("平均值为：%.2f",avg);
    
    free(arr);
    arr=NULL;
    return 0;
}