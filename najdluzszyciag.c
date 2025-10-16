#include <stdio.h>
#include <stdlib.h>
#include <time.h>



//jestem swiadom, że wedlug polecenia tablica zawiera liczby rzeczywiste a ja uzylem calkowitych
//i to z zakresu jakiegos, ale tak naprawde program po malych zmianach dziala tez dla rzeczywistych
//sam algorytm jest dobry a uznalem, że jesli i tak wychodzi na to samo to łatwiej bedzie sprawdzac czy
//program dziala uzywajac liczb calkowitych

int main()
{
    srand(time(NULL));
    int n = 0;


// tak samo jak w przypadku pozostalych zadan, jesli ktos poda litery to program nie dziala
    printf("podaj liczbe n (dlugosc tablicy): ");
// uwaga na duze liczby, program wyswietla okolo 2n lnijek tekstu
    scanf("%d",&n);
    int tab[n];

    for(int i=0;i<n;i++)
    {
        int los= rand()%1000; //przypadkowy zakres, mozna go zmienic i program bedzie dalej dzialac
        tab[i]=los;
        printf("element numer %d = %d\n",i,los);
    }
    int najw=0;
    int poprzednia=0;
    for(int u=0;u<n;u++)
    {
        if(tab[u]>najw)
        {
            najw=tab[u];
        }
    }
    int najm=najw+1;

// tutaj zaczyna sie wlasciwa czesc gdzie ukladam liczby
    for(int k=0;k<n;k++)
    {


        for(int b=0;b<n;b++)
        {
            if(tab[b]<najm&&tab[b]>poprzednia)
            {
                najm=tab[b];
            }
        }
            poprzednia = najm;
            if(najm==najw+1)
            {
                break;
            }
            printf("poukladane rosnaco --> %d\n",najm);
            najm=najw+1;

    }

    return 0;
}
