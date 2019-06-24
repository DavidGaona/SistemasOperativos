#include <stdio.h>
#include <string.h>

int main() {
    for (int i = 0; i < 10; ++i){
        char hola[100] = {' '};
        printf("Enter name: ");
        scanf_s("%s \n", hola);
        printf("%c \n",hola[2]);
    }

    return 0;
}
