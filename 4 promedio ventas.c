#include<stdio.h>

int main ()
{
	int i,dias =5,vendedores;
	float num,suma,promedio;
	float porVendedor;
	
	printf("\n\tPROGRAMA PARA CALCULAR EL PROMEDIO DE LAS VENTAS DIARIAS  (lunes a viernes) DE LA EMPRESA NASA \n");
	

	printf("\n\tIngrese la cantidad de vendedores que tiene la empresa NASA: \n");
	scanf("%d", &vendedores);
	
	for (i=1; i<=5; i++)
	{
		
		switch(i){
		case 1: printf("\n Dime las ventas del lunes: \t"); 
			 	scanf("%f", &num);
		break;
		case 2: printf("\n Las ventas del martes: \t"); 
			 	scanf("%f", &num);
		break;
		case 3: printf("\n Las del miercoles: \t");
			 	scanf("%f", &num); 
		break;
		case 4: printf("\n Las ventas del jueves: \t"); 
			 	scanf("%f", &num);
		break;
		case 5: printf("\n Las ventas del viernes: \t"); 
			 	scanf("%f", &num);
		break;
	}
		
		suma= suma+num;
	}
	promedio=suma/dias;
	printf("\n El promedio de los 5 dias de ventas de la empresa NASA es: $%.2f \n",promedio);
	
	porVendedor = promedio/vendedores;
	printf("\n En promedio cada vendedor vendio $%.2f \n", porVendedor);
	
	
	return 0;
}

