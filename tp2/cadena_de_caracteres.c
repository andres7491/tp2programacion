#include <stdio.h>   // Esto lo copiaste de algún lado
#include <ctype.h>  // la idea es que lo piensen uds. para que aprendan
//pag 354           // No es como se pedía. Y tampoco me lo podrías explicar
void analizar_linea(char linea [],int*pv, int*pc,int*pd, int*pb, int*po);
 int main()
 {
     char linea[80];
     int vocales=0;
     int consonantes=0;
     int digitos=0;
     int blancos=0;
     int otros=0;
     char punto[46];

     printf("introducir una linea de texto:\n");
     scanf("%[^\n]", linea);

    analizar_linea(linea,&vocales,&consonantes,&digitos,&blancos,&otros);

    printf("\nN° de vocales:%d", vocales);
    printf("\nN° de consonantes:%d", consonantes);
    printf("\nN° de digitos:%d", digitos);
    printf("\nN° espacios en blanco:%d", blancos);

 }

 void analizar_linea(char linea [],int*pv, int*pc,int*pd, int*pb, int*po)
 {
     char c;
     int cont=0;

     while ((c=toupper(linea[cont]))!='\0'){
         if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
         ++ *pv;
         else if(c>='A'&&c<='Z')
         ++ *pc;
            else if(c>='0'&&c<='9')
            ++ *pd;
                else if(c== ' '||c=='\t')
                    ++ *pb;
                    else
                        ++*po;
        ++cont;


     }

return;

 }