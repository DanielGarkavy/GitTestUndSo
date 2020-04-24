#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//simples Testprogramm fuer GitHub/GitLab: Ich Teste die Versionierung, indem ich kleine Changes branche
//Aufgabe 1.: Version 1.0 erstellen und files adden
//Aufgabe 2.: Local Repo Commiten
//Aufgabe 3.: Remote Repo Push
//Aufgabe 4.: Branch erstellen

int main(){
    int y, x, i;
        x = 0;
        y = 1;

    printf("Even/Odd Test: Beliebige Taste druecken\n");
    getchar();

    while(x < 5){

        x = x + 1;
        y = y * y + x;

            printf("Loop %d:    Integer Y ist = %d:", x, y);
                if(y % 2 == 0)
                    printf("    Gerade\n");
                else
                    printf("    Ungerade\n");


            sleep(1);
    }
    printf("\n2.Even/Odd Test: Bitte ganze Zahl eingeben: ");
        scanf("%d", &i);
        sleep(1);
        if(i % 2 == 0)
            printf("\n%d ist Gerade mein Bro", i);
        else
            printf("\n%d ist Ungerade und Haram", i);



    return 0;
}
