#include <stdio.h>

int main() {
    printf("--- Jump Statements ---\n");
    
    // Break in loop
    printf("Break example: ");
    for (int i = 1; i <= 10; i++) {
        if (i == 6) break;
        printf("%d ", i);
    }
    printf("\n");
    
    // Continue in loop
    printf("Continue example: ");
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");
    
    // Goto
    printf("Goto example: ");
    int i = 1;
    start: // label name, can share a name with a variable, not another label
    printf("%d ", i);
    i++;
    if (i <= 5) goto start; //can jump to a label, we havent even reached yet in the code, useful for jumping multiple blocks without multiple break
    printf("\n");
    
    return 0;
}