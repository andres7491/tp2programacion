#include <stdio.h>
int main()
{
    int transporte, hijo, distancia, desocupado, n;

printf("ingrese la cantidad de alumnos que desea evaluar:\n");
scanf("%d",&n);

   for(int i=1; i<=n; i++){
printf("********ALUMNO %d******\n",i);
printf("ingrese el transporte a utilizar. 1: Omnibus, 2: Transporte Escolar, 3: Pie");
scanf("%d", &transporte);

switch (transporte)
{
case 1: printf("Le corresponde 1000\n");
    break;

case 2:printf("Le corresponde 500\n");
break;

case 3:printf("Ingrese la distancia hasta la escuela\n");
scanf("%d",&distancia);
 if(distancia>3){
     printf("Ingrese 1: si los padres estan desocupados; 2: si no lo estan \n");
     scanf("%d",&desocupado);
     if(desocupado==1){
printf("Reciben Plan Estudiar: $5000\n");


    }else{ 
        printf("Ingrese la cantidad de hijos en edad escolar\n");
    scanf("%d",&hijo);
if(hijo>3)
printf("Recibe beca de $3000\n");
else
     printf("No le corresponde ayuda economica");
 
    }
    }else{
     printf("No le corresponde ayuda economica");
 
 
 }
 
    break;
}


}
return 0;

}



