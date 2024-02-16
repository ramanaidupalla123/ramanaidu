#include<stdio.h>
int main()
{
    int a[10],i,se,n,mid,end,start,pos=-1;
    printf("enter size of an array\n");
    scanf("%d",&n);
    printf("enter elements in an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter searching element");
    scanf("%d",&se);

        start=0;
        end=n-1;
        while(start<=end){
        mid=(start+mid)/2;
        if(se==a[mid])
        {
            printf("element is found at position %d",mid+1);
            pos++;
            break;
        }
    
       else if(se<=a[mid])
       {
        end=mid-1;
           
       }
        else 
        start=mid+1;
        }
    if(pos==-1)
    {
        printf("element is not found ");
    }
    
    }
    
