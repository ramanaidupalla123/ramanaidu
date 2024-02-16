#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
    printf("enter the size of an array");
	scanf("%d",&n);
	p=(int *)malloc(sizeof(int*));
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
      } 
      int sum=0;
	for(i=0;i<n;i++){
		//printf("%d ",*(p+i));
        sum=sum+(*(p+i)) ;
}
    printf("sum=%d", sum);
    
    return 0;
    } 