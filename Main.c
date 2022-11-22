#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

   int i, diff;

   srand(time(NULL));

    printf("\t---Game Random---");
    printf("\nVence aquele que obtiver todos os números iguais");
    printf("\n\nDIFICULDADES:\n\n2 = Muito Fácil\n3 = Fácil ");
    printf("\n4 = Médio\n5 = Difícil\n6 = Muito Difícil\n7 = Insano");

    printf("\n\nDigite um valor\n");
    printf("-> ");
    scanf("%d", &diff);

   for(i = 1; i<=diff;i++)
        printf("%d ", rand()%2);
   printf("\n\n");
   return 0;
}