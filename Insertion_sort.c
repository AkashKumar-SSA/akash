#include<stdio.h>
#include<conio.h>

void print(int *arr, int size)
{
    int i;
    printf("The array is:");

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return;
}

void insertion_sort(int *arr,int size)
{
    int key,i,j,k;
    for(i=1;i<size;i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[5]={27,88,589,45,9};
    int size=5;
    
    printf(" WELCOME TO INSERTION SORT\n");
    printf("\nThe array before insertion is:\n");
    print(arr,size);
    printf("\n\nThe array after insertion is:\n");
    insertion_sort(arr,size);
    print(arr,size);
    return 0;
}
