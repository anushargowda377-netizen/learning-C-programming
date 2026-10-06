#include <stdio.h>

int main() {
    const int pass_mark=40;
    int age;
    float percentage;
    char initial;
    printf("enter age=");
    scanf("%d",&age);
    printf("enter percentage=");
    scanf("%f",&percentage);
    printf("enter initial=");
    scanf(" %c",&initial);
    if(percentage>=pass_mark)
    {
        printf("pass");}
    else{
    printf("fail");}
    return 0;
}
