#include <stdio.h>
#include <stdlib.h>
int c=0;
void merge(int arr[], int l, int m, int r)
{
 int i, j, k;
 int n1 = m - l + 1;
 int n2 = r - m;
 int L[n1+1], R[n2+1];
 for (i = 0; i < n1; i++)
    L[i] = arr[l + i];
 for (j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];
 L[n1] = 9999999;
 R[n2] = 9999999;
 i=0;
 j=0;
 for(int k = l; k<=r; k++){
    if(L[i] <=R[j]){
        arr[k] = L[i];
        i = i+1;
    }
    else{
        c+=n1-i;
        arr[k] = R[j];
        j = j+1;
     }
 }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
     {
         int m = l + (r - l) / 2;
         mergeSort(arr, l, m);
         mergeSort(arr, m + 1, r);
         merge(arr, l, m, r);
     }
}
void printArray(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n], i;
    printf("Enter the elements of the array:\n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    printf("Given array is \n");
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    printf("\nSorted array:\n");
    printArray(arr, n);
    printf("The number of inversions are: %d\n", c);
    return 0;
}
