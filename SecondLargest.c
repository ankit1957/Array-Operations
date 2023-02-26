#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n], i;
    printf("Enter elements:");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    printf("Elements are:\n");
    for(i=0; i<n;i++)
        printf("%d\t", arr[i]);
    int max1, max2;
    max1 = max2 = 0;
    for(i=0; i<n; i++)
    {
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1){
            max2 = arr[i];
        }
    }
    printf("\nLargest element : %d\n", max1);
    printf("Second largest element : %d\n", max2);
    return 0;
}