#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int i, j;
int main(){
    // int arr[100][100];
    int m=3 , n=4;
    // a, khai báo
    int **arr = (int **)malloc(m * sizeof(int*));
    for (i=0; i<m; i++){
        arr[i] = (int *)malloc(n * sizeof(int));
    }
    // b, gán và nhập vào 
    int a[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
    };
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            // scanf("%d", &arr[i][j]); Input from keyboard .
            arr[i][j] = a[i][j];
        }
    }
    // c, in ra mảng 
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("%3d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
    // d, in ra các giá trị nằm ở cột chẵn 
    printf("Values in even collums is : ");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if (j%2 == 0)
                printf("%d ", arr[i][j]);
        }
    }
    // e, in ra các giá trị có số hàng và số cột bằng nhau
    printf("\nValues in location have row = collum is : ");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if (i == j)
                printf("%d ", arr[i][j]);
        }
    }
    free(arr);
}
