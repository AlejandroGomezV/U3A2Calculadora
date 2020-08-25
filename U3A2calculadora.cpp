/*
* Programa realizado para la materia de fundamentos de programacion
* Universidad abierta y a distancia de Mexico
* Licenciatura en telematica
* Unidad 3 Actividad  2
* 
* Alumno: Manuel ALejandro Gomez Vazquez
* Docente: Victor Oswaldo Miraflores Sanchez
*/
//Importacion de bibliotecas
#include <stdio.h>
#include <math.h>

//definicion de prototipos
void proceso();
int menu();
int leerNumero(char variable);
float calculadora(int operacion, int numeroA,int numeroB);

//funcion main(funcion principal)
int main(){
	
	proceso();
	printf("\nGracias por utilizar el programa. Hasta luego\n");
	printf("\n\n***Programa realizado por Manuel Alejandro Gomez Vazquez\n");
	printf("\n***correo: manuel.gmz.vqz@gmail.com\n");
	
	return 0;
}

//funcion para ejecutar todo el algoritmo
void proceso(){
	int opcion=0, numeroA, numeroB;
	float resultados[5];
	float mayor=0,menor=0;
	
	opcion=menu();
	numeroA = leerNumero('A');
	numeroB = leerNumero('B');
	calculadora(opcion,numeroA,numeroB);
	
	printf("Desea realizar las 5 operaciones disponibles?\n");
	printf("1.-Si\n");
	printf("2.-No\n");
	scanf("%d",&opcion);
	if(opcion==1){
		//ejecuta las 5 operaciones
		resultados[0]=calculadora(1,numeroA,numeroB);
		resultados[0]=calculadora(2,numeroA,numeroB);
		resultados[0]=calculadora(3,numeroA,numeroB);
		resultados[0]=calculadora(4,numeroA,numeroB);
		resultados[0]=calculadora(5,numeroA,numeroB);
		
		//encuentra el mayor y menor de los resultados
		mayor = menor = resultados[0];
		for(int i=0;i<5;i++){
			if(resultados[i]>mayor)
				mayor=resultados[i];
			if(resultados[i]<menor)
				menor=resultados[i];
		}
		
		printf("\nEl resultado mayor es: %f\n",mayor);
		printf("El resultado menor es: %f\n",menor);
	}
	else if(opcion!=2)
		printf("Eligio una opcion incorrecta...\n");
	
	printf("***Desa volver a ejecutar el programa?\n");
	printf("1.-Si\n");
	printf("2.-No\n");
	scanf("%d",&opcion);
	if(opcion==1){
		//vuelve a ejecutar el procedimiento
		proceso();
	}
	else if(opcion!=2)
		printf("Eligio una opcion incorrecta...\n");
}

//funcion que despliega el menu y lee la eleccion del usuario
int menu(){
	int op = 0;
	
	printf("BIENVENIDO. Elige una opcion\n");
	printf("1.- Suma (a+b))\n");
	printf("2.- Resta (a-b))\n");
	printf("3.- Multiplicacion (a*b)\n");
	printf("4.- Division(a/b)\n");
	printf("5.- Potencia(a^b)\n");
	
	scanf("%d", &op);
	printf("\n");
	
	return op;
}

//funcion que solicita un numero
int leerNumero(char variable){
	int numero=0;
	
	printf("Ingresa en numero %c: ",variable);
	scanf("%d",&numero);
	printf("\n");
	
	return numero;
}

//funcion que realiza las opreaciones de la calculadora
float calculadora(int operacion, int numeroA,int numeroB){
	float resultado=0;
	
	switch(operacion){
		case 1:
			resultado = numeroA + numeroB;
			printf("El resultado de tu suma es: %f\n",resultado);
			break;
		case 2:
			resultado = numeroA - numeroB;
			printf("El resultado de tu resta es: %f\n",resultado);
			break;
		case 3:
			resultado = numeroA * numeroB;
			printf("El resultado de tu multiplicacion es: %f\n",resultado);
			break;
		case 4:
			if(numeroB!=0){
				resultado = numeroA / numeroB;
			printf("El resultado de tu division es: %f\n",resultado);
			}
			else{
				printf("No se puede realizar una division entre cero\nVuelve a intentarlo\n");
				resultado = 0;
			}
			break;
		case 5:
			resultado = pow(numeroA, numeroB);
			printf("El resultado de tu potencia es: %f\n",resultado);
			break;
		default:
			printf("Opcion no valida\n");
	}
	
	return resultado;
}











