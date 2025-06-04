Para compilar de manera adecuada dicho laboratorio se deben de incluir las librerias necesarias, siendo la que más destaca para este caso la inclusión de cJSON.h
Por lo que es necesario tanto instalar las devidas expansiones para este como tener los archivos cJSON.h y cJSON.c en la misma carpeta que el archivo main.c,
en este caso lab5.c. Además se debe de instalar las funciones de make y meson en la terminal de la maquina.

Compilacion normal:
Este metodo de compilación es el estandar ya visto en el resto del curso. Este se ejecuta en una terminal abierta en el archivo ".c", en esta terminal se guardan los
cambios con: "gcc -wall Lab5.c -o Lab5", y luego se compila con: "./Lab5".

Con cmake:
Para compilar utilizando cmake primero se debe de abrir la terminal de la maquina y dirigirse a la carpeta donde se encuentran tanto el archivo ".c" y el archivo
"CmakeLists.txt", una vez ubicado en ese directorio se ejecuta el comando "make" el cual crea un ejecutable el cual se debe de compilar con el comando:"./build/lab5".

Con meson:
Primero se accede a la teriminal de la maquina y se debe de asegurar que se encuentra en el mismo directorio que el archivo ".c" luego se ejecuta el comando "meson setup
builddir", luego se compila con el comando: "meson compile -c builddir" y por ultimo se ejecuta con el comando: "./builddir/lab5".
