
#include <fcntl.h>      /* Modos de apertura y función open()*/
#include <stdlib.h>     /* Funciones write() y close() */

main ( int argc, char* argv[] )
{
   /* cad que se va a escribir */
   const char* cad = "saludes de chimbi";

   /* Creación y apertura del archivo */
   int archivoConMensaje = open ("chimbi_file", O_CREAT|O_WRONLY,0644);

   /* Comprobación de errores */
   if (archivoConMensaje==-1)
   {
        perror("Error al abrir archivo:");
        exit(1);
   }

   /* Escritura de cad */
   write(archivoConMensaje, cad, strlen(cad));
   close(archivoConMensaje);
   return 0;

}
