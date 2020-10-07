#include "battleship.h"

int main(int argc, char *argv[]){
    grid g1;
    grid g2;

    if(argc != 3){
        fprintf(stderr,"¡Programa debe recibir dos parámetros! El nombre del archivo de inicialización y el nombre del archivo de disparos");
        exit(1);    
    }

    load_init_file(argv[1],&g1,&g2);
    printf("\nUbicacion de barcos JUGADOR 1:\n");
    show_my_grid(g1);
    printf("Ubicacion de barcos JUGADOR 2:\n");
    show_my_grid(g2);
    printf("\n\n*************************************\nComienza el Juego!!\n*************************************\n");
    load_shoot_file(argv[2],&g1,&g2);
    return 0;
}
