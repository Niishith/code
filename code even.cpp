#include <stdio.h>
int main()    // only int type ex:-2,3,5//
    {
        int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    
    return 0;
}

//note:- if the given number is divided by 2  and get reminder as 0 then it is even number else it is odd//