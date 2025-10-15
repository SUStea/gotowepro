#include <stdio.h>
#include <stdbool.h>
int sumacyfrl(int a)
{
    int pomoc = 0;

    while(a>0)
    {
        pomoc+=a%10;
        a=a/10;
    }
    return pomoc;
}
int main()
{
    int day = 0;
    int month = 0;
    int year = 0;

    printf("\n\n\n*****    WITAM DZISIAJ POLICZYMY JAKIM NUMERKIEM JESTES    *****\n\n\n");

    printf("prosze o podanie roku urodzenia: ");
      while(true)
    {
        scanf("%d",&year);
        if(year<=2025&&year>=1900)
        {
            break;
        }
        printf("prosze o podanie roku urodzenia z przedzialu 1900-2025: ");
    }

    printf("Prosze o podanie miesiaca urodzenia: ");
      while(true)
    {
        scanf("%d",&month);
        if(month<=12&&month>=1)
        {
            break;
        }
        printf("prosze o podanie miesiaca urodzenia z przedzialu 1-12: ");
    }
    printf("Prosze o podanie dnia urodzenia: ");
    while(true)
    {
        scanf("%d",&day);
        if(month==2)
        {
            if(day==29)
            {

                if(year%4==0)
                {
                    if(year%400==0)
                    {
                        break;
                    }
                    if(year%100==0)
                    {
                        printf("prosze o podanie dnia z przedzialu 1-28\n");
                        continue;
                    }
                    break;
                }
                printf("prosze o podanie dnia z przedzialu 1-28\n");
                continue;
            }
        if(day<=28&&day>=1)
        {
            break;
        }
        else
        {
           printf("prosze o podanie dnia z przedzialu 1-28\n");
        }

        }
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        {
            if(day<=31&&day>=1)
            {
                break;
            }
            printf("prosze o podanie dnia urodzenia z przedzialu 1-31: ");
        }
        if(month==4||month==6||month==9||month==11)
        {
            if(day<=30&&day>=1)
            {
                break;
            }
            printf("prosze o podanie dnia urodzenia z przedzialu 1-30: ");
        }
    }

long int numer = day*1000000+month*10000+year;
//printf("%ld\n",numer);
//printf("%d\n",sumacyfrl(numer));
int suma = sumacyfrl(numer);
while(suma>=10)
{
    suma = sumacyfrl(suma);
}
printf("Oto twoja liczba: %d\n",suma);


return 0;
}
