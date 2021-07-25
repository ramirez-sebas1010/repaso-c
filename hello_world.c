//Estructura Tipica de un Programa en C

// 1) Archivo de Cabecera stdio que contiene printf
//#Include es un directivo de preprocesador
//El preprocesador es un conjunto de instrucciones que se ejecuta antes de que se compila el programa.
#include<stdio.h>
#define PI 3.14156178198179

//2) Declaracion Globales
//2.2)Variables Globales
int ANHOS = 2000;

//2.1) Prototipos de funciones
int pedirDato();
int esPar(int num);
void printListFloat(float list[]);
void printListInt(int list[]);

//3) Funcion main es la funcion obligatorio que todo programa en C debe tener, es donde se ejecuta el codigo.
int main(){
	//Introduccion a tipos y funciones
	int dato;
	float datoFloat = 1.242;
	//Funcino que permite una impresion en pantalla.
	printf("Bienvenido a Progrmacion con C\n");
	dato = pedirDato();
	
	if(esPar(dato)){
		printf("El dato es par\n");
	}else{
		printf("El dato es impar\n");
	}

	if(dato>datoFloat){
		printf("El dato es mayor que el dato float\n");
	}else{
		printf("El dato es menor que el dato float\n");
	}


	//Arreglos en C
	//Declaracion de un arreglo de enteros
	int listaNum[] = {1,2,3,4,5,6,7,8,9,10};
	//Declaracion de un arreglo de flotantes
	float listaFloat[50];
	for (size_t i = 0; i < 50; i++){
		listaFloat[i] = i+1.5;
	}

	printListFloat(listaFloat);
	printListInt(listaNum);

	//Punteros en C
	//Declaracion de un puntero a int
	int *pInt = &dato;
	int **p = &pInt;
	printf("El dato es %d y esta en la direccion de memoria %p", *pInt,pInt);


	int a[10];


	return 0;
}

//4) Defincion de otras funciones.
int pedirDato(){
	int dato;
	printf("Por favor ingrese un numero!");
	scanf("%d",&dato);
	return dato;
}

int esPar(int num){
	if(num%2 == 0){
		return 1;
	}
	return 0;
}

void printListInt(int list[]){
	printf("Lista de Ints\n");
	for(size_t i = 0; i < 10; i++){
		printf("%d\n",list[i]);
	}
}

void printListFloat(float list[]){
	printf("Lista de Floats\n");
	for(size_t i = 0; i < 50; i++){
		printf("%f\n",list[i]);
	}
}


