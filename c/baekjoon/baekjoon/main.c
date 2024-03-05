#include <stdio.h>
int main(void)
{
    int H, M;
    int n = 45;
    
    scanf("%d %d", &H, &M);
    
    
    if (M - n < 0)
    {
        H -= 1;
        M -= n;
        M = 60 + M;
    }
    else if (M - n == 0)
    {
        H -= 1;
        M -= n;
    }
    
    if (H == -1)
        H = 23;
    
    printf("%d %d\n", H, M);
    
    return 0;
}
