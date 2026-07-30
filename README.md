# 🚀 C Programming Practice

Welcome to my C programming journey!

---

## 📅 Day 7

### 🔹 Star Pattern Program

```c
#include <stdio.h>

int main() {
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = 1; i <= rows; i++) {
        for(j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
