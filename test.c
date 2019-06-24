#include <stdio.h>
#include <string.h>

int main() {
    //int wSize = 100;
    char hola[100] = {' '};
    for (int i = 0; i < 10; ++i){
        printf("Enter name: ");
        scanf("%s ", hola);
        printf("%c \n",hola[2]);
    }

    return 0;
}
