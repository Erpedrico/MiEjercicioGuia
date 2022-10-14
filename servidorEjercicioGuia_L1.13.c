#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>



int main(int argc, char *argv[])

	char peticion [100];
	char resultado[100];

	strcpy (peticion, "Miguel/47/Juan/12/Maria/22/Marcos/19")

	char nombre[20];
	int edad;
	char *p =strtok (peticion, "/"); 
	while (p!=NULL)
	{
		strcpy (nombre,p);
		p=strtok (NULL,"/");
		edad = atoi(p);
		if (edad>18)
			sprintf(respuesta,%s%s*%d-", respuesta, nombre, edad)

		p = strtok (NULL,"/");
	}
	respuesta [strlen (respuesta-1)] = '\0';
	printf (Resultado: %s\n", resultado);
	
	
	//Buscamos palindromos
	char *p =strtok (peticion, "/"); 
	while (p!=NULL)
	{
		strcpy (nombre,p);
		p=strtok (NULL,"/");
		edad = atoi(p);
		int a = 0;
		int b = nombre.lenght() - 1;
		char Resultado = "Es palindroma";
		for (int = 0; i <= nombre.lenght(); i++;)
		{
			if (tolower(nombre[a])==tolower(nombre[b]))
				a++;
				b--;
			else
				Resultado = "No es palindroma";
		}
		sprintf(resultado,%s%s,nombre, resultado)
		p = strtok (NULL,"/");
	}
	printf (Resultado: %s\n", resultado);


	//Pasamos a mayusculas
	char *p =strtok (peticion, "/"); 
	while (p!=NULL)
	{
		strcpy (nombre,p);
		p=strtok (NULL,"/");
		edad = atoi(p);
		char Resultado = "Es palindroma";
		for (int = 0; i <= nombre.lenght(); i++;)
		{
			if (tolower(nombre[a])==tolower(nombre[b]))
				a++;
				b--;
			else
				Resultado = "No es palindroma";
		}
		sprintf(resultado, %s/%d/ ,Resultado,edad)
		p = strtok (NULL,"/");
	}
	resultado [strlen (resultado-1)] = '\0';
	printf (Resultado: %s\n", resultado);

	






