#include<stdio.h>
void sort(int *,int);
int miss(int *,int);
int main()
{
    int n,i,a[100],f;
    printf("Note: Start entering the numbers from 0 and less than n\n\n");
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("Enter the perspective values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(&a,n);
    f=miss(&a,n);
    printf("Missing Number is : %d ",f);
    return 0;
}
void sort(int *p,int a)
{
    int i,j,t;
    for(i=0;i<a;i++)
    {
        for(j=i+1;j<a;j++)
        {
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}
int miss(int *p,int b)
{
    int i,z;
    for(i=0;i<=b;i++)
    {
        if(*(p+b-1)!=b)
        {
            z=b;
            break;
        }
        if(*(p+i)!=i)
        {
            z=i;
            break;
        }
    }
    return z;
}
