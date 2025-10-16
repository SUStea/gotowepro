#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    bool tczys = true;
    char odp ='a';
    printf("co tam dzisiaj liczny? pole trojkatu rownobocznego (t) czy moze objetosc szescianu (s)?\n");

    while(true)
    {
        odp = getchar();
        if((int)odp==116||(int)odp==84)
        {
            printf("no dobra to robimy trojkat\n");
            tczys = true;
            break;
        }
        if((int)odp==115||(int)odp==83)
        {
            printf("a wiec robimy szescian\n");
            tczys = false;
            break;
        }
        printf("prosze sprobuj jeszcze raz, pamietaj (t) lub (s)\n");
    }
    printf("podaj dlugos boku: ");
    float bok = 0;
    while(true)
    {
        scanf("%f",&bok);
        if(bok>0)
        {
            break;
        }
        printf("sprobuj jeszcze raz, pamietaj. bok musi byc dodatni\n");
    }
    double wynik = 0;
    if(tczys)
    {
        wynik = ((bok*bok)*sqrt(3))/4;
        printf("oto twoj wynik: %f",wynik);
    }
    else
    {
        wynik = (bok*bok*bok);
        printf("oto twoj wynik: %f",wynik);
    }
    return 0;
}
