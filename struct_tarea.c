#include <stdio.h>
#include <stdlib.h>

/*
  Iterar
   Meter arreglos
*/

int main(){

	struct info{
	char nombre[25];
	char apPaterno[25];
	char apMaterno[25];
	char direccion[25];
	};

struct academico{
	char numeroEmpleado[13];
	struct info datos_profesor[10];
}profesor[10]; 

struct alumnado{
	char numeroCuenta[13];
	char promedio[5];
	struct info datos_estudiante; //
}estudiante;

	int op= 0;
	int reg= 0;
	int i;

			printf("cuantos registros quieres: ");
			scanf("%d",&reg);
			getchar();
	printf("\n\tQue deseas capturar");
	puts("\n\t1.-Profesorado");
	puts("\t2.-Alumnado");
	puts("\t3.-Salir");
	scanf("%d", &op);
	
for(int i=0;i<reg;i++){
		switch(op){
		case 1:
			printf("Dame numero del empleado: ");
			fflush(stdin);
			fgets(profesor[i].numeroEmpleado, 13,stdin);
			printf("Dame nombre: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor[i].nombre, 25, stdin);   
			printf("Dame apellido paterno: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor[i].apPaterno, 25, stdin);
			printf("Dame apellido materno: ");
			fflush(stdin);
			fgets(profesor[i].datos_profesor[i].apMaterno, 25, stdin);
			puts("--------------------");
		//	printf("\n\tID: %s Nombre: %s %s %s", profesor.numeroEmpleado, profesor.datos_profesor.nombre, profesor.datos_profesor.apPaterno, profesor.datos_profesor.apMaterno);   	
			break;
		case 2:
			printf("Promedio del alumno: ");
			fflush(stdin);
			fgets(estudiante.promedio,5,stdin);
			printf("Numero de cuenta del alumno: ");
			fflush(stdin);
			fgets(estudiante.numeroCuenta,13,stdin);
			printf("Nombre: ");
			fflush(stdin);
			fgets(estudiante.datos_estudiante.nombre, 25, stdin);
			printf("Apellido paterno: ");
			fflush(stdin);
			fgets(estudiante.datos_estudiante.apPaterno, 25, stdin);
			printf("Apellido materno: ");
			fflush(stdin);
			fgets(estudiante.datos_estudiante.apMaterno, 25, stdin);
			printf("\n\tID: %s Nombre:%s %s %s", estudiante.numeroCuenta, estudiante.datos_estudiante.nombre, estudiante.datos_estudiante.apPaterno, estudiante.datos_estudiante.apMaterno);   
			break;
		case 3:
			printf("Good day");
			break;
			default:
				printf("Dame una opcion valida");
		}
}
{

}
	printf("\n--------------------------------------\n");
	printf("Imprimiendo Profesores\n");
	for (int i=0; i<reg; i++){
		printf("\n\tID: %s \tNombre: %s \tApPaterno:  %s \tApMaterno:%s", profesor[i].numeroEmpleado, profesor[i].datos_profesor[i].nombre, profesor[i].datos_profesor[i].apPaterno, profesor[i].datos_profesor[i].apMaterno);   	
	}
	printf("\n--------------------------------------\n");
	return 0;
}
