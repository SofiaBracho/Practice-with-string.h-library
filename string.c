// Hacer un programa utilizando las funciones de string.h (strlen strcpy strcmp)

#include<stdio.h>
#include<conio.h>
#include<string.h>

char cadena1[31], cadena2[31];

// Protoripos de función

void menu();
void escribir();
void copiar();
void comparar();
void contar();
void mostrar();


void menu()
{
	char c;
	
	do
	{
		system("cls");
	
		printf("\nMenu del programa \nEscribe lo que quieras\n");
	
		printf("\n1.- Escribir cadena 1.");
		printf("\n2.- Copiar el contenido de la cadena 1 a la 2.");
		printf("\n3.- Comparar cadenas.");
		printf("\n4.- Contar caracteres.");
		printf("\n5.- Mostrar cadenas.");
		printf("\n6.- Salir");
		
		c = getch();
		
		system("cls");
		
		switch(c)
		{
			case '1':
					  escribir();
					  break;
			case '2':
					  copiar();
					  break;
			case '3':
					  comparar();
					  break;
			case '4':
					  contar();
					  break;
			case '5':
					  mostrar();
					  break;
			case '6':
					  break;
					  
		}
		
	}while(c != '6');
}

void escribir()
{
	printf("\nIngrese el texto para la cadena 1 (maximo 30 caracteres): ");
	fgets(cadena1,31,stdin);
	
	printf("\nLa cadena ha sido guardada satisfactoriamente.");
	
	getch();
}

void copiar()
{
	strcpy(cadena2,cadena1);
	printf("\nLa cadena 1 ha sido copiada en la cadena 2.");
	
	getch();
}

void comparar()
{
	int ret;
	
	ret = strcmp(cadena1,cadena2);
	
	 if(ret < 0)
	 {
  	    printf("\nLa cadena 1 es menor a la cadena 2.");
  	    
 	 }
	  else if(ret > 0) 
	 {
  	    printf("\nLa cadena 1 es mayor a la cadena 2.");
  	    
  	 } 
	  else 
	 {
  	    printf("\nLas cadenas son iguales.");
 	 }
 	 
 	 getch();
}

void contar()
{
	int cont1 = strlen(cadena1);
	int cont2 = strlen(cadena2);
	
	printf("\nLa cadena 1 tiene una longitud de: %i", cont1);
	printf("\nLa cadena 2 tiene una longitud de: %i", cont2);
	
	getch();
}

void mostrar()
{
	printf("\nCadena 1: %s", cadena1);
	printf("\nCadena 2: %s", cadena2);
	
	getch();
}



int main()
{	
	menu();
	
	getch();
	return 0;
}
