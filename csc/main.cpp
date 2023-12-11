#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int top = -1;
char stack[MAX_SIZE];

void push(char c) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        return '\0';
    }
    return stack[top--];
}

int main() {
    char str[MAX_SIZE];
    int i, len;
    printf("Enter a string: ");
    scanf("%s", str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        push(str[i]);
    }
    for (i = 0; i < len; i++) {
        if (str[i] != pop()) {
            printf("%s is not a palindrome\n", str);
            return 0;
        }
    }
    printf("%s is a palindrome\n", str);
    return 0;
}
