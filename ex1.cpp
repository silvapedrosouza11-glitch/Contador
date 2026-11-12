#include <stdio.h>

int main() {
    int i; 
//10++0
    for (i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }

    i = 1;
    while (i <= 10) {
        printf("%d\n", i);
        i++;
    }
    
    i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

//10--0//

    for (i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }
    i = 10;
    while (i >= 1) {
        printf("%d\n", i);
        i--;
    }
    
    i = 10;
    do {
        printf("%d\n", i);
        i--;
    } while (i >= 1);

    return 0;
}
