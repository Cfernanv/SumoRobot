/*Archivo de configuracion del sumorobot*/


//Pines del sensor ultrasonico
#define trigSensorFrente      2
#define echoSensorFrente      3
#define trigSensorAtras       4
#define echoSensorAtras       5

//Pines del sensor de linea
#define sensorLineaFrente     A0        //Frente derecha 
#define sensorLineaAtras      A1		//Atras izquierda
//Definimos patrones de colores de linea
#define Blanco 		          1         //Valor digital equivalente
#define Negro                 0         //Valor digital equivalente 
//Pines de conexion de puente H para los motores
#define Motor1Derecha        10			//Pin PWM Motor 1 derecha
#define Motor1Izquierda      11     	//Pin PWM Motor 1 izquierda
#define Motor2Derecha 	     12			//Pin PWM Motor 2 derecha
#define Motor2Izquierda      13     	//pin PWM Motor 2 izquierda

//Tiempo de inicio del robot
#define tiempoSeg             5
//Distancia maxima para detectar oponente
#define distanciaMax         140		//Centimetro maximo Ring