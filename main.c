#include <stdio.h>
#include <stdlib.h>
#define Max 5
typedef struct
{
    char Nome[60];
    char Cognome[60];
    char numero_di_telefono[30];
    char e_mail[60];
    int posizione;
    float budget;
}persona;
void stampa_rubrica(persona rubrica[Max])
{
    int i;
    for(i=0;i<Max;i++)
    {
        printf("%s\n",rubrica[i].Nome);
        printf("%s\n",rubrica[i].Cognome);
        printf("%s\n",rubrica[i].numero_di_telefono);
        printf("%s\n",rubrica[i].e_mail);
        printf("%d\n",rubrica[i].posizione);
        printf("%.2f\n",rubrica[i].budget);
        printf("-------------------------------------\n");
    }
}
void ordinamento(persona rubrica[Max])
{
   int limite,tmp,i,j,k;
   float temp;
   char stringa1[60],stringa2[60],stringa3[60],stringa4[60];
       for(i=0;i<Max;i++){
        limite=Max-i;
        for(j=0;j<limite;j++)
        {
            if(rubrica[j].posizione>rubrica[j+1].posizione)
            {
                /*for(k=0;k<Max;k++)
                {

                }*/
                tmp=rubrica[j].posizione;
                rubrica[j].posizione=rubrica[j+1].posizione;
                rubrica[j+1].posizione=tmp;
            }
            else
            {}
        }

    }
}
int main()
{
    persona rubrica[]=
    {
    {"maria","rossi","047541219","m.rossi@yahoo.it", 1, 100.50},
    {"luca","verdi","057580913","lucav@gmail.com", 5, 80.50},
    {"andrea","pari","087122907","aapp@libero.it", 4, 100.50},
    {"lucia","ponti","044109885","lucyp@msn.it", 2, 50.50},
    {"roberto","conti","099424566","rob_conti@unife.it", 3, 150.50}
    };
    stampa_rubrica(rubrica);
    ordinamento(rubrica);
    return 0;
}
