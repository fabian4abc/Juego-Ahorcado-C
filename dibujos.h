void TituloJuego()
{
    printf("\n                               JUEGO DEL AHORCADO");
    printf("\n                               ==================");
}
void SinAhorcado()
{
    printf("\n===============|");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n=======");
}
void Cabeza()
{
    printf("\n===============|");
    printf("\n   |           --");
    printf("\n   |          /  \\");
    printf("\n   |          \\__/");
    printf("\n   |           ||");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n=======");
}
void Tronco()
{
    printf("\n===============|");
    printf("\n   |           --");
    printf("\n   |          /  \\");
    printf("\n   |          \\__/");
    printf("\n   |           ||");
    printf("\n   |        ___||___");
    printf("\n   |       |        | ");
    printf("\n   |        \\      /");
    printf("\n   |         \\    / ");
    printf("\n   |          |  |  ");
    printf("\n   |         /    \\ ");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n=======");
}
void BrazoIzquierdo()
{
    printf("\n===============|");
    printf("\n   |           --");
    printf("\n   |          /  \\");
    printf("\n   |          \\__/");
    printf("\n   |           ||");
    printf("\n   |        ___||___");
    printf("\n   |      ||        |");
    printf("\n   |      ||\\      /");
    printf("\n   |      || \\    / ");
    printf("\n   |      ||  |  |  ");
    printf("\n   |      || /    \\ ");
    printf("\n   |      --        ");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n=======");
}
void BrazoDerecho()
{
    printf("\n===============|");
    printf("\n   |           --");
    printf("\n   |          /  \\");
    printf("\n   |          \\__/");
    printf("\n   |           ||");
    printf("\n   |        ___||___");
    printf("\n   |      ||        ||");
    printf("\n   |      ||\\      /||");
    printf("\n   |      || \\    / ||");
    printf("\n   |      ||  |  |  ||");
    printf("\n   |      || /    \\ ||");
    printf("\n   |      --        --");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n   |");
    printf("\n=======");
}
void PiernaIzquierda()
{
    printf("\n===============|");
    printf("\n   |           --");
    printf("\n   |          /  \\");
    printf("\n   |          \\__/");
    printf("\n   |           ||");
    printf("\n   |        ___||___");
    printf("\n   |      ||        ||");
    printf("\n   |      ||\\      /||");
    printf("\n   |      || \\    / ||");
    printf("\n   |      ||  |  |  ||");
    printf("\n   |      || /    \\ ||");
    printf("\n   |      -- |      --");
    printf("\n   |         | |");
    printf("\n   |         | |");
    printf("\n   |         | |");
    printf("\n   |         | |");
    printf("\n   |        === ");
    printf("\n   |");
    printf("\n=======");
}
void PiernaDerecha()
{
    printf("\n===============|");
    printf("\n   |           --");
    printf("\n   |          /  \\");
    printf("\n   |          \\__/");
    printf("\n   |           ||");
    printf("\n   |        ___||___");
    printf("\n   |      ||        ||");
    printf("\n   |      ||\\      /||");
    printf("\n   |      || \\    / ||");
    printf("\n   |      ||  |  |  ||");
    printf("\n   |      || /    \\ ||");
    printf("\n   |      -- |    | --");
    printf("\n   |         | || |");
    printf("\n   |         | || |");
    printf("\n   |         | || |");
    printf("\n   |         | || |");
    printf("\n   |        ===  ===");
    printf("\n   |");
    printf("\n=======");
}
void MensajeGanaste()
{
    printf("\n");
    printf("\n              XXXXX XXXXX X   X XXXXX XXXXX XXXXX XXXXX  X  X  X ");
    printf("\n              X     X   X XX  X X   X X       X   X      X  X  X ");
    printf("\n              X  XX XXXXX X X X XXXXX XXXXX   X   XXX    X  X  X ");
    printf("\n              X   X X   X X  XX X   X     X   X   X              ");
    printf("\n              XXXXX X   X X   X X   X XXXXX   X   XXXXX  X  X  X ");
}
void MensajePerdiste()
{
    printf("\n");
    printf("\n           XXXXX XXXXX XXXXX XXXX  XXXXX  XXXX XXXXX XXXXX  X  X  X ");
    printf("\n           X   X X     X   X X   X   X   X       X   X      X  X  X ");
    printf("\n           XXXXX XXX   XXXX  X   X   X   XXXXX   X   XXX    X  X  X ");
    printf("\n           X     X     X XX  X   X   X       X   X   X              ");
    printf("\n           X     XXXXX X   X XXXX  XXXXX XXXX    X   XXXXX  X  X  X ");
}
void LimpiaPantalla()
{
    system("clear||cls");
}
//Aqui se asignan las 20 palabras para jugar. De entrada se usan las variables 'palabra1' hasta la 'palabra20' y a cada una se le asigna una palabra especifica
void AsignarPalabras(char palabra1[15],char palabra2[15],char palabra3[15],char palabra4[15],char palabra5[15],char palabra6[15],char palabra7[15],char palabra8[15],char palabra9[15],char palabra10[15], char palabra11[15],char palabra12[15],char palabra13[15],char palabra14[15],char palabra15[15],char palabra16[15],char palabra17[15],char palabra18[15],char palabra19[15],char palabra20[15])
{
    strcpy(palabra1, "elefante");
    strcpy(palabra2, "tornillo");
    strcpy(palabra3, "lampara");
    strcpy(palabra4, "ventilador");
    strcpy(palabra5, "aspiradora");
    strcpy(palabra6, "guitarra");
    strcpy(palabra7, "botella");
    strcpy(palabra8, "procesador");
    strcpy(palabra9, "teclado");
    strcpy(palabra10, "termonuclear");
    strcpy(palabra11, "camioneta");
    strcpy(palabra12, "antena");
    strcpy(palabra13, "pajaro");
    strcpy(palabra14, "ventana");
    strcpy(palabra15, "enfermedad");
    strcpy(palabra16, "arqueologico");
    strcpy(palabra17, "pinguino");
    strcpy(palabra18, "conejo");
    strcpy(palabra19, "pantufla");
    strcpy(palabra20, "pantalla");
}
//se escoge la palabra a utilizar y de entrada se usan 'SelectorPalabra', 'palabraEnCurso' y desde la 'palabra1' hasta la 'palabra20'. Se guarda la palabra a utilizar en la variable 'palabraEnCurso'
void EscogerPalabra(int SelectorPalabra, char palabraEnCurso[15], char palabra1[15],char palabra2[15],char palabra3[15],char palabra4[15],char palabra5[15],char palabra6[15],char palabra7[15],char palabra8[15],char palabra9[15],char palabra10[15], char palabra11[15],char palabra12[15],char palabra13[15],char palabra14[15],char palabra15[15],char palabra16[15],char palabra17[15],char palabra18[15],char palabra19[15],char palabra20[15])
{
    if (SelectorPalabra==1){
        strcpy(palabraEnCurso, palabra1);
    }
    if (SelectorPalabra==2){
        strcpy(palabraEnCurso, palabra2);
    }
    if (SelectorPalabra==3){
        strcpy(palabraEnCurso, palabra3);
    }
    if (SelectorPalabra==4){
        strcpy(palabraEnCurso, palabra4);
    }
    if (SelectorPalabra==5){
        strcpy(palabraEnCurso, palabra5);
    }
    if (SelectorPalabra==6){
        strcpy(palabraEnCurso, palabra6);
    }
    if (SelectorPalabra==7){
        strcpy(palabraEnCurso, palabra7);
    }
    if (SelectorPalabra==8){
        strcpy(palabraEnCurso, palabra8);
    }
    if (SelectorPalabra==9){
        strcpy(palabraEnCurso, palabra9);
    }
    if (SelectorPalabra==10){
        strcpy(palabraEnCurso, palabra10);
    }
    if (SelectorPalabra==11){
        strcpy(palabraEnCurso, palabra11);
    }
    if (SelectorPalabra==12){
        strcpy(palabraEnCurso, palabra12);
    }
    if (SelectorPalabra==13){
        strcpy(palabraEnCurso, palabra13);
    }
    if (SelectorPalabra==14){
        strcpy(palabraEnCurso, palabra14);
    }
    if (SelectorPalabra==15){
        strcpy(palabraEnCurso, palabra15);
    }
    if (SelectorPalabra==16){
        strcpy(palabraEnCurso, palabra16);
    }
    if (SelectorPalabra==17){
        strcpy(palabraEnCurso, palabra17);
    }
    if (SelectorPalabra==18){
        strcpy(palabraEnCurso, palabra18);
    }
    if (SelectorPalabra==19){
        strcpy(palabraEnCurso, palabra19);
    }
    if (SelectorPalabra==20){
        strcpy(palabraEnCurso, palabra20);
    }
}
//validamos el caracter usando de entrada las variables 'L', 'LetrasUsadas', 'x' y 'val'. Luego se imprime en pantalla un mensaje si detecta que la letra ya se utilizo o si no es un caracter valido
void ValidacionCaracter(int L, char LetrasUsadas[20], char x[10],int val){
    char LetrasPermitidas [200] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',129,130,131,132,133,134,136,137,138,139,140,141,142,143,144,147,148,149,150,151,152,153,154,160,161,162,163,164,165,181,182,183,198,199,210,224,226,227,228,229,233,234,235,236,237,211,212,214,215,216};
    int valletra;
    val=0;
    while (val==0){
        valletra=1;
        int j=0;
        scanf(" %s", x);
        if (x[0]== -125 || x[0]== -124 || x[0]== -123 || x[0]== -122 || x[0]== -114 || x[0]== -113 || x[0]== -96 || x[0]== -75 || x[0]== -74 || x[0]== -73 || x[0]== -58 || x[0]== -57){
            x[0]=97;
        }
        if (x[0]== -126 || x[0]== -120 || x[0]== -119 || x[0]== -118 || x[0]== -112 || x[0]== -46 || x[0]== -45 || x[0]== -44){
            x[0]=101;
        }
        if (x[0]== -117 || x[0]== -116 || x[0]== -115 || x[0]== -95 || x[0]== -42 || x[0]== -41 || x[0]== -40){
            x[0]=105;
        }
        if (x[0]== -109 || x[0]== -108 || x[0]== -107 || x[0]== -103 || x[0]== -32 || x[0]== -30 || x[0]== -29 || x[0]== -28 || x[0]== -27 || x[0]== -94){
            x[0]=111;
        }
        if (x[0]== -127 || x[0]== -106 || x[0]== -105 || x[0]== -102 || x[0]== -93 || x[0]== -23 || x[0]== -22 || x[0]== -21){
            x[0]=117;
        }
        if (x[0]== -104 || x[0]== -20 || x[0]== -19){
            x[0]=121;
        }
        while (j<20){
            if (LetrasUsadas[j]==x[0]){
                printf("Esta letra ya se utiliz%c\n",162);
                j=201;
                valletra=0;
            }
            j++;
        }
        j=0;
        while (j<=200 && valletra==1){
            if (LetrasPermitidas[j]==x[0]){
                val=1;
                j=201;
                LetrasUsadas[L]=x[0];
            }
            j++;
        }
        if (val==0 && valletra==1){
            printf("Car%ccter ingresado no v%clido\n",160,160);
        }
    }
}


