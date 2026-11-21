#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  printf("--------------------------------------------\n");
  printf("       WELCOME TO PANDORA'S LOCKSMITH       \n");
  printf("--------------------------------------------\n\n");
  printf("Based on The Z-Labs' Linux Exploit Suggester\n\n");

  //Choose whether to download sources and binaries
  printf("Download sources and binaries? [Y/N]: ");
  char binaries = '\0';
  scanf("%c", &binaries);
  if (binaries == 'Y' || binaries == 'y') {printf("\n\nSources and binaries will be downloaded\n\n");}
  else {printf("\n\nSources and binaries will NOT be downloaded\n\n");}

  //Choose where to print the output
  printf("Where would you like to output the exploits?\n\n");
  printf("[t] - output to this terminal\n");
  printf("[f] - output to a file\n");
  char discard;
  char option;

  scanf("%c%c", &discard, &option);
  char outfile[64] = "";

  if (option == 't'){
    printf("\nChosen terminal output\n\n");
  } else if (option == 'f'){
    printf("\nChosen file output\n");
    printf("Select the file to output to: ");
    scanf("%s", outfile);
    printf("\n\n");
   /*
    if (argc > 1) { printf("Using %s for the file\n", argv[1]); }
    else{
      printf("No file supplied; exiting program\n");
      return 1;
    }
    */
  } else {
    printf("\nUnrecognized input, defaulting to terminal output\n\n");
  }

  printf("      BEGIN EXPLOIT SUGGESTER OUTPUT:      \n");
  printf("-------------------------------------------\n\n");

  int status = -1;
  char callstr[80] = "./les.sh";

  if (binaries == 'Y' || binaries == 'y') {strncat(callstr, " -sb", 5);}

  if (option == 'f') {
    printf("[Program is running, please wait...]");
    //char callstr[80] = "./les.sh > ";
    strncat(callstr, " > ", 4);
    strncat(callstr, outfile, 64);
    //status = system(callstr);
  }

  status = system(callstr); //Actually executes the system call

  if (status == -1)
    {
      perror("ERROR: System call failed or did not occur\n");
      return 1;
    }

  printf("\n-------------------------------------------\n");
  printf("        END EXPLOIT SUGGESTER OUTPUT        \n");

  printf("Script finished with exit code %d\n", status);
  printf("Enjoy hacking >:)\n");
  return 0;
}
