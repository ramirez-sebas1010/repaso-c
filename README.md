# Repaso de Programacion en Lenguaje C.

## Estructura Basica de un Programa en C
```c
//Encabezados
#include<stdio.h>

//Variables Globales
int ANHOS = 2000;

//Prototipos de funciones
int pedirDato();
int esPar(int num);
void printListFloat(float list[]);
void printListInt(int list[]);


//Funcion Principal
int main(){
    return 0;
}


//Implemetaciones de Funciones
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
```

## Punteros
### Los Punteros son Variables que Guardan Direccion de memoria.
Usuamos "&" para acceder a la direccion de memoria y "*" para obtener su valor.
```c
#include<stdio.h>

int main(){
    int num = 1000;
    int *p1,**p2;

    //p1 guarda la direccion de memoria de la variable num que es un int
    p1 = &num;

    //p2 guarda la direccion de memoria de la variable p1 que tambien es una direccion de emoria
    p2 = &p1;

    //Todos imprimen el valor de num
    printf("num = %d",num);
    printf("p1 = %d",*p1);
    printf("p2 = %d",*(*p2))


    return 0;
}
```