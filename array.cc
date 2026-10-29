#include<stdio.h>
int main()
{int i ;
    int marks[5],min;
    printf("input data=\n");
    for(i=0;i<=4;i++)
    { 
        scanf("%d",&marks[i]);
    }
    printf("data is\n");
    min =marks[0];
    for(i=1;i<=4;i++)
    {
        
        
        if(marks[i]< min)
{ min = marks [i];

}
    
}
printf("minimum mark is %d",min);
    
    return 0;







}