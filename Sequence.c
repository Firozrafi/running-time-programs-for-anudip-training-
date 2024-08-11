#include <stdio.h>
#include <stdlib.h>

void main() {
    int f[50], st, i, len, j, c, k, count;
    for (i = 0; i < 50; i++)
        f[i] = 0;

    while (1) {
        count = 0;
        printf("Enter the start block and length of the file: ");
        scanf("%d%d", &st, &len);
        for (k = st; k < (st + len); k++) {
            if (f[k] == 0)
                count++;
                }

        if (len == count) {
            for (j = st; j < (st + len); j++) {
                if (f[j] == 0) {
                    f[j] = 1;
                    printf("%d\t%d\n", j, f[j]);
                }
            }
            printf("The file is allocated.\n");
        } else {
            printf("Not enough contiguous space to allocate the file.\n");
        }
        printf("Do you want to enter more files (yes-1, no-0)? ");
        scanf("%d", &c);
        if (c == 0) {
            break;
        }
    }
    exit(0);
}
