#include<stdio.h>
#include<string.h>
#define max 30
int main()
{    
int S1[max],S2[max];
gets (S1);
gets(S2);
strcat (S1,S2);
    printf("%s",S1);
    return 0;
    }