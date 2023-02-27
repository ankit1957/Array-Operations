#include<stdio.h>
int main(){
    int arr[] = {8, 7, 2, 5, 3, 1};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Original Array:\n");
    for(int i=0; i<size; i++)
        printf("%d\t", arr[i]);
    printf("\n");
    int targetSum;
    printf("Enter the target sum: ");
    scanf("%d", &targetSum);
    for(int i =0; i<size; i++)
    {
        for(int j=i+1; j<size; j++){
            int sum = arr[i]+arr[j];
            if(sum == targetSum){
                printf("pair founded i.e %d & %d\n", arr[i], arr[j]);
            }
        }
    }
    return 0;
}