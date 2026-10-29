#include <stdio.h>
void CountNumbers(int num[], int x)

{
    int i,p=0,n=0,z=0;
    for (i=0;i<x;i++){

        if (num[i]==0)
            z++;
        else if(num[i]>0)
            p++;
        else if(num[i]<0)
            n++;
    }
    printf("positive number is %d=\n",p);
printf("negative number is %d=\n",n);
printf("zero is %d=\n",z);
    
}

int main() {
    int n,i,numbers[100];
    printf("Input nth value = ");
    scanf("%d", &n);
    printf("Input mix numbers\n ");
    
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        } 
    CountNumbers(numbers,n);   
    return 0;
    }