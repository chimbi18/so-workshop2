#include <string.h>     /* Función strlen() */
#include <fcntl.h>      /* Modos de apertura y función open()*/
#nclude <string.h>     /* Función strlen() */
#include <fcntl.h>      /* Modos de apertura y función open()*/
#include <stdlib.h>     /* Funciones write() y close() */

main ( int argc, char* argv[] )
{
   /* Cadena que se va a escribir */
   const char* cadena = "saludes de chimbi";

   /* Creación y apertura del archivo */
   int archivoConMensaje = open ("chimbi_file", O_CREAT|O_WRONLY,0644);

   /* Comprobación de errores */
   if (archivoConMensaje==-1)
   {
        perror("Error al abrir archivo:");
        exit(1);
   }

   /* Escritura de la cadena */
   write(archivoConMensaje, cadena, strlen(cadena));
   close(archivoConMensaje);
   return 0;

}
include <stdlib.h>     /* Funciones write() y close() */

main ( int argc, char* argv[] )
{
   /* Cadena que se va a escribir */
   const char* cadena = "saludes de chimbi";

   /* Creación y apertura del archivo */
   int archivoConMensaje = open ("chimbi_file", O_CREAT|O_WRONLY,0644);

   /* Comprobación de errores */
   if (archivoConMensaje==-1)
   {
        perror("Error al abrir archivo:");
        exit(1);
   }

   /* Escritura de la cadena */
   write(archivoConMensaje, cadena, strlen(cadena));
   close(archivoConMensaje);
   return 0;

}

