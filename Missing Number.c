#include<stdio.h>
int main()
{
    int n,i,a[100],j,t;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the perspective values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(i=0;i<=n;i++)
    {
        if(a[n-1]!=n)
        {
            printf("Missing Number is : %d ",n);
            break;
        }
        if(a[i]!=i)
        {
            printf("Missing Number is : %d ",i);
            break;
        }
    }
    return 0;
}
