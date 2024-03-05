// main.c
#include <stdio.h>

void judgment (int num);

int main(void) {
    int num;
    
    printf("소수인지 알아보고 싶은 정수를 알려주세요!\n");
    scanf("%d", &num);
    
    judgment(num);
    
    return 0;
}

void judgment (int num)
{
    int count = 0;
    
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            count++;
    }
    
    if (count == 2)
        printf("이 정수는 소수입니다!\n\n");
    else
        printf("이 정수는 소수가 아닙니다!\n\n");
}
