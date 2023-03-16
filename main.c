#include<stdio.h>
#include<time.h>

int main()
{
    time_t hour;
    time(&hour);

   printf("\n The time is: %s", ctime(&hour));

    char arivee[10];
    printf("Who arrived?\n");
        gets(arivee);


    printf("Arivee and  time of arrival: %s %s", arivee, ctime(&hour));

   return 0;
}

