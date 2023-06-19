struct alumno {
    char nombre[20];
    char carrera[20];
    char direccion[20];
    int edad;
    float promedio;
};

int main() {
    struct alumno a1;

    printf("Ingrese el nombre del alumno: ");
    gets(a1.nombre);

    printf("Ingrese la carrera del alumno: ");
    gets(a1.carrera);

    printf("Ingrese la direccion del alumno: ");
    gets(a1.direccion);

    printf("Ingrese la edad del alumno: ");
    scanf("%d", &a1.edad);

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a1.promedio);

    printf("\nDatos del primer alumno:\n");
    puts(a1.nombre);
    puts(a1.carrera);
    puts(a1.direccion);
    printf("Edad: %d\n", a1.edad);
    printf("Promedio: %.2f\n", a1.promedio);

struct alumno a2;

    printf("\nIngrese el nombre del alumno: ");
    gets(a2.nombre);

    printf("Ingrese la carrera del alumno: ");
    gets(a2.carrera);

    printf("Ingrese la direccion del alumno: ");
    gets(a2.direccion);

    printf("Ingrese la edad del alumno: ");
    scanf("%d", &a2.edad);

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a2.promedio);

    printf("\nDatos del segundo alumno:\n");
    puts(a2.nombre);
    puts(a2.carrera);
    puts(a2.direccion);
    printf("Edad: %d\n", a2.edad);
    printf("Promedio: %.2f\n", a2.promedio);

    struct alumno a3;

    printf("\nIngrese el nombre del alumno: ");
    gets(a3.nombre);

    printf("Ingrese la carrera del alumno: ");
    gets(a3.carrera);

    printf("Ingrese la direccion del alumno: ");
    gets(a3.direccion);

    printf("Ingrese la edad del alumno: ");
    scanf("%d", &a3.edad);

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a3.promedio);

    printf("\nDatos del tercer alumno:\n");
    puts(a3.nombre);
    puts(a3.carrera);
    puts(a3.direccion);
    printf("Edad: %d\n", a3.edad);
    printf("Promedio: %.2f\n", a3.promedio);

    struct alumno a4;

    printf("\nIngrese el nombre del alumno: ");
    gets(a4.nombre);

    printf("Ingrese la carrera del alumno: ");
    gets(a4.carrera);

    printf("Ingrese la direccion del alumno: ");
    gets(a4.direccion);

    printf("Ingrese la edad del alumno: ");
    scanf("%d", &a4.edad);

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a4.promedio);

    printf("\nDatos del cuarto alumno:\n");
    puts(a4.nombre);
    puts(a4.carrera);
    puts(a4.direccion);
    printf("Edad: %d\n", a4.edad);
    printf("Promedio: %.2f\n", a4.promedio);

    struct alumno a5;

    printf("\nIngrese el nombre del alumno: ");
    gets(a5.nombre);

    printf("Ingrese la carrera del alumno: ");
    gets(a5.carrera);

    printf("Ingrese la direccion del alumno: ");
    gets(a5.direccion);

    printf("Ingrese la edad del alumno: ");
    scanf("%d", &a5.edad);

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &a5.promedio);

    printf("\nDatos del quinto alumno:\n");
    puts(a5.nombre);
    puts(a5.carrera);
    puts(a5.direccion);
    printf("Edad: %d\n", a5.edad);
    printf("Promedio: %.2f\n", a5.promedio);

    return 0;
}