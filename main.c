#include<stdio.h>
#include<time.h>

int main()
{

    time_t hour;
    time(&hour);

   printf("\n The time is: %s", ctime(&hour));

    char arivee[10];
    printf("Enter who arrived?\n");
        gets(arivee);


    printf("\nArivee and  time of arrival: %s \n \n%s ",  arivee, ctime(&hour));

 FILE *fp;

        fp = fopen("logs/test.txt", "w+");
        fprintf(fp, arivee);
        fputs(ctime(&hour), fp);
        fclose(fp);
   return 0;
}

