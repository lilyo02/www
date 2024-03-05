//
//  main.c
//  practice
//
//  Created by 정예린 on 2023/10/25.
//

#include <stdio.h>

struct Student {
    char major[30];
    int number;
    char name[20];
} S;

int main(void)
{
    struct Student s1 = {"컴퓨터공학", 20222872, "정예린"};
    
    struct Student s2;
    
    printf("학생의 전공을 입력하세요. ");
    scanf("%s", s2.major);
    
    printf("학생의 학번을 입력하세요. ");
    scanf("%d", &s2.number);
    
    printf("학생의 이름을 입력하세요. ");
    scanf("%s", s2.name);
    
    printf("%s \n%6d \n%s \n", s1.major, s1.number, s1.name);
    
    printf("%s \n%6d \n%s \n", s2.major, s2.number, s2.name);
    
    return 0;
}
