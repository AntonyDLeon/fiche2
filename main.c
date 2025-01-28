//code qui ce fait executer
#include <stdio.h>
#include "message.h"
#include "calcul.h"

int main(){
    afficherMessage();

    int a = 10, b = 5 ;

    printf("eh gros la somme de %d et %d est: %d\n", a,b, addition(a, b));

    printf("ben la différence de %d et %d est: %d\n", a,b, soustraction(a, b));
}