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
// w tym miejscu probowalem roznych metod, uzywalem scanf("%c,&odp"), oraz scanf(" %c,&odp") ale tak naprawde nie dziala nic 
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
//wiem ze tutaj moglbym uzyc funkcji pow(), ale na code blocks nie chce mi sie to wtedy kompilowac
//musze uzywac gcc bezposrednio z konsoli i jest to malo wygodne 
//wiec poki nie zostane zmuszony to bede uzywal prostszej formy
//ktora pod wzgledem obliczeniowym pewnie tez jest przyjazniejsza dla komputera 
    else
    {
        wynik = (bok*bok*bok);
        printf("oto twoj wynik: %f",wynik);
    }
    return 0;
}
