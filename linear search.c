#include<stdio.h>
int main()
{
    int a[10],i,n,se,found=0;
    printf("enter size of an array\n");
    scanf("%d",&n);
    printf("enter elements in an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter searching element\n");
    scanf("%d",&se);
for(i=0;i<n;i++){
    if(a[i]==se){
        printf("element is found at %d",i);
        found=1;
        break;
    }
}
if(found==0){
    printf("element is not found");
}
return 0;
}
