#include <stdio.h>
int i = 0;
 int rest = 0;

void main() {
    for(i=0; i <= 50; i++){
        int rest = i % 2;
        if(rest == 0)
        printf("%d\n", i);
    };
    return ;
}