#include <stdio.h>
int main(){
    int mat[3][2], i, j, sum = 0;
    printf("Input the values for a 3x2 matrix:\n");
    for(i = 0; i < 3; i++)  {
        for(j = 0; j < 2; j++) {
            scanf("%d", &mat[i][j]);
        }
    } 
    printf("The 3x2 matrix:\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 2; j++)   {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}