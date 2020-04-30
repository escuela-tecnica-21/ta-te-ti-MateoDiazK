#include <stdio.h>
#include <stdlib.h>

int turno=1, tablero[3][3];

int main()
{
    defender();
    return 0;
}

int defender(){
    int y=0, x=0, contador=0;
    for(y=0;y<2;y++){ /// Columnas
        for(x=0;x<2;x++){
            if(tablero[x][y] = 1){
                contador++;
            }
            if(contador = 2){
                if(tablero[x+1][y] = 0){
                tablero[x+1][y] = 2}
            }
            else{
                contador = 0;
            }
        }
    }
    for(y=0;y<2;y++){ /// Filas
        for(x=0;x<2;x++){
            if(tablero[y][x] = 1){
                contador++;
            }
            if(contador = 2){
               if(tablero[y][x+1] = 0){
                tablero[y][x+1] = 2}
                return;
            }
            else{
                contador = 0;
            }
        }
    }
    for(y=0;y<2;y++){ /// Diagonal 1
        if(tablero[y][y] = 1){
                contador++;
            }
            if(contador = 2){
                if(tablero[y+1][y+1] = 0){
                tablero[y+1][y+1] = 2}
                return;
            }
            else{
                contador = 0;
            }
    }
    for(y=2;y>0;y=y-1){ /// Diagonal 2
        if(tablero[y][y] = 1){
                contador++;
            }
            if(contador = 2){
                if(tablero[y-1][y-1] = 0){
                tablero[y-1][y-1] = 2}
                return;
            }
            else{
                contador = 0;
            }
        atacar();
    }
}

int atacar(){
    int y=0, x=0, contadorat=0;
    for(y=0;y<2;y++){ /// Columnas
        for(x=0;x<2;x++){
            if(tablero[x][y] = 2){
                contadorat++;
            }
            if(contadorat = 2){
                if(tablero[x+1][y] = 0){
                tablero[x+1][y] = 2}
            }
            else{
                contadorat = 0;
            }
        }
    }
    for(y=0;y<2;y++){ /// Filas
        for(x=0;x<2;x++){
            if(tablero[y][x] = 2){
                contadorat++;
            }
            if(contadorat = 2){
               if(tablero[y][x+1] = 0){
                tablero[y][x+1] = 2}
                return;
            }
            else{
                contadorat = 0;
            }
        }
    }
    for(y=0;y<2;y++){ /// Diagonal 1
        if(tablero[y][y] = 2){
                contadorat++;
            }
            if(contadorat = 2){
                if(tablero[y+1][y+1] = 0){
                tablero[y+1][y+1] = 2}
                return;
            }
            else{
                contadorat = 0;
            }
    }
    for(y=2;y>0;y=y-1){ /// Diagonal 2
        if(tablero[y][y] = 1){
                contadorat++;
            }
            if(contadorat = 2){
                if(tablero[y-1][y-1] = 0){
                tablero[y-1][y-1] = 2}
                return;
            }
            else{
                contadorat = 0;
            }
    }
}
