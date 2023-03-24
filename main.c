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


    char answer;
        printf("Anyone else? Y/N\n");
        scanf(" %c", &answer);
        printf("\n answer is %c\n", answer);
    while (answer == 'Y'){

printf("Success!");

printf("\nDo you want to play again? Y or N: \n");

scanf(" %c", &answer);
printf("\n answer is %c\n", answer);

}


    printf("\nArivee and  time of arrival: %s \n \n%s ",  arivee, ctime(&hour));

 FILE *fp;

        fp = fopen("logs/test.txt", "w+");
        fprintf(fp, arivee);
        fputs(ctime(&hour), fp);
        fclose(fp);
   return 0;
}

