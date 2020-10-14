#include <stdio.h>

int main()
{

    int hora, minuto, segundo;
    int leer_nuevo = 0, minuto_a_segundo = 0, hora_a_segundo = 0, suma_segundo = 0;

    do
    {
        printf("ingrese una hora\n");
        scanf("%d %d %d", &hora, &minuto, &segundo);
        if ((hora >= 0 && hora <= 23) && (minuto >= 0 && minuto <= 59) && (segundo >= 0 && segundo <= 59))
        {
            leer_nuevo = 1;
        }
        else
        {
            leer_nuevo = 0;
            printf("la hora es incorrecta");
        }

    } while (leer_nuevo = 0);
    {
        minuto_a_segundo = minuto * 60;
        hora_a_segundo = hora * 3600;
        suma_segundo = minuto_a_segundo + hora_a_segundo + segundo;
        printf("la cantidad de segundos son: %d", suma_segundo);
        scanf("%d ", &suma_segundo);
    }
    return 0;
}