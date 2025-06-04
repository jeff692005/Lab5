//Se incluyen las librerias y tambien cJSON.h
#include <stdio.h>
#include <stdlib.h>
#include "cJSON.h"

int main() {
    //Se Crea el objeto JSON con los datos
    cJSON *persona = cJSON_CreateObject();
    cJSON_AddStringToObject(persona, "nombre", "Jefferson Jiménez Ulloa");
    cJSON_AddNumberToObject(persona, "edad", 19);
    cJSON_AddStringToObject(persona, "carnet", "C34085");
    cJSON_AddBoolToObject(persona, "estudiante activo", 1);

    //Se convierte el objeto JSON a un string
    char *json_str = cJSON_Print(persona);
    if (json_str == NULL) {
        fprintf(stderr, "Error al generar la cadena JSON\n");
        cJSON_Delete(persona);
        return 1;
    }

    //Imprime el string
    printf("%s\n", json_str);

    //Guarda el string en un archivo
    FILE *archivo = fopen("datos.json", "w");
    if (archivo == NULL) {
        fprintf(stderr, "Error al abrir el archivo para escribir\n");
        cJSON_Delete(persona);
        free(json_str);
        return 1;
    }
    fputs(json_str, archivo);
    fclose(archivo);

    //Libera la memoria
    cJSON_Delete(persona);
    free(json_str);

    return 0;
}