#include<stdio.h>

int main()
{
int a[10],max,min,i,n;
printf("enter size of array");
scanf("%d",&n);
printf("enter elements of array");
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
max=a[0];
for(i=1;i<n;i++) {
if(max<a[i]){
max=a[i];}
}
printf("max=%d\n",max);
min=a[0];
for(i=1;i<n;i++) {
if(min>a[i]){
min=a[i];
}}
printf("min=%d",min);

return 0;
}