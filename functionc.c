#include <stdio.h>
int Calculator(int no1,int no2,char op) 
{
int result;
switch(op)
{case '+':
    return no1+no2;
    break;
    case '-':
    return no1-no2;
    break;
    case'*':
    return no1*no2;
    break;
    case'/':
    return no1/no2;
    break;
    case '%':
    return no1%no2;
    break;


    

}

   

}
int main (){
    int no1 , no2;
    char op;
    printf("input no1 =");
    scanf("%d",&no1);
    printf("input no2=");
    scanf("%d",&no2);
    printf("enter character=");
    scanf("%c",&op);
    result =calculator(no1,no2,op)
    
    return 0;



}


