#include <stdio.h>

int main() {
    int a,b;
    printf("enter values for a & b=");
    scanf("%d %d",&a,&b);
    printf("Sum = %d\n",a+b);
    printf("difference = %d\n",a-b);
    printf("product = %d\n",a*b);
    printf("quotient = %d\n",a/b);
    if(a>b){
      printf("\n first number is greater than the second");
      printf("\n a is larger");}
    else{
        printf("\n first number is not greater than the second");
        printf("\n b is larger"); 
    }
    if(a>0 && b>0){
        printf("\n both numbers are positive");}
    else{
        printf("\n both numbers are not positive");
    }
    return 0;
}
