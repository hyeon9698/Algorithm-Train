#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void add(int *s, int x){
    int tmp = 0;
    for(int i=0;i<20;i++){
        if(s[i]==0){
            tmp = i;
            break;
        }
    }
    s[tmp] = x;
}
void remove2(int *s, int x){
    for(int i=0;i<20;i++){
        if(s[i] == x){
            s[i] = 0;
            for(int j=i;j<19;j++){
                s[j]=s[j+1];
            }
            s[19] = 0;
        }
    }
}
void check(int *s, int x){
    int flag = 0;
    for(int i=0;i<20;i++){
        if(s[i] == x){
            flag = 1;
            printf("%d\n", 1);
        }
    }
    if (!flag){
        printf("%d\n", 0);
    }
}
void toggle(int *s, int x){
    int flag=0;
    int index=0;
    for(int i=0;i<20;i++){
        if(s[i]==x){
            flag=1;
            index=i;
        }
    }
    if (flag){
        remove2(s,x);
    }
    else{
        add(s,x);
    }
}
void all(int *s){
    for(int i=0;i<20;i++){
        s[i] = i+1;
    }
}
void empty(int *s){
    for(int i=0;i<20;i++){
        s[i] = 0;
    }
}
int main(){
    int m;
    char sol[20];
    int s[20] = {0};
    char value[10];
    char method[10];
    char *ptr;
    int v;
    scanf("%d\n", &m);
    for(int i=0;i<m;i++){
        gets(sol);
        ptr = strtok(sol, " ");
        strcpy(method, ptr);
        ptr = strtok(NULL, " ");
        if(ptr!=NULL){
            strcpy(value, ptr);
            v = atoi(value);
        }
        // printf("%s\n", method);
        // printf("%s\n", value);
        // printf("%d", strcat(method, "add"));
        if (strcmp(method, "add") == 0){
            add(s, v);
        }
        if (strcmp(method, "check") == 0){
            check(s, v);
        }
        if (strcmp(method, "remove") == 0){
            remove2(s, v);
        }
        if (strcmp(method, "toggle") == 0){
            toggle(s, v);
        }
        if (strcmp(method, "all") == 0){
            all(s);
        }
        if (strcmp(method, "empty") == 0){
            empty(s);
        }
    }
    // add(s, 5);
    for(int i=0;i<20;i++){
        printf("%d ", s[i]);
    }
    return 0;
}