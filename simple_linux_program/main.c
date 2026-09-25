#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc > 1) {
        printf("Hello, %s! Welcome to Linux programming.\n", argv[1]);
    } else {
        printf("Hello, World! Welcome to Linux programming.\n");
    }
    return 0;
}
