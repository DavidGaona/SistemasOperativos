#include "solucion.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
  int x = 20;
  /*-------------------------- */
  pid_t pid;
  pid = fork();
  if (pid < 0){
    printf("Fork Failed");
  }
  else if (pid == 0){ //hijo
    printf("Soy el hijo \n calculo fibonacci \n guardo el valor calculado en el archivo 'X' \n");
    printf(" fibonacci(%d) = ",x);
    x = fibonacci(x);
    printf("%d\n",x);
    guardarEntero("archivo",x);
  } else {
    int status; //padre
    wait(&status);
    int ans = leerEntero("archivo") * 100;
    printf("soy el padre \n espero a que termine mi hijo \n leo el valor que calculo mi hijo del archivo 'X' \n");
    printf(" multiplico por 100 e imprimo por pantalla: %d \n", ans);
  }


  return 0;
}
