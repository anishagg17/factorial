#include<stdio.h>
int main()

{
    int n,i;
    scanf("%d",&n);
    int prod=1;
    for(i=2;i<n;i++)
        prod=prod*i;
    printf("factorial %d",prod);
