#include <stdio.h>
#include <mysql.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <pthread.h>

void* Atender cliente(void* socket)
{
	int sock_conn;
	int* s;
	s = (int*)socket;
	sock_conn = *s;
	//int socket_conn = * (int *) socket;

	char peticion[512];
	char respuesta[512];
	int ret;

	strcpy(peticion, "Miguel/47/Juan/12/Maria/22/Marcos/19")

	char nombre[20];
	int edad;
	char* p = strtok(peticion, "/");
	while (p != NULL)
	{
		strcpy(nombre, p);
		p = strtok(NULL, "/");
		edad = atoi(p);
		if (edad > 18)
			sprintf(respuesta, % s % s * %d - ", respuesta, nombre, edad)

				p = strtok(NULL, "/");
	}
	respuesta[strlen(respuesta - 1)] = '\0';
	printf(Resultado: % s\n", resultado);


		//Buscamos palindromos
		char* p = strtok(peticion, "/");
	while (p != NULL)
	{
		strcpy(nombre, p);
		p = strtok(NULL, "/");
		edad = atoi(p);
		int a = 0;
		int b = nombre.lenght() - 1;
		char Resultado = "Es palindroma";
		for (int = 0; i <= nombre.lenght(); i++;)
		{
			if (tolower(nombre[a]) == tolower(nombre[b]))
				a++;
			b--;
			else
				Resultado = "No es palindroma";
		}
		sprintf(resultado, % s % s, nombre, resultado)
			p = strtok(NULL, "/");
	}
	printf(Resultado: % s\n", resultado);


		//Pasamos a mayusculas
		char* p = strtok(peticion, "/");
	while (p != NULL)
	{
		strcpy(nombre, p);
		p = strtok(NULL, "/");
		edad = atoi(p);
		char Resultado = "Es palindroma";
		for (int = 0; i <= nombre.lenght(); i++;)
		{
			if (tolower(nombre[a]) == tolower(nombre[b]))
				a++;
			b--;
			else
				Resultado = "No es palindroma";
		}
		sprintf(resultado, % s / % d / , Resultado, edad)
			p = strtok(NULL, "/");
	}
	resultado[strlen(resultado - 1)] = '\0';
	printf(Resultado: % s\n", resultado);
	

}
int main(int argc, char* argv[])
{
	int sock_conn, sock_listen;
	struct sockaddr_in serv_adr;

	// INICIALITZACIONS
	// Obrim el socket
	if ((sock_listen = socket(AF_INET, SOCK_STREAM, 0)) < 0)
		printf("Error creant socket\n");
	// Fem el bind al port


	memset(&serv_adr, 0, sizeof(serv_adr));// inicialitza a zero serv_addr
	serv_adr.sin_family = AF_INET;

	// asocia el socket a cualquiera de las IP de la m?quina. 
	//htonl formatea el numero que recibe al formato necesario
	serv_adr.sin_addr.s_addr = htonl(INADDR_ANY);
	// establecemos el puerto de escucha
	serv_adr.sin_port = htons(9300);
	if (bind(sock_listen, (struct sockaddr*)&serv_adr, sizeof(serv_adr)) < 0)
		printf("Error al bind\n");

	if (listen(sock_listen, 4) < 0)
		printf("Error en el Listen\n");

	int i;
	int sockets[100];
	pthread_t thread;
	i = 0;
	// Bucle infinito
	for (;;) {
		printf("Escuchando\n");

		sock_conn = accept(sock_listen, NULL, NULL);
		printf("He recibido conexion\n");
		//sock_conn es el socket que usaremos para este cliente
		sockets[i] = sock_conn;

		// Crear thead y decirle lo que tiene que hacer
		pthread_create(&thread, NULL, AtenderCliente, &sockets[i]);
		i = i + 1;
	}
}
	

	






