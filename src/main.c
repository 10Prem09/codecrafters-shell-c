#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  // Flush after every printf
  setbuf(stdout, NULL);



  // TODO: Uncomment the code below to pass the first stage

  while (1){
    printf("$ ");
    char input[100];
    // Waiting for User input
    fgets(input,100,stdin);
    // Removing trailing newline from the string
    input[strlen(input)-1] = '\0';
    printf("%s: command not found\n", input);
  }
  return 0;
}
