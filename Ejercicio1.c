#include <stdio.h>

struct alumno {
    char nombre[20];
    char carrera[20];
    char direccion[20];
    int edad;
    float promedio;
};

int main() {
    struct alumno a1, a2, a3, a4, a5;

    printf("Ingrese el nombre del primer alumno: ");
    gets(a1.nombre);
    fflush(stdin);

    printf("Ingrese la carrera del primer alumno: ");
    gets(a1.carrera);
    fflush(stdin);

    printf("Ingrese la dirección del primer alumno: ");
    gets(a1.direccion);
    fflush(stdin);

    printf("Ingrese la edad del primer alumno: ");
    scanf("%d", &a1.edad);
    fflush(stdin);

    printf("Ingrese el promedio del primer alumno: ");
    scanf("%f", &a1.promedio);
    fflush(stdin);// Consumir el carácter de nueva línea residual

    printf("\nDatos del primer alumno:\n");
    puts(a1.nombre);
    puts(a1.carrera);
    puts(a1.direccion);
    printf("Edad: %d\n", a1.edad);
    printf("Promedio: %.2f\n", a1.promedio);

    printf("\nIngrese el nombre del segundo alumno: ");
    fflush(stdin);// Consumir el carácter de nueva línea residual
    gets(a2.nombre);
    fflush(stdin);

    printf("Ingrese la carrera del segundo alumno: ");
    gets(a2.carrera);
    fflush(stdin);

    printf("Ingrese la dirección del segundo alumno: ");
    gets(a2.direccion);
    fflush(stdin);

    printf("Ingrese la edad del segundo alumno: ");
    scanf("%d", &a2.edad);
    fflush(stdin);

    printf("Ingrese el promedio del segundo alumno: ");
    scanf("%f", &a2.promedio);
    fflush(stdin);// Consumir el carácter de nueva línea residual

    printf("\nDatos del segundo alumno:\n");
    puts(a2.nombre);
    puts(a2.carrera);
    puts(a2.direccion);
    printf("Edad: %d\n", a2.edad);
    printf("Promedio: %.2f\n", a2.promedio);

    printf("\nIngrese el nombre del tercer alumno: ");
    fflush(stdin);// Consumir el carácter de nueva línea residual
    gets(a3.nombre);
    fflush(stdin);

    printf("Ingrese la carrera del tercer alumno: ");
    gets(a3.carrera);
    fflush(stdin);

    printf("Ingrese la dirección del tercer alumno: ");
    gets(a3.direccion);
    fflush(stdin);

    printf("Ingrese la edad del tercer alumno: ");
    scanf("%d", &a3.edad);
    fflush(stdin);

    printf("Ingrese el promedio del tercer alumno: ");
    scanf("%f", &a3.promedio);
    fflush(stdin);// Consumir el carácter de nueva línea residual

    printf("\nDatos del tercer alumno:\n");
    puts(a3.nombre);
    puts(a3.carrera);
    puts(a3.direccion);
    printf("Edad: %d\n", a3.edad);
    printf("Promedio: %.2f\n", a3.promedio);

    printf("\nIngrese el nombre del cuarto alumno: ");
    fflush(stdin);
    gets(a4.nombre);
    fflush(stdin);// Consumir el carácter de nueva línea residual

    printf("Ingrese la carrera del cuarto alumno: ");
    gets(a4.carrera);
    fflush(stdin);

    printf("Ingrese la dirección del cuarto alumno: ");
    gets(a4.direccion);
    fflush(stdin);

    printf("Ingrese la edad del cuarto alumno: ");
    scanf("%d", &a4.edad);
    fflush(stdin);

    printf("Ingrese el promedio del cuarto alumno: ");
    scanf("%f", &a4.promedio);
    fflush(stdin); // Consumir el carácter de nueva línea residual

    printf("\nDatos del cuarto alumno:\n");
    puts(a4.nombre);
    puts(a4.carrera);
    puts(a4.direccion);
    printf("Edad: %d\n", a4.edad);
    printf("Promedio: %.2f\n", a4.promedio);

    printf("\nIngrese el nombre del quinto alumno: ");
    fflush(stdin);// Consumir el carácter de nueva línea residual
    gets(a5.nombre);
    fflush(stdin);

    printf("Ingrese la carrera del quinto alumno: ");
    gets(a5.carrera);
    fflush(stdin);

    printf("Ingrese la dirección del quinto alumno: ");
    gets(a5.direccion);
    fflush(stdin);

    printf("Ingrese la edad del quinto alumno: ");
    scanf("%d", &a5.edad);
    fflush(stdin);

    printf("Ingrese el promedio del quinto alumno: ");
    scanf("%f", &a5.promedio);
    fflush(stdin); // Consumir el carácter de nueva línea residual

    printf("\nDatos del quinto alumno:\n");
    puts(a5.nombre);
    puts(a5.carrera);
    puts(a5.direccion);
    printf("Edad: %d\n", a5.edad);
    printf("Promedio: %.2f\n", a5.promedio);

    return 0;
}