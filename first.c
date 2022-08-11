#include <stdio.h>
#include<conio.h>

int main()
{
    int a[100],i,n,x=0;
    printf("enter array size:\n");
    scanf("%d",&n);
    printf("array size is %d\n",n);
    for(i=0;i<n;i++)
    {
        printf("enter no %d :",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0){
            printf("odd no= %d\n",a[i]);
            x=x+a[i];
        }
    }
    printf("sum of odd no = %d",x);
    return 0;
}