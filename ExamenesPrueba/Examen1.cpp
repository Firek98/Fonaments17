#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Hacer una función que modifique una variable incrementándola en uno
//Crear una array de 5 números
//Llenar la array de 5 elementos con números leídos mediante scanf
//Duplicar los valores de dentro de la array
//Printar por pantalla el número más grande

void PlusOne(int &a)
{
	a++;
}

void array1()
{
	int array1[5];
	int aux;
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &aux);
		array1[i] = aux;
	}

	printf("Este array contiene: \n");

	for (int i = 0; i < 5; i++)
	{
		array1[i];
		printf("%d ", array1[i]);
	}

	printf("\n");


	printf("Su multiplicacion es: \n");

	for (int i = 0; i < 5; i++)
	{
		array1[i] *= 2;
		printf("%d ", array1[i]);

	}

	printf("\n");

	printf("Su numero mas grande es: \n");

	int aux2 = array1[0];

	for (int i = 1; i < 5; i++)
	{
		if (array1[i] > aux2)
		{
			aux2 = array1[i];
		}
	}

	printf("%d ", aux2);
}

void main()
{
	srand(time(NULL));
	int num1 = 5;
	PlusOne(num1);
	array1();

	printf("\n");
	//Cread una struct Vector2 que tenga X y Y.

	struct Vector2 {

		float x;
		float y;
	};

	//Cread una array de Vectores

	Vector2 arr[5];
	
	for (int i = 0; i < 5; i++)
	{
		arr[i].x = 0;
		arr[i].y = 0;
	} //Inicializad la array de vectores a 0
	
	  //Haced que cada vector sea un número random entre 0 y 1(ejemplo: 0.05).

	for (int i = 0; i < 5; i++)
	{
		arr[i].x = (rand() % 11) / 10;
		arr[i].y = (rand() % 11) / 10; //
	}
	//Imprimid por pantalla los vectores impares

	for (int i = 0; i < 5; i++)
	{
		if (i == 1 || i == 3 || i == 5)
		{
			printf("%f:%f \n", arr[i].x, arr[i].y);
		}
	}
}