#include <stdio.h>
int main(){
    int mat[3][3], i, j, diag_sum = 0;   
    printf("Input the values:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++){
            scanf("%d", &mat[i][j]);
            if(i == j) {
                diag_sum += mat[i][j];
            }
        }
    }
    printf("The matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("Sum of the main diagonal elements: %d\n", diag_sum);
    return 0;
}