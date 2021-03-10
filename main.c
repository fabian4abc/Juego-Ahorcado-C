#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <ctype.h>
#include "dibujos.h"


int main()
{
    int SelectorPalabra = 0;
    int terminar=0, L, k;
    int i, intentos, valida=0, val =0, cont;
    char x[10],palabraEnCurso[15], palabra1[15] , palabra2 [15], palabra3 [15], palabra4 [15], palabra5 [15], palabra6 [15], palabra7 [15], palabra8 [15], palabra9 [15], palabra10 [15], palabra11 [15], palabra12 [15], palabra13 [15], palabra14 [15], palabra15 [15], palabra16 [15], palabra17 [15], palabra18 [15], palabra19 [15], palabra20 [15];
    //Llamamos la funcion para definir las 20 palabras
    AsignarPalabras (palabra1, palabra2, palabra3, palabra4, palabra5, palabra6, palabra7, palabra8, palabra9, palabra10, palabra11, palabra12 ,palabra13 ,palabra14 ,palabra15 ,palabra16 ,palabra17 ,palabra18 ,palabra19 ,palabra20); //Se llama la funcion para asignar palabras

    while (terminar==0){ //Ciclo que permite seguir jugando hasta que el usuario decida parar
        char LetrasUsadas[20]={'_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_',};
        L=0;
        k=0;
        SelectorPalabra++;
        if (SelectorPalabra==21){
            SelectorPalabra=1;
        }
        //Llama la funcion para establecer la palabra secreta
        EscogerPalabra(SelectorPalabra, palabraEnCurso, palabra1, palabra2, palabra3, palabra4, palabra5, palabra6, palabra7, palabra8, palabra9, palabra10, palabra11, palabra12 ,palabra13 ,palabra14 ,palabra15 ,palabra16 ,palabra17 ,palabra18 ,palabra19 ,palabra20);
        int t=strlen(palabraEnCurso); //obtiene el largo del array y lo guarda en 't'
        char palabrausuario[t];
        while (k<t){
            palabrausuario[k]='_';
            k++;
        }
        palabrausuario[k]='\0';
        i=0;
        intentos=0;
        valida=0;
        while(intentos<=6){
            LimpiaPantalla();
            TituloJuego();
            switch(intentos){ //Verifica que parte del colgado imprimir segun las vidas restantes
                case 0:
                    SinAhorcado();
                    break;
                case 1:
                    Cabeza();
                    break;
                case 2:
                    Tronco();
                    break;
                case 3:
                    BrazoIzquierdo();
                    break;
                case 4:
                    BrazoDerecho();
                    break;
                case 5:
                    PiernaIzquierda();
                    break;
                case 6:
                    PiernaDerecha();
                    break;
                default:
                    printf("Error en la variable intentos");
                    break;
            }
            printf("\nLa palabra secreta es: %s", palabrausuario);
            if (intentos<6){
                printf("\nIngrese una letra: ");
                val=0;
                ValidacionCaracter(L,LetrasUsadas,x,val); //Llama la funcion para validar el caracter ingresado
                L++;
                while (val<10){
                    x[val] = tolower(x[val]);
                    val++;
                }
                val=0;
            }
            while(i<t){ //Se hace la comparacion de letra ingresada versus palabra secreta
                if(x[0]==palabraEnCurso[i]){
                    palabrausuario[i]=x[0];
                    valida=1;
                }
                i++;
            }
            i=0;
            if(valida==0){
                intentos++;
            }
            if(valida==1){
                valida=0;
            }
            if (strcmp(palabrausuario, palabraEnCurso)==0){
                LimpiaPantalla();
                MensajeGanaste();
                intentos=8;
                printf("\n\nLa Palabra secreta era: %s\n", palabraEnCurso);
            }
        }
        if (intentos!=8){
            LimpiaPantalla();
            MensajePerdiste();
            printf("\n\nLa Palabra secreta era: %s\n", palabraEnCurso);
        }
        val=0;
        while (val==0){
            printf("\n\nDesea jugar de nuevo?\n1.-Si\n2.-No\n");
            scanf("%d", &terminar);
            switch(terminar){
                case 1:
                    terminar=0;
                    val=1;
                    break;
                case 2:
                    terminar=1;
                    val=1;
                    break;
                default:
                    printf("\n\nCar%ccter ingresado no v%clido",160,160);
                    break;
            }
        }
    }
    system ("pause");
    return 0;
}
