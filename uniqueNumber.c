#include<stdio.h>
int main(){
    int arr[] = {2,3,1,3,2,7744,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j]){
                arr[i] = arr[j] = -1;
            }
        }
    }
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] > 0){
            ans = arr[i];
        }
    }
    printf("The unique number is : %d", ans);
}