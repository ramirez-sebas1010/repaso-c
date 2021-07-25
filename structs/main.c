#include<stdio.h>


struct alumno{
    char nombre[50];
    char apellido[50];
    int edad;
    int nota;
};


int main(){
    struct alumno alumno1 = {"Juan", "Perez", 21, 8.5};
    printf("%d", alumno1.edad);
    return 0;
}