#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//#include<limit.h>

void print(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return;
}

int maximum(int A[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    return max;
}

void count_sort(int A[],int n)
{
    int max=maximum(A,n);
    int *count=(int *)malloc((max+1)*sizeof(int));
    
    for(int i=0;i<max+1;i++)
    {
        count[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        count[A[i]]=count[A[i]]+1;
    }

    int i=0,j=0;
    while(i<=max)
    {
        if(count[i]!=0)
        {
            A[j]=i;
            count[i]=count[i]-1;
            j++;
        }

        else
        {
            i++;
        }
    }
}

int main()
{
    int A[]={3,7,5,3,8,5,9,2};
    int n=8;
    print(A,n);
    count_sort(A,n);
    printf("\nAffter sorting the list\n");
    print(A,n);

    
}
