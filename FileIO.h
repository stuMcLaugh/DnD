#include <stdio.h>
#include <stdlib.h>
char* fileRead(char* file_name){
   char ch;
   FILE *fp;

   printf("Enter name of a file you wish to see\n");

   fp = fopen(file_name, "r"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("The contents of %s file are:\n", file_name);

   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);

   fclose(fp);
   char* dj;
   dj = "dsdasd";
   return dj;
}

char* fileWrite(char* file_name){
   char ch;
   FILE *fp;

   printf("Enter name of a file you wish to see\n");

   fp = fopen(file_name, "w"); // read mode

   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("The contents of %s file are:\n", file_name);

   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);

   fclose(fp);
   char* dj;
   dj = "dsdasd";
   return dj;
}