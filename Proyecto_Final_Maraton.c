
// Universidad Nacional Auntónoma de México. 
// Facultad de Ingeniería. División de Ingeniería Eléctrica.
//Fundamentos de Programación.




							// PROYECTO FINAL: JUEGO DE MESA, MARATÓN (2 o 3 jugadores). 




//Profesor: Ing. Santos Jaimes German 

//Alumnos: 	
	
	//Cruz Carbajal Gerardo
	//López Salazar Miguel Ángel
	
// Grupo: 1119,  Semestre 2019-1. 









// Librerias utilizadas 

#include<stdio.h> //libreria para input ouput
#include<conio.h> //libreeria para pausar
#include<stdlib.h> //libreria para manejar cadenas
#include<time.h> //libreria para random
#include<stdio.h> //libreria para input ouput
#include<string.h> //libreria para limpiar buffer
#include<ctype.h> //libreria para toupper
#include<dos.h>





//Variables y funciones para el juego con 2 jugadores

int j=0;
int numero=0;
int numero2=0;
int numero3=0;
void numero_aleatorio ();
void numero_aleatorio2 ();
void numero_aleatorio3 ();
int i=0;
int puntos=0;
int respuestas=0;
int puntosjugador1=0;
int puntosjugador2=0;
int puntos_jugador3=0;
int robopuntos=0;					
int dado1;
int dado2;
int dado3;
int respuestacorrecta=0;
int turno=1;
int control1;
int matematicas=0;
int historia=0;
int artes=0;
int Jugador1;
int Jugador2;
int robapuntos;




//Variables y funciones para el juego con 3 jugadores

int jugador[3]={0,0,0};
int ignorancia=0;
int a=0, b =0; //variables para ciclos for
int dado; 
int puntoss, respuesta ;
int preguntas(int*, int); //funcion para las preguntas(3 jugadores)

int preguntas(int *respuesta, int dado){

	*respuesta=0;
	char r;
	switch(dado){
		case 0:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Nombre que se le aplica al esquema básico de la comunicación humana:");
			printf("\n\n\t\t a) Conversacion \n\n\t\t b) Monologo \n\n\t\t c) Charla \n\n\t\t d) Circuito del habla \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='D'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 1:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Conjunto de medios de expresión propios de un grupo determinado, dentro del dominio de una lengua.");
			printf("\n\n\t\t a) Señas \n\n\t\t b) Gestos \n\n\t\t c) Voz \n\n\t\t d) Habla \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='C'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 2:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Forma de expresión que permanece al través del tiempo, sin importar la distancia física entre el emisor y el receptor.");
			printf("\n\n\t\t a) Lengua hablada \n\n\t\t b) Lengua escrita \n\n\t\t c) Lenguaje Oral \n\n\t\t d) Lenguaje Corporal \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='B'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 3:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Figura literaria que consiste en usar palabras con un sentido distinto del propio, en virtud de una comparación tácita.");
			printf("\n\n\t\t a) Hiperbole \n\n\t\t b) Metafora \n\n\t\t c) Alegoria \n\n\t\t d) Hiperbaton \n\n\n\t\t");
			
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='B'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 4:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Persona, animal o cosa, real o imaginario, abstracto o concreto, efectúa o recibe la acción expresada por el verbo:");
			printf("\n\n\t\t a) Adverbio \n\n\t\t b) Verboide \n\n\t\t c) Sustantivo \n\n\t\t d) Calificativo \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='C'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 5:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Todos son accidentes del verbo, excepto:");
			printf("\n\n\t\t a) Persona \n\n\t\t b) Numero \n\n\t\t c) Tiempo \n\n\t\t d) Genero \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='D'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 6:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Seis cables tienen que ser conectados a seis terminales. ¿En cuantas combinaciones posibles pueden ser conectados estos cables?");
			printf("\n\n\t\t a) 6 \n\n\t\t b) 36 \n\n\t\t c) 76 \n\n\t\t d) 720 \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='D'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 7:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Si el perímetro de un triángulo equilátero es igual a 18.6 cm, cada uno de sus lados mide:");
			printf("\n\n\t\t a) 6.2 \n\n\t\t b) 3.1 \n\n\t\t c) 9.3 \n\n\t\t d) Dos  Pi \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='A'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 8:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t El numero 0.35 equivale a:");
			printf("\n\n\t\t a) 20/7 \n\n\t\t b) 7/20 \n\n\t\t c) 35/10 \n\n\t\t d) 5/12 \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='B'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 9:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Cuál es el mínimo común múltiplo de 9, 18 y 27?");
			printf("\n\n\t\t a) 57 \n\n\t\t b) 54 \n\n\t\t c) 3 \n\n\t\t d) 9 \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='B'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 10:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t En la expresión 3,587 el valor relativo del 8 es:");
			printf("\n\n\t\t a) 80 \n\n\t\t b) 64 \n\n\t\t c) 120 \n\n\t\t d) 87 \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='A'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 11:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Dos ángulos conjugados internos, entre paralelas, son:");
			printf("\n\n\t\t a) Complementarios \n\n\t\t b) Suplementarios \n\n\t\t c) Conexos \n\n\t\t d) Nulos \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='B'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 12:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t En el estado de Oaxaca se desarrolló esta cultura, y su principal centro se encuentra en Monte Albán:");
			printf("\n\n\t\t a) Olmeca \n\n\t\t b) Mixteca \n\n\t\t c) Zapoteca \n\n\t\t d) Mexica \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='C'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 13:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t Chichén-Itzá, Tulum, Palenque y Uxmal, entre otros, son impoprtantes señoríos de esta cultura:");
			printf("\n\n\t\t a) Inca \n\n\t\t b) Mexica \n\n\t\t c) Totonaca \n\n\t\t d) Maya \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='D'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		case 14:
			printf("\n\n\t\t Valor de la pregunta 8 puntos");
			printf("\n\n\t\t En la antigua civilización Mexica, los ____ asistían a centros educativos llamados Telpuchcalli.");
			printf("\n\n\t\t a) Sacerdotes \n\n\t\t b) Guerreros \n\n\t\t c) Plebeyos \n\n\t\t d) Nobles \n\n\n\t\t");
			fflush( stdin );
			scanf("%c", &r);
			r=toupper(r);
			 if (r =='C'){
			 	printf("respuesta correcta");
			 	getch();
				 *respuesta=1;
			 }else{
			 	printf("respuesta incorrecta");
			 	getch();
			 }
			return 8;
		break;
		
	}
}




//Funciones para dados (2 jugadores)


void numero_aleatorio (){
	
	srand (time(NULL));
	numero= 1+rand()%((6+1)-1);
	
}



void numero_aleatorio2 (){
										// Funciones que permiten obtener numero aleatorios simulando un dado
	srand (time(NULL));
    numero2= 1+rand()%((5+1)-1);
	
}

	
void numero_aleatorio3 () {
	
	srand (time(NULL));
	numero3= 1+rand()%((4+1)-1);
	
	
}	

	
// Funciones para las preguntas (2 jugadores)



void preguntas_matematicas (){
	
	srand (time(NULL));
	
	matematicas=1+rand()%((5+1)-1);
	
	switch (matematicas) {
		
		
		case 1: printf ("\n\n Categoria: matematicas (8 puntos).\n\n  Tema: Algebra\n\n\n    La factorizacion de la suma de cuadrados implica numeros complejos?");
		
			printf ("\n\n Opcion 1: No, es la diferencia\n\n\n Opcion 2: Si, se requieren \n\n\n Opcion 3: No existe dicha factorizacion");
			
			
			scanf ("%i", &respuestas);
		
				
				switch (respuestas){
					
					
					case 1:   	
								printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
								
								respuestas=0;	
								scanf ("%i", &respuestas);
								
								
								
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
													robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 8 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
										}
							
						matematicas=0;		
						
						
					break;
				
				
					case 2:     printf ("\n\n Respuesta correcta, tiene 8 puntos ganados");
								
								respuestas=0;
								
							    respuestacorrecta=1;
								
								matematicas=0;
					
					break;
								
								
								
					case 3:   		printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
									
									respuestas=0;	
									scanf ("%i", &respuestas);
									
									
									
											switch (respuestas){
												
											
												case 1:  
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
										
													ignorancia= ignorancia + 8;
										
													respuestas=0;	
												
												break;
												
												
												
												case 2: 
												
														robopuntos=1;
										
														printf ("\n\n Correcto, ha robado 8 puntos");
										
														respuestas=0;
													
												
												break;
												
												
												
												case 3:
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
										
													ignorancia= ignorancia + 8;
										
													respuestas=0;	
												
												break;
												
												
											}
								
							matematicas=0;		
							
							
					break;
				
			
			
		}
		
		fflush( stdin );
		
		break;
					
					
		
		
		case 2: printf ("\n\n Categoria: matematicas (8 puntos).\n\n  Tema: Calculo diferencial\n\n\n    Descubridor del concepto de derivada con un enfoque en la fisica");
		
			printf ("\n\n Opcion 1: G. Libniz \n\n\n Opcion 2: Fermat \n\n\n Opcion 3: Isaac Newton");
			
			
			scanf ("%i", &respuestas);
		
					
			switch (respuestas){
					
					
					case 1:   	
								printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
								
								respuestas=0;	
								scanf ("%i", &respuestas);
								
								
								
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
												 printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											       robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 8 puntos");
									
													respuestas=0;
												
											
											break;
											
											
										}
							
						matematicas=0;		
						
						
					break;
				
				
					case 2:    printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
								
								respuestas=0;	
								scanf ("%i", &respuestas);
								
								
									switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
												 printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											       robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 8 puntos");
									
													respuestas=0;
												
											
											break;
											
											
										}
							
						matematicas=0;		
						
						
					break;
								
								
					case 3:   	printf ("\n\n Respuesta correcta, tiene 8 puntos ganados");
								
								respuestas=0;
								
							    respuestacorrecta=1;
								
								matematicas=0;
					
					break;
								
				
			
			
		}
		
		
		fflush( stdin );
		break;			
		
		
		 
		 
		case 3: printf ("\n\n Categoria: matematicas (8 puntos).\n\n  Tema: Geometria Analitica\n\n\n    Sea la excentricidad de una seccion conica mayor a 1 decimos que se trata de una");
		
			printf ("\n\n Opcion 1: Hiperbola \n\n\n Opcion 2: Circunferencia \n\n\n Opcion 3: Parabola");
			
			
			scanf ("%i", &respuestas);
		
		
			switch (respuestas){
					
					
					case 1:   	printf ("\n\n Respuesta correcta, tiene 8 puntos ganados");
								
								respuestas=0;
								
							    respuestacorrecta=1;
								
								matematicas=0;
					
						break;
				
					case 2:     printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
									
									respuestas=0;	
									scanf ("%i", &respuestas);
									
									
									
											switch (respuestas){
												
											
												case 1:  
												
												       robopuntos=1;
										
														printf ("\n\n Correcto, ha robado 8 puntos");
										
														respuestas=0;
													
												
												break;
												
												
												
												case 2: 
												
													printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
										
													ignorancia= ignorancia + 8;
										
													respuestas=0;	
												
												break;
												
												
												
												case 3:
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
										
													ignorancia= ignorancia + 8;
										
													respuestas=0;	
												
												break;
												
												
											}
								
							matematicas=0;		
							
							
					break;
								
								
								
					case 3:   		printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
									
									respuestas=0;	
									scanf ("%i", &respuestas);
									
									
									
												switch (respuestas){
												
											
													case 1:  
													
													       robopuntos=1;
											
															printf ("\n\n Correcto, ha robado 8 puntos");
											
															respuestas=0;
														
													
													break;
													
													
													
													case 2: 
													
														printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
											
														ignorancia= ignorancia + 8;
											
														respuestas=0;	
													
													break;
													
													
													
													case 3:
													
													    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
											
														ignorancia= ignorancia + 8;
											
														respuestas=0;	
													
													break;
												
												
											}
								
								
							matematicas=0;		
							
							
					break;
				
			
			
		}
		
		
		fflush( stdin );
		break;
								        	
		
	
		
		
		
		case 4: printf ("\n\n Categoria: matematicas (8 puntos).\n\n  Tema: Calculo Integral\n\n\n    Matematico aleman quien dio formalidad al concepto de integral empleando el uso de sumas");
		
			printf ("\n\n Opcion 1: Henry Poincare \n\n\n Opcion 2: Bernard Riemann \n\n\n Opcion 3: Evariste Galois");
			
			
			scanf ("%i", &respuestas);
		
					
						        
				        
		switch (respuestas){
					
					
					case 1:   	
								printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
								
								respuestas=0;	
								scanf ("%i", &respuestas);
								
								
								
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
													robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 8 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
										}
							
						matematicas=0;		
						
						
					break;
				
				
					case 2:     printf ("\n\n Respuesta correcta, tiene 8 puntos ganados");
								
								respuestas=0;
								
							    respuestacorrecta=1;
								
								matematicas=0;
					
					break;
								
								
								
					case 3:   		printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
									
									respuestas=0;	
									scanf ("%i", &respuestas);
									
									
									
											switch (respuestas){
												
											
												case 1:  
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
										
													ignorancia= ignorancia + 8;
										
													respuestas=0;	
												
												break;
												
												
												
												case 2: 
												
														robopuntos=1;
										
														printf ("\n\n Correcto, ha robado 8 puntos");
										
														respuestas=0;
													
												
												break;
												
												
												
												case 3:
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
										
													ignorancia= ignorancia + 8;
										
													respuestas=0;	
												
												break;
												
												
											}
								
							matematicas=0;		
							
							
					break;
				
			
			
		}
		
		
		fflush( stdin );
		break;
						
			
				
			
			
		case 5:	printf ("\n\n Categoria: matematicas (8 puntos).\n\n  Tema: Probabilidad\n\n\n    La probabilidad de que un evento ocurra siempre es igual a ");
		
			printf ("\n\n Opcion 1: 100 \n\n\n Opcion 2: 1/n, donde n es el total de casos posibles \n\n\n Opcion 3: 1");
			
			
			scanf ("%i", &respuestas);
		
						        
				        
				        	
			switch (respuestas){
					
					
					case 1:   	
								printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
								
								respuestas=0;	
								scanf ("%i", &respuestas);
								
								
								
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											       robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 8 puntos");
									
													respuestas=0;
												
											
											break;
											
										}
							
						matematicas=0;		
						
						
					break;
				
				printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
								
								respuestas=0;	
								scanf ("%i", &respuestas);
								
								
								
										
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 8 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											       robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 8 puntos");
									
													respuestas=0;
												
											
											break;
											
										}
							
						matematicas=0;		
						
						
								
								
								
					case 3:   	printf ("\n\n Respuesta correcta, tiene 8 puntos ganados");
								
								respuestas=0;
								
							    respuestacorrecta=1;
								
								matematicas=0;
					
					break;
			
			
		}
		
		
		fflush( stdin );
		break;
					
		
		
	}
	
	
	
	
	
	
}


void preguntas_historia (){
	
		srand (time(NULL));
	
		historia=1+rand()%((5+1)-1);


		switch(historia) {
			
			
			case 1: printf ("\n\n Categoria: historia (6 puntos).\n\n  Tema: Historia Universal \n\n\n  Arte que nacio en la ciudad griega de Atenas en el 536 a.C");
		
			printf ("\n\n Opcion 1: La musica \n\n\n Opcion 2: El teatro \n\n\n Opcion 3: La arquitectura");
			
			
			scanf ("%i", &respuestas);
			
			
									
				switch (respuestas){
				
				
					case 1: 
							printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
							
							respuestas=0;
							
							scanf ("%i", &respuestas);
							
							
							
							
											switch (respuestas){
												
											
												case 1:  
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
										
													ignorancia= ignorancia + 6;
										
													respuestas=0;	
												
												break;
												
												
												
												case 2: 
												
														robopuntos=1;
										
														printf ("\n\n Correcto, ha robado 6 puntos");
										
														respuestas=0;
													
												
												break;
												
												
												
												case 3:
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
										
													ignorancia= ignorancia + 6;
										
													respuestas=0;	
												
												break;
												
												
											}
							
							historia=0;
				
					break;
				
				
				
				
				
				
				
				
					case 2: printf ("\n\n Respuesta correcta, tiene 6 puntos ganados");
							
							respuestas=0;
							
						   	respuestacorrecta=1;
								
						    historia=0;
					
					        break;
							
							
							
					case 3: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
							
							respuestas=0;
							
							scanf ("%i", &respuestas);
							
							
							
							
											switch (respuestas){
												
											
												case 1:  
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
										
													ignorancia= ignorancia + 6;
										
													respuestas=0;	
												
												break;
												
												
												
												case 2: 
												
														robopuntos=1;
										
														printf ("\n\n Correcto, ha robado 6 puntos");
										
														respuestas=0;
													
												
												break;
												
												
												
												case 3:
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
										
													ignorancia= ignorancia + 6;
										
													respuestas=0;	
												
												break;
												
												
											}
							
							historia=0;
				
					    break;
				
				
				
				
					}
			
		
			fflush( stdin );	
				
			break;	
					
			
			case 2: printf ("\n\n Categoria: historia (6 puntos).\n\n  Tema:Historia Universal\n\n\n Mar en el que a sus orillas vivieron los egipcios, fenicios, griegos y romanos");
		
			printf ("\n\n Opcion 1: Mar mediterraneo \n\n\n Opcion 2: Mar muerto \n\n\n Opcion 3: Mar rojo");
			
			
			scanf ("%i", &respuestas);
			  
			
								
			switch (respuestas){
			
			
				case 1: 
						printf ("\n\n Respuesta correcta, tiene 6 puntos ganados");
						
						respuestas=0;
						
					   	respuestacorrecta=1;
							
					    historia=0;
				
				        break;
			
			
			
			
			
			
			
			
				case 2: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    
													robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 6 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
										}
						
						historia=0;
			
				break;
						
						
						
				case 3: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						switch (respuestas){
											
										
											case 1:  
											
											    
													robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 6 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
										}
						
						historia=0;
			
				break;
			
			
			
			
		}
		
		
			fflush( stdin );	
				
			break;	
			
			
			
			case 3: printf ("\n\n Categoria: historia (6 puntos).\n\n  Tema:Historia de Mexicol\n\n\n Aliados de Hernan cortes para derrocar a Mexico-Tenochtitlan");
		
			printf ("\n\n Opcion 1: Los mayas \n\n\n Opcion 2: Los olmecas \n\n\n Opcion 3: Los totonacas y los tlaxcaltecas");
			
			
			scanf ("%i", &respuestas);
			
			
								
			switch (respuestas){
			
			
				case 1: 
						printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											       robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 6 puntos");
									
													respuestas=0;
												
											
											break;
											
											
										}
						
				historia=0;		
			
				break;
			
			
			
			
			
			
			
			
				case 2: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
									
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											       robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 6 puntos");
									
													respuestas=0;
												
											
											break;
											
											
										}
						
				historia=0;		
			
				break;
						
						
						
				case 3: printf ("\n\n Respuesta correcta, tiene 6 puntos ganados");
						
						respuestas=0;
						
					   	respuestacorrecta=1;
							
					    historia=0;
				
				        break;
			
			
			
			
		}
		
		
			fflush( stdin );		
			break;	
			
			
			case 4:printf ("\n\n Categoria: historia (6 puntos).\n\n  Tema:Historia de Mexicol\n\n\n La primera intervencion Francesa en territorio Mexicano se conoce como");
		
			printf ("\n\n Opcion 1: Guerra de secesion \n\n\n Opcion 2: Guerra de los 3 años \n\n\n Opcion 3: Guerra de los pasteles");
			
			
			scanf ("%i", &respuestas);
			
			switch (respuestas){
			
			
				case 1: 
						printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
							switch (respuestas){
											
											
												case 1:  
												
												    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
										
													ignorancia= ignorancia + 6;
										
													respuestas=0;	
												
												break;
												
												
												
												case 2: 
												
													printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
										
													ignorancia= ignorancia + 6;
										
													respuestas=0;	
												
												break;
												
												
												
												case 3:
												
												   
														robopuntos=1;
										
														printf ("\n\n Correcto, ha robado 6 puntos");
										
														respuestas=0;
													
												
												break;
											
										}
						
				historia=0;		
			
				break;
			
			
			
			
			
			
			
			
				case 2: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											   
													robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 6 puntos");
									
													respuestas=0;
												
											
											break;
											
										}
						
				historia=0;		
			
				break;
			
						
						
						
				case 3: printf ("\n\n Respuesta correcta, tiene 6 puntos ganados");
						
						respuestas=0;
						
					   	respuestacorrecta=1;
							
					    historia=0;
				
				        break;
			
			
			
			
		}
		
		
				
				
			break;	
			
			
			
			case 5:	printf ("\n\n Categoria: historia (6 puntos).\n\n  Tema:Historia de Mexicol\n\n\n Tratado que reconocio la Independencia de Texas");
		
			printf ("\n\n Opcion 1: Tratado de Velasco \n\n\n Opcion 2: Tratado de Cordova \n\n\n Opcion 3: Tratado de Guadalupe-Hidalgo");
			
			
			scanf ("%i", &respuestas);
			
			
								
			switch (respuestas){
			
			
				case 1: 
					    printf ("\n\n Respuesta correcta, tiene 6 puntos ganados");
						
						respuestas=0;
						
					   	respuestacorrecta=1;
							
					    historia=0;
				
				        break;
			
			
			
			
			
			
			
				case 2: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    
													robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 6 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				historia=0;		
			
				break;
			
			
						
						
						
				case 3: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										
										switch (respuestas){
											
										
											case 1:  
											
											    
													robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 6 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 6 puntos");
									
												ignorancia= ignorancia + 6;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				historia=0;		
			
				break;
			
			
			
			
		}
		
		
				
				
			break;	
			
			
			
			
			}
						
						
			
			
		}
		
		

void preguntas_artes (){
	
		srand (time(NULL));
	
		artes=1+rand()%((5+1)-1);	
	
	switch (artes) {
		
		
		case 1: printf ("\n\n Categoria: Arte (4 puntos).\n\n  Tema: Pintura \n\n\n  Autor de la obra La ultima cena");
		
			printf ("\n\n Opcion 1: Rafael Sanzio \n\n\n Opcion 2: 	Leonardo Da Vinci \n\n\n Opcion 3: Sandro Botticelli");
			
			
			scanf ("%i", &respuestas);
		
			switch (respuestas){
			
			
				case 1: 
						printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
													robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
			
			
			
			
			
			
			
			
				case 2: printf ("\n\n Respuesta correcta, tiene 4 puntos ganados");
						
						respuestas=0;
						
					   	respuestacorrecta=1;
							
					    artes=0;
				
				        break;
						
						
						
				case 3: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 8;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
													robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
			
			
			
			
		}
		
		
		
		break;
		
		
		
			
		case 2: printf ("\n\n Categoria: Arte (4 puntos).\n\n  Tema: Pintura \n\n\n  Numero de pinturas de Da Vinci conocidas");
		
			printf ("\n\n Opcion 1: 15 \n\n\n Opcion 2: 1  \n\n\n Opcion 3: 32");
	
	
			scanf ("%i", &respuestas);
	
			switch (respuestas){
				
				
				case 1: 
						printf ("\n\n Respuesta correcta, tiene 4 puntos ganados");
						
						respuestas=0;
						
					   	respuestacorrecta=1;
							
					    artes=0;
				
				        break;
			
			
			
			
			
			
			
			
				case 2: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    	robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
			
						
						
						
				case 3: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    	robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
			
			
			
			
		}		
			
			
	
		
		break;
		
				
				
				
			
			
		
		
		case 3: printf ("\n\n Categoria: Arte (4 puntos).\n\n  Tema: Pintura \n\n\n  Autor de la obra El grito");
		
			printf ("\n\n Opcion 1: Eduard Munch \n\n\n Opcion 2: Pablo Picasso \n\n\n Opcion 3: Miguel Angel");
		
			
			scanf ("%i", &respuestas);
		
				
			switch (respuestas){
			
				
			
				case 1: 
						printf ("\n\n Respuesta correcta, tiene 4 puntos ganados");
						
						respuestas=0;
						
					   	respuestacorrecta=1;
							
					    artes=0;
				
				        break;
			
			
			
			
			
			
			
			
				case 2: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											        robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
						
						
						
				case 3: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											        robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
			
			
			
			
		}
			
			
		
		
		break;
		
		
		
		case 4: printf ("\n\n Categoria: Arte (4 puntos).\n\n  Tema: Arte contemporaneo \n\n\n  Padre del llamado Art pop");
		
			printf ("\n\n Opcion 1: Connan Mockasin \n\n\n Opcion 2: Archy Ivan Marshall \n\n\n Opcion 3: Andy Warhol");
	
			
			scanf ("%i", &respuestas);
		
				switch (respuestas){
			
			
				case 1: 
						printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											        robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
			
			
			
			
			
			
			
			
				case 2: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 2: 
											
												printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											        robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
						
						
						
				case 3: printf ("\n\n Respuesta correcta, tiene 4 puntos ganados");
						
						respuestas=0;
						
					   	respuestacorrecta=1;
							
					    artes=0;
				
				        break;
			
			
			
			
		}
										
			
		
		
		break;
		
		
		case 5:	printf ("\n\n Categoria: Arte (4 puntos).\n\n  Tema: Musica \n\n\n Compositor Italiano mejor conocido como el violinista del diablo");
		
			printf ("\n\n Opcion 1: Niccolo Paganini \n\n\n Opcion 2: Antonio Vivaldi \n\n\n Opcion 3: Mozart");
			
			
			scanf ("%i", &respuestas);
		
									
			switch (respuestas){
			
			
				case 1: 
						printf ("\n\n Respuesta correcta, tiene 4 puntos ganados");
						
						respuestas=0;
						
					   	respuestacorrecta=1;
							
					    artes=0;
				
				        break;
			
			
			
			
			
			
			
			
				case 2:  printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											        robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 2: 
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
			
						
						
						
				case 3: printf ("\n\n Incorrecto, deje al otro jugador contestar"); 
						
						respuestas=0;
						
						scanf ("%i", &respuestas);
						
						
						
						
										switch (respuestas){
											
										
											case 1:  
											
											        robopuntos=1;
									
													printf ("\n\n Correcto, ha robado 4 puntos");
									
													respuestas=0;
												
											
											break;
											
											
											
											case 2: 
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
											
											case 3:
											
											    printf ("\n\n Muy mal! La ignorancia ha ganado los 4 puntos");
									
												ignorancia= ignorancia + 4;
									
												respuestas=0;	
											
											break;
											
											
										}
						
				artes=0;		
			
				break;
			
			
			
			
		}
											
			
		
		
		break;
		
		
		
		
         }  
		
    }




//FUNCION PRINCIPAL, INICIO DEL PROGRAMA





int main (){

//Menú principal (escoger el numero de jugadores)

printf("\nJuego de mesa virtual: Maraton.  \n\n ¡Bienveido!\n\n  Cuantas personas jugaran?, 2 o 3? ");	
	
	scanf ("%d", &j);
	
if ((j>1 && j<4)) {

	printf ("Perfecto!, el numero de jugadores sera de: %i",j);

	
	fflush( stdin );
	

	}	
 
 else {

	printf ("Lo sentimos :c solo pueden jugar 2 o 3 personas, intente de nuevo.");

	}


//Sección donde se escogen los turnos

printf ("  \n\n Hora de escoger los turnos\n\n ");

	fflush( stdin );


	switch (j){
		
		
		case 2:	// IMPORTANTE. Esta sección entera corresponde a el juego sólo para 2 jugadores 
			
				numero_aleatorio();
				fflush( stdin );
				
				numero_aleatorio2();
				fflush( stdin );
			
		
			if (numero!=numero2){
			
			
					printf ("\n\n\n Jugador 1 su dado es: %i", numero);								
				
					printf ("\n\n\n Jugador 2 su dado es: %i", numero2);

			
						                   	} 
			else {
			
				do {
			
					srand (time(NULL));
					numero= 1+rand()%((6+1)-1);
					
			
					srand (time(NULL));
    				numero2= 1+rand()%((6+1)-1);
				
						                   	} 
				while (numero=numero2);
			
			
			
			
		
			
				}  
		

			
			
			
				
				
			//Inicio del Juego (2 jugadores)
			
			
					if (numero>numero2) {
					
						//Caso 1 (inicia jugador 2) 
						
					
						do {
								
							fflush( stdin );
								
							switch (turno){
								
								
									//Inicialización de datos del jugador
									
									case 1:  
									
										
											turno=0;			
											control1=0;
											dado1=0;
										
											printf ("\n\n\n  Es el turno del jugador 2 \n\n\n");		
										
										
											srand (time(NULL));
											dado1=1+rand()%((6+1)-1);
										
										     
											 printf ("\n\n\n  Jugador 2, avanza: %i",dado1); 
										     
										     
										     i=i+dado1;
										     
										     dado1=0;
										     
											     
											srand (time(NULL));
											     
											control1=1+rand()%((3+1)-1);
										     
										     // Sección donde aleatoriamente entra las categorias de preguntas y son respondidas
									     
									   		 switch (control1){
										
													
													case 1: preguntas_matematicas();
													
													
													
													
														if (respuestacorrecta=1){
															
															puntosjugador2=puntosjugador2+8;
															
															respuestacorrecta=0;
															
															control1=0;
															
															turno=0;
														}
																		
														else {
														
														if (robopuntos=1) {
															
															puntosjugador1=puntosjugador1+8;
															
															robapuntos=0;
															
															control1=0;
															
															turno=0;
																			}
														
														
														}
													
													
													
														break;
													
													
													case 2:	 preguntas_historia();
													
													
														
														if (respuestacorrecta=1){
															
																puntosjugador2= puntosjugador2+6;
															
															 	respuestacorrecta=0;
															 	
															 	control1=0;
															 	
															 	turno=0;
															}
																		
														else {
														
															if (robopuntos=1) {
															
																puntosjugador1=puntosjugador1+6;
															
															
																robapuntos=0;
																
																control1=0;
																
																turno=0;
															}
																}
						
														
														
														
														break;	
														
														
													case 3:	 preguntas_artes ();
													
													
														
														if (respuestacorrecta=1){
															
															puntosjugador2= puntosjugador2+4;
															
															respuestacorrecta=0;
															
															control1=0;
															
															turno=0;
														}
														
																		
														else {
														
														if (robopuntos=1) {
															
															puntosjugador1=puntosjugador1+4;
															
														
															
															robapuntos=0;
															
															control1=0;
															
															turno=0;
															
															}
														}
														
							
															break;
													
													
												
													
													
												         }
									
									break;
					
									//Inicialización de datos del jugador siguiente	
										
									case 0:
										
										
										turno=1	;		
									 	control1=1;
									 	dado2=0;
									 	
									 	printf ("\n\n\n  Es el turno del jugador 1 \n\n\n");		
									
									
											srand (time(NULL));
											dado2=1+rand()%((6+1)-1);
									
									     
										 printf ("\n\n\n  Jugador 1, avanza: %i",dado2); 
									     
									     
									     i=i+dado2;
									 	
									 	   srand (time(NULL));
										     
									  	   control1=1+rand()%((3+1)-1);
										 
										 // // Sección donde aleatoriamente entra las categorias de preguntas y son respondidas 
										 
										 switch (control1) {
										 	
										 	
										 	case 1: preguntas_matematicas();
										
										
											if (respuestacorrecta=1){
												
												puntosjugador1=puntosjugador1+8;
												
												respuestacorrecta=0;
												
												control1=0;
												
												turno=1;
											}
															
											else {
											
											if (robopuntos=1) {
												
												puntosjugador2=puntosjugador2+8;
												
												
												robapuntos=0;
												
												control1=0;
												
												turno=1;
																}
											
											
											}
										 		
										 							 		
										 		
										 		break;
										 		
										 		
										 		
										 		
										 		
										 		
										 		
										 	case 2: preguntas_historia();
										
										
											
											if (respuestacorrecta=1){
												
													puntosjugador1= puntosjugador1+6;
												
												 	respuestacorrecta=0;
												 	
												 	control1=0;
												 	
												 	turno=1;
												 	
												}
															
											else {
											
												if (robopuntos=1) {
												
													puntosjugador2=puntosjugador2+6;
												
												
													robapuntos=0;
													
													
													control1=0;
													
													turno=1;
												}
													}
			
										 		
										 		
										 		
											 
											 	break;
											 	
											case 3: preguntas_artes ();
										
										
											
											if (respuestacorrecta=1){
												
												puntosjugador1= puntosjugador1+4;
												
												respuestacorrecta=0;
												
												control1=0;
												
												turno=1;
											}
											
															
											else {
											
											if (robopuntos=1) {
												
												puntosjugador2=puntosjugador2+4;
												
											
												
												robapuntos=0;
												
												control1=0;
												
												turno=1;
												
												}
											}
											
												
												
												
												
												
											
											 	break;
										 	
										 	
										 	
										 	
										 	
										 	
										 }
										 
										
					
									break;
	
					
					
								
								
							}	
								
								
			
								
								
							}     
							     
							 
						 
								 
						//Control del ciclo. Toma en cuenta la casilla ignorancia y el numero de casillas que cada jugador avanza		 
								 
						while (i<=42 && ignorancia<42);
				
								 
								
							 	
							 	
							 	
							 }    
							     
							     
				
							     
							     
							
							
							
				
					//Caso 2 (inicia el jugador 1)
				
					else {
					
					
					
					
						
					
						do {
							
							fflush( stdin );	
								
							switch (turno){
							
							
								//Inicialización de datos de jugador	
							
								case 1:
								
										control1=0;
										dado1=0;
									
										printf ("\n\n\n  Es el turno del jugador 1 \n\n\n");		
									
									
											srand (time(NULL));
											dado1=1+rand()%((6+1)-1);
									
									     
										 printf ("\n\n\n  Jugador 1, avanza: %i",dado1); 
									     
									     
									     i=i+dado1;
									     
									     dado1=0;
									     
										     
										    srand (time(NULL));
										     
											control1=1+rand()%((3+1)-1);
										     
										 //Sección de seleción de categoría contestar respuestas    
									     
									    switch (control1){
										
										
										case 1: preguntas_matematicas();
										
										
											if (respuestacorrecta=1){
												
												puntosjugador1=puntosjugador1+8;
												
												respuestacorrecta=0;
												
												control1=0;
												
												turno=0;
											}
															
											else {
											
											if (robopuntos=1) {
												
												puntosjugador2=puntosjugador2+8;
												
												
												robapuntos=0;
												
												control1=0;
												
												turno=0;
																}
											
											
											}
										
										
										
											break;
										
										
										case 2:	 preguntas_historia();
										
										
											
											if (respuestacorrecta=1){
												
													puntosjugador1= puntosjugador1+6;
												
												 	respuestacorrecta=0;
												 	
												 	control1=0;
												 	
												 	turno=0;
												 	
												}
															
											else {
											
												if (robopuntos=1) {
												
													puntosjugador2=puntosjugador2+6;
												
												
													robapuntos=0;
													
													control1=0;
													
													
													turno=0;
													
												}
													}
			
											
											
											
											break;	
											
											
										case 3:	 preguntas_artes ();
										
										
											
											if (respuestacorrecta=1){
												
												puntosjugador1= puntosjugador1+4;
												
												respuestacorrecta=0;
												
												control1=0;
												
												turno=0;
												
												
											}
											
															
											else {
											
											if (robopuntos=1) {
												
												puntosjugador2=puntosjugador2+4;
												
											
												
												robapuntos=0;
												
												control1=0;
												
												turno=0;
												
												
												}
											}
											
				
												break;
										
										
									
										
										
									         }
									
								break;
							
								
								
								case 0: 
								
								     //Inicialización de datos de jugador siguiente
								     
									 	control1=0;
									 	dado2=0;
									 	
									 	printf ("\n\n\n  Es el turno del jugador 2 \n\n\n");		
									
									
											srand (time(NULL));
											dado2=1+rand()%((6+1)-1);
									
									     
										 printf ("\n\n\n  Jugador 2, avanza: %i",dado2); 
									     
									     
									     i=i+dado2;
									 	
									 	   srand (time(NULL));
										     
									  	   control1=1+rand()%((3+1)-1);
										 
										 //Sección para obtener categoría y contestar preguntas  
										 
										 switch (control1) {
										 	
										 	
										 	case 1: preguntas_matematicas();
										
										
											if (respuestacorrecta=1){
												
												puntosjugador2=puntosjugador2+8;
												
												respuestacorrecta=0;
												
												control1=0;
												
												turno=1;
											}
															
											else {
											
											if (robopuntos=1) {
												
												puntosjugador1=puntosjugador1+8;
												
												
												robapuntos=0;
												
												control1=0;
												
												turno=1;
																}
											
											
											}
										 		
										 							 		
										 		
										 		break;
										 		
										 		
										 		
										 		
										 		
										 		
										 		
										 	case 2: preguntas_historia();
										
										
											
											if (respuestacorrecta=1){
												
													puntosjugador2= puntosjugador2+6;
												
												 	respuestacorrecta=0;
												 	
												 	control1=0;
												 	
												 	turno=1;
												}
															
											else {
											
												if (robopuntos=1) {
												
													puntosjugador1=puntosjugador1+6;
												
												
													robapuntos=0;
													
													
													control1=0;
													
													turno=1;
												}
													}
			
										 		
										 		
										 		
											 
											 	break;
											 	
											case 3: preguntas_artes ();
										
										
											
											if (respuestacorrecta=1){
												
												puntosjugador2= puntosjugador2+4;
												
												respuestacorrecta=0;
												
												control1=0;
												
												turno=1;
											}
											
															
											else {
											
											if (robopuntos=1) {
												
												puntosjugador1=puntosjugador1+4;
												
											
												
												robapuntos=0;
												
												control1=0;
												
												turno=1;
												
												}
											}
											
												
												
												
												
												
											
											 	break;
										 	
										 	
										 	
										 	
										 	
										 	
										 }
										 
								 
								 break;
								 
								
								
								
								
								
								
								
								
								
								
								
								
								
								
								
							}     
							     
						    
						
							//Jugador siguiente	
								
								control1=0;
								dado1=0;
							
								printf ("\n\n\n  Es el turno del jugador 1 \n\n\n");		
							
							
									srand (time(NULL));
									dado1=1+rand()%((6+1)-1);
							
							     
								 printf ("\n\n\n  Jugador 1, avanza: %i",dado1); 
							     
							     
							     i=i+dado1;
							     
							     dado1=0;
							     
								     
								    srand (time(NULL));
								     
									control1=1+rand()%((3+1)-1);
								     
								     
							     
							    switch (control1){
								
								
								case 1: preguntas_matematicas();
								
								
									if (respuestacorrecta=1){
										
										puntosjugador1=puntosjugador1+8;
										
										respuestacorrecta=0;
										
										control1=0;
										
										turno=0;
									}
													
									else {
									
									if (robopuntos=1) {
										
										puntosjugador2=puntosjugador2+8;
										
										
										robapuntos=0;
										
										control1=0;
										
										turno=0;
														}
									
									
									}
								
								
								
									break;
								
								
								case 2:	 preguntas_historia();
								
								
									
									if (respuestacorrecta=1){
										
											puntosjugador1= puntosjugador1+6;
										
										 	respuestacorrecta=0;
										 	
										 	control1=0;
										 	
										 	turno=0;
										 	
										}
													
									else {
									
										if (robopuntos=1) {
										
											puntosjugador2=puntosjugador2+6;
										
										
											robapuntos=0;
											
											control1=0;
											
											
											turno=0;
											
										}
											}
	
									
									
									
									break;	
									
									
								case 3:	 preguntas_artes ();
								
								
									
									if (respuestacorrecta=1){
										
										puntosjugador1= puntosjugador1+4;
										
										respuestacorrecta=0;
										
										control1=0;
										
										turno=0;
										
										
									}
									
													
									else {
									
									if (robopuntos=1) {
										
										puntosjugador2=puntosjugador2+4;
										
									
										
										robapuntos=0;
										
										control1=0;
										
										turno=0;
										
										
										}
									}
									
		
										break;
								
								
							
								
								
							         }
							
							
							
								
								
								
								
								
							}     
							
								
								
						//Control del ciclo 
							     
							     
						while (i<=42 && ignorancia<42);
						
							     
							     
							     
							
					    }
						
						
						//RESULTADOS DEL JUEGO, FIN.
						
						
						printf("\n\n\nJuego Terminado \n\n\n Resultados ");
						
						printf ("\n\nPuntos jugador 1: %i",puntosjugador1);
						
						printf ("\n\nPuntos jugador 2: %i",puntosjugador2);
						
						
						if (puntosjugador1>puntosjugador2){
							
							
							printf("\n\n\nFELICIDADES JUGADOR 1, USTED HA GANADO!");
							
						}
						
						else {
							
							printf("\n\n\nFELICIDADES JUGADOR 2, USTED HA GANADO!");
							
						}		
					
		
				break;
						
					
					
					
						
						
						
						
						
						
		// IMPORTANTE. Esta sección entera corresponde a el juego sólo para 3 jugadores 				
				
		case 3: 
				
	
	

			srand(time(NULL)); //funcioon para dado
			while(1){
				
			
				for(b=0;b<3;b++){ //ciclo para los turnos
					
					dado=rand()%15; //dado para elegir entre 15 preguntas al azar
				
				for(a=0;a<3;a++){ // ciclo para oportunidades de responder
					system("cls");
					printf("\n\n\t\t Turno del jugador %d", ((a+b)%3)+1);
					puntos=preguntas(&respuesta, dado); //se ejecutan las preguntas
					if (respuesta==1){
					printf("\n\n\t\t Puntos para el jugador %d",((a+b)%3)+1 );
					jugador[(b+a)%3]=jugador[(b+a)%3]+puntos;
					getch();
					break;
					}
					if(jugador[(b+a)%3]>=42){ //Condicion para ganar
						printf("\n\n\t\t Gana el jugador %d",((a+b)%3)+1);
						return 0;
					}
					if(a==2){
						printf("\n\n\t\t puntos  para la ignorancia");
						ignorancia=ignorancia+puntos;
						if(ignorancia >=42) { //Condicion para que gane la ignorancia
							printf("\n\n\t\t Gana la ignorancia, Todos pierden");
							return 0;
						}
						getch();
					}
					}
				}
				for(b=0;b<3;b++){
					printf("\n\t \t jugador %d en casilla %d", b+1, jugador[b]);
				}
				printf("\n\t\t Ignorancia en casilla %d", ignorancia);
				getch();
			}
			
				
		
			
				break;
	
					
						
					
						
									
						
					}
					
					
					
					
				//Indicación que ha terminado bien el programa.	
				
				//FIN.
					
				return 0;
					
					
					
					
					} 
					
					
					
					
		
						
						
						




