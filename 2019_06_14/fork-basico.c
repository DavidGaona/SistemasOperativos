#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(int argc, char** argv) {
  pid_t pid;
  int childPid;
  pid = fork();
  if (pid < 0){
    printf("Fork Failed");
  }
  else if (pid == 0){
    printf("Soy el hijo y mi ID es %d\n", (int) getpid());
    childPid = (int) getpid();
  } else {
    int rc_wait = wait(NULL);
    printf("Soy el padre, mi ID es %d y el de mi hijo es %d \n", (int) getpid(), pid);
  }
}
