![139-1390846_vectores-lineas-png-vectores-de-lineas-decorativas-png](https://user-images.githubusercontent.com/24234655/126848887-2d5dce28-b4bb-4a1b-a770-fc7bde90420b.png)



:bookmark_tabs:UNIVERSIDAD TÉCNICA LUIS VARGAS TORRES:bookmark_tabs:
## PROYECTO FINAL C2-2 CLASES Y OBJETOS
![descarga](https://user-images.githubusercontent.com/24234655/126833446-c6c74b31-1160-46fc-b7bf-03aaecdaf09c.png)


:low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness:
# Integrantes:

| NOMBRES | DESCRIPCIÓN DE SU PARTICIPACIÓN  |
| ------------ | ------------ |
| Lexer Preciado Tello  | -PARTICIPANTE1: Antes que nada lo primero que hice fue crear el archivo principal, que contiene el menu para elegir las distintas opciones haciendo uso de las demas clases en la primera función se ingresan y se muestran los datos, aquí primordialmente se debe crear la clase privada llamada Persona que almacenará variables privadas y son privadas porque principalmente se almacenaran los datos personales que serán llamados para ser usadas después. luego sigue con el la implementación  del void y después se solicita el ingreso de los datos de la persona a través del uso de couts, después de que los datos hayan sido ingresados serán mostrados por pantalla.|
|  Lexer Preciado Tello | -PARTICIPACIÓN2. en esta función se va a calcular la edad, esta función llamara a las variables privadas necesarias que fueron declaradas anteriormente para calcular la edad, usando una estructura condicional que nos permitirá comprara las variables para calcular la edad de las personas y al final se mostrar a través de una función que solicitará returnar el valor de la edad que ha sido calculada.  |
| Alisson Lucas Angulo  | -PARTICIPACIÓN3 Como participante tres procedí a realizar el proceso de este programa para que nos permita calcular el índice de masa corporal de una persona tomando como datos de entrada el peso y la estatura. Se utilizo la sentencia if que nos permitió por el lado verdadero y por el lado falso dar un mensaje con una sugerencia según los resultados que nos arrojen el programa al calcular el índice de masa corporal de una persona  |
| Wendy Robinzon  | -PARTICIPACIÓN4 quiero mencionar que todas las variables que se están usando hasta ahora ya han sido declaradas anteriormente en la función principal, de cualquier modo se cierra con llave y en las siguientes lineas de codigo se procede a guardar cada uno de los datos almacenados en las variables antes declaradas para por ultimo mostrar un mensaje indicando de que todo se guardo  |
| Wendy Robinzon  | -PARTICIPACIÓN5  en esta porción de código se podrá guardar los datos de la persona en un documento txt. entonces agregando el comando ar.open("registro.txt",los::out); hara que el programar habra el registro de los datos, con la sentencia if podremos indicar que en el caso de presentarse ar.fail se mostrara un mensaje indicando FAIL (error)  |

:low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness:

# COMPOSICIÓN DEL PROYECTO

El programa correspondiente a la TAREA C2-2 esta compuesto por 2 archivos, el primero llamado  Principal con extensión .pp y el segundo que es  PARTICIPANTES con extensión .h

**ARCHIVO PRINCIPAL.CPP. **  este archivo contiene la función principal que esta conformada por el int main que a su vez contiene el menu principal del programa, ademas de eso este archivo tambien contiene las librerias de las ue nos apoyaremos y explicaremos su función mas adelante.

**ARCHIVO COLABORADORES.h** este archivo contiene la participacion de cada integrante, en ella se encuentran las funciones que le daran vida al programa. dentro de este archivo encontraremos: La clase privada Persona, la función para ingresar los datos persnales, funcion para mostrar los datos personales ya ingresados, función para calcular la edad de la persona, otra funcion para calcular el indice corporal, una funcion ue guarda en un documento.txt los datos ingresados y una función que nos recupere y muestre los datos ingresados por el usuario.

:low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness:


# DESCRIPCIÓN DEL PROYECTO

El proyeco consta de dos archivos que se complementan dualmete para que el programa pueda compilar correctamente y estos son:

Archivo Principal

![principal archivo](https://user-images.githubusercontent.com/24234655/126837969-c60af0a4-fb09-4258-995c-6ef36de86b84.png)

este archivo contiene la función principal donde se almacena la estructura fundamental del programa que es la que vemos alli



Archivo Participantes

![participantes](https://user-images.githubusercontent.com/24234655/126838277-15e12e7a-d88a-4f7f-8295-c2e10e00858c.png)

y la otra que seria el archivo de participantes que es donde irian las funciones y clases del programa que se le asigno a cada miembro del grupo

:low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness:

***para ahondar un poco mas en el funcionamiento del programa nos iremos directamente a su codigo fuente empezando desde el inicio y que nos ubicariamos en el archivo principal***

# LIBRERIAS

las librerias que usamos son las: #include<iostream> que nos ayudara a poder tener acceso a los dispositivos estándar de entrada y/o salida
libreria #include<fstream> que nos sirve para poder leer desde o escribir en ficheros (lectura/escritura de datos en unidades de almacenamiento permanente
la libreria #include<string.h> que nos ayudara a definir las macros, constantes, funciones y tipos y algunas operaciones de manipulación de memoria.
la libreria #include<malloc.h> para devolver los posibles punteros nulos y la libreria #include<stdlib.h> para hacer gestion de la memoria dinamica.

![librerias](https://user-images.githubusercontent.com/24234655/126841221-5042fac7-714d-487e-b193-413a08325180.png)

# INICIO DEL PROGRAMA

esta parte corresponde al uso e implementacion del using namespace que nos servira para comenzar a crear el bloque de codigo correspondiente , despues de eso abriremos el bloque de codigo con la sentencia int main() para posteriormente pasar a la seccion de declaración de variables ue veremos a continuación

![usingnamespace](https://user-images.githubusercontent.com/24234655/126844750-b1b14b14-e6c6-4660-b394-46c7fa70d484.png)


# DECLARACIÓN DE VARIABLES

en esta sección se hara el proceso de declaración de variables que usaremos a lo largo del programa, los dos tipos de variables ue usaremos aqui son variables enteras y flotantes

![declaracion de variables](https://user-images.githubusercontent.com/24234655/126845003-64e90f5e-644d-4c34-bb88-b664f722b36b.png)


# MENÚ DE INICIO

en esta sección empezamos haciendo uso de la sentencia DO para ue nos permita repetir una instrucción o una instrucción compuesta usando cada uno de los couts donde indicaremos por mensajes en la ventana de comando cada opcion que correspondera eh ira unida a cada función
dentro de la opciones que permitira al usuario interactuar con el programa tenemos:
***cout<<"1.-eliga esta opcion para digitar y mostrar los datos personales \n"; para realizar el ingreso de los datos del usuario***
***cout<<"2.-Aqui se muestra la edad de la persona\n"; para calcular y mostrar la edad de la persona***
***cout<<"3.-Aqui se muestra el indice comporal de la persona\n "; para calcular el indice de masa corporal de una persona y asi saber si tiene sorbepeso***
***cout<<"4.-Guardar documento\n"; para guardar los datos en un document txt***
***cout<<"5.-Recuperar los datos desde el documento y mostrarlos por pantalla \n"; para buscar los datos guardados en el documento y mostrarlo por pantalla***

![menu de opciones](https://user-images.githubusercontent.com/24234655/126846607-bdd1569a-7f3f-4a5d-ba84-f405a7fc71a0.png)

:low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness:

# ARCHIVO PARTICIPANTES / FUNCIONES 

FUNCION 1 DIGITAR Y MOSTRAR DATOS DEL USUARIO

aqui primeramente se crea una clase privada con el nombre Persona para que el programa sea mucho mas seguro tomando en cuenta de se trabajará con datos personales del usuario por lo ue se exige seguridad
a partir de aui se definiran que variables seran privadas, restringido el acceso directo a los datos del usuario 
despues de eso se creara una función publica donde haremos el pedido de ingreso de datos del usuario, como ingreso de numero de cedula, nombres y apellidos, peso, altura y fecha de nacimiento y posterior a esto crearemos un metodo void ue nos ayudara a visualziar los datos ingresados anteriormente 

![primer metodo lexer](https://user-images.githubusercontent.com/24234655/126847558-42086f8b-8573-4190-ade7-a6151f9ea655.png)


FUNCION 2 CALCULAR LA EDAD

aqui llamaremos al metodo void caledad usaremos las avriables ya definidas antyeriormente y que se encuentran en la clase privada en donde se almacenan los datos ingresados por el usuario 
haciendo uso de las deciciones implementando if y else pondremos los datos a comparación y redundancia para dar con el calculo de la edad de la persona para posteriormente mostrar los datos a traves de la linea de comando del cout<<"Su edad es : "<<a<<" Años "<<m<<" MESES "<<d<<" DIAS "<<endl;


![segunda funcion](https://user-images.githubusercontent.com/24234655/126848103-ca8b09a8-8711-4beb-aff6-7e6c389048ef.png)



FUNCION 3 CALCULAR INDICE DE MASA CORPORAL 

aqui se procede a realizar el proceso de este programa para que nos permita calcular el índice de masa corporal de una persona tomando como datos de entrada el peso y la estatura. Se utilizo la sentencia if que nos permitió por el lado verdadero y por el lado falso dar un mensaje con una sugerencia según los resultados que nos arrojen el programa al calcular el índice de masa corporal de una persona.

![masa corporal](https://user-images.githubusercontent.com/24234655/126848339-73d3d8cd-87af-47af-9b18-ac924dbe658c.png)




FUNCION 4 GUARDAR DOCUMENTO TXT


en esta porción de código se podrá guardar los datos de la persona en un documento txt. entonces agregando el comando ar.open("registro.txt",los::out); hara que el programar habra el registro de los datos, con la sentencia if podremos indicar que en el caso de presentarse ar.fail se mostrara un mensaje indicando FAIL (error)
quiero mencionar que todas las variables que se están usando hasta ahora ya han sido declaradas anteriormente en la función principal, de cualquier modo se cierra con llave y en las siguientes lineas de codigo se procede a guardar cada uno de los datos almacenados en las variables antes declaradas para por ultimo mostrar un mensaje indicando de que todo se guardo

![guardar documento](https://user-images.githubusercontent.com/24234655/126848447-d4537193-acc6-4873-b446-5b0b0d95c3c1.png)


FUNCION BUSCAR DOCUMENTO TXT GUARDADO Y MOSTRAR LOS DATOS POR PANTALLA 

en esta parte me toca desarrollar la función que recupere datos desde el documento txt previamente creado y los presente por pantalla,. y bueno estableciendo el void como parámetro de la función podre hacer uso del método de decisión, que bueno en este caso es el if, haciendo eso se especificara que si la decisión elige ar,fail se nos mostrara un cout diciendo que el archivo no abre, después en el caso de que usando while !ar.eof sea elegido se nos mostrara un mensaje con los datos y dará un salto de linea

![MOSTRA](https://user-images.githubusercontent.com/24234655/126848544-0bff5fa3-8099-4682-885c-16c52283c0e7.png)






:low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness:





# INSTALACIÓN DEL PROGRAMA


| paso 1  | ingresar al repositorio y abrir el archivo PRINCIPAL.CPP  |
| ------------ | ------------ |
| paso 2  | una vez estemos dentro nos disponemos a sombrear todo el codigo, cuando ya se encuentre sombreado por completo le daremos clic derecho y elegiremos la opcion copiar   |
| paso 3  | abrimos la interfas del c++ y elegimos la opcion de nuevo proyecto, despues de eso pegaremos el codigo que copiamos  |
| paso 4  |  para guardar el archivo nos dirigiremos a ajustes y elegimos la opcion de guardar como, seleccionamos la ubicacion en el directorio y le colocaremos el nombre al archivo y le daremos a guardar |
| paso 5  | repetimos el mismo proceso con e archivo Participantes.h ue se ncuentra en el github  |


![guardar](https://user-images.githubusercontent.com/24234655/126849918-fa819ed3-5c4f-4321-99f1-eceed9db9e70.png)




:low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness::low_brightness:



# EJECUCIÓN DEL PROGRAMA


para ejecutar el programa abriremos los archivos ue guardamos previamente y le daremos a la opcion de compilar 


![aqui](https://user-images.githubusercontent.com/24234655/126850070-9c564e7b-5e4e-4509-ad15-4188f0bc52e2.png)





una vez le hayamos dado a la opcion de compilar el programa se ejecutara correctamente y el usuario podra hacer uso de el como se nos muestra en la imagen.



![bandicam 2021-07-22 22-15-44-664](https://user-images.githubusercontent.com/24234655/126850133-2551da31-8430-43b5-a383-7e87d657e602.jpg)




# FIN
