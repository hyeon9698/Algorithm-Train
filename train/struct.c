#include <stdio.h>
#include <stdlib.h>

struct student {
    int number;
    char name[10];
    double grade;
};

int main(){
    struct student s;
    s.number = 20150001;
    strcpy(s.name, "홍길동");
    s.grade = 4.5
    printf("학번 : %d\n", s.number);
    printf("이름 : %s\n", s.name);
    printf("학점 : %.1f\n", s.grade);
    return 0;
}
