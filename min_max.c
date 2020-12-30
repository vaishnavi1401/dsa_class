#include<stdio.h>
int main()
{
    int arr[100];
    int n,max,min;
    printf("enter array limit");
    scanf("%d",&n);
    printf("enter array numbers");
    for(int i=0;i<n;i++)
    {

        scanf("%d",&arr[i]);

    }
    min=arr[0];
    max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
        if(max<arr[i])
            max=arr[i];

    }
    printf("maximum number %d \n",max);
    printf("minimum number %d \n",min);
}
