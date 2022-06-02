
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i,values;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr= malloc(n * sizeof(int));
 
    for (i=0; i<n; i++){
        printf("Enter values for array: ");
        scanf("%d", &values);
        arr[i]=values;
    }

    int sum=0;
    for (i=0; i<n*sizeof(int)/sizeof(arr[0]); i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    free(arr);
    
    return 0;
}