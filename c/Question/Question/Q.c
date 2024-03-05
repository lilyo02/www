#include <stdio.h>

int main(void) {
    int num;
    
    printf("10과 비교할 숫자를 입력해주세요!\n");
    scanf("%d", &num);
    
    if (num > 10)
        printf("\n%d 는 10 보다 큰 수 입니다!\n", num);
    else if (num == 10)
        printf("\n%d 는 10 과 같은 수 입니다!\n", num);
    else
        printf("\n%d 는 10 보다 작은 수입니다!\n", num);
        
    return 0;
}
