#include <stdio.h>
#include <stdlib.h>

void Exercici1()
{
	//Escribe un programa que imprima las letras minúsculas en posiciones impares.

	for (char letra ='a'; letra <= 'z'; letra++)
	{
		if(letra & 1) 
		printf("%c ,", letra);
	}
	printf("\n");
}

void Exercici2(int num)
{
	/*Escribe un programa que muestre en tres columnas, el número, el cuadrado
	y el cubo de los 5 primeros números enteros a partir del número contenido
	en num incluido.*/

	for (int i = 0; i < 5; i++)
	{
		printf("%d  %d  %d \n", num, num*num, num*num*num);
		num++;
	}
}

void Exercici3()
{
	char a;

	do 
	{
		scanf("%c", &a);
	
		if (a >= 'a' && a <= 'z' && a >= 0 && a <= 9)
		{
			printf("%c", a);
		}
		else
			printf("ERROR");
	}
	while (a != '*');
}

void Exercici4(int num, char letra)
{

}

void main()
{
	Exercici1();
	Exercici2(5);
	Exercici3();
}