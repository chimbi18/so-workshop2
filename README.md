# so-workshop2
# Taller #2
 Universidad ICESI  
 **Curso:** Sistemas Operativos  
-**Docente:** Daniel Barragán C.  
+**Estudiante:** Victor Andrés Calambás Hurtado
 **Tema:** syscalls
 
 ## Descripcion:  
Las llamadas al sistema realizadas fueron open, write, close 
 ### *open* 
 Abre un archivo que debe existir. 
 Tiene una estrutura que recibe el nombre del archivo, una constante que puede ser para dar permisos o modos de lectura, escritura, ambos,  o mostrar un error sí ya existe el archivo, y un descriptor del archivo. Varias de las constantes que pueden ser usadas son mostradas a continuación:
O_RDONLY	 	 	 	 	 	abre en modo lectura
O_WRONLY	 	 	 	 	 	abre en modo escritura
O_RDWR	 	 	 	 	 	abre en modo lectura-escritura
O_APPEND	 	 	 	 	 	abre en modo apéndice (escritura desde el final)
O_CREAT	 	 	 	 	 	crea el archivo y lo abre (Si existia lo sobreescribe)
O_EXCL	 	 	 	 	 	usado con O_CREAT. Si el archivo existe, se regresa un error
O_TRUNC
 
 Hay una validacion para que retonrne un valor -1 sí existe algun error en el proceso
   
 ### *write *  
 La función rename se encarga de escribir en el archivo una cadena que esta guardada en una variable y que en el ejemplo dice saludes de chimbi. La funcion  write recibe 3 parametro sí se pudo abrir el archivo, el nombre de la variable que contiene el texto a escribir y el tamaño del texto de la cadena
   
 
 ### *close* 
 Esta funcion cierra la escritura sobre un archivo, es muy parecido al close utilizado para cerrar los buffer en memoria para que no gaste recursos de memoria el archivo estando abierto esperando algún otro proceso
