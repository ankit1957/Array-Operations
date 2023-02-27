#include<stdio.h>
int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int n = size-1;
    printf("Array before rotation:\n");
    for(int i = 0; i<size; i++)
        printf("%d\t", arr[i]);
    for(int i = 0; i<n; i++)
    {
        int j, last;
        last = arr[size-1];
        j = size-1;
        while(j>0){
            arr[j] = arr[j-1];
            j--;
        }
        arr[0] = last;
    }
    printf("\nArray after rotation :\n");
    for(int i=0; i<size; i++)
        printf("%d\t", arr[i]);
    return 0;
}