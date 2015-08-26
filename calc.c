//Includo le librerie
#include <stdio.h>
#include <stdlib.h> 
 // questa ultima include è inutile, la leviamo ;)
 
 
//inizializzo le funzioni

int main(int argc, char *argv[]) // la roba dentro il main sai cosa vuole dire? se non lo sai meglio non usarla
{                                // si usano solo le cose che si conoscono. int argc e char *argv[] sono cose complesse
        int a, b, c, scelta;     // fino a quando non le impari non c'è bisogno di dichiararle
        printf("###############\n");
        printf("## 1 # 2 # 3 ##\n");
        printf("###############\n");
        printf("## 4 # 5 # 6 ##\n");
        printf("###############\n");
        printf("## 7 # 8 # 9 ##\n");
        printf("###############\n");
        printf("#######0#######\n");
        printf("     #####\n\n");
        printf("\n\nScegli il primo numero\n\n");
        scanf("%d", &a);
        printf("\n\nScegli il secondo numero\n\n");
        scanf("%d", &b);
        printf("\nScegli quale operazione eseguire :\n\n");
        printf("1. Addizione\n\n2. Sottrazione\n\n3. Moltiplicazione\n\n4. Divisione\n\n");
        scanf("%d", &scelta);
        
         /* partiamo da qua :) */  // errore! if non si scrive cosi!cioè? non con la (?
        if ( scelta == 1){
        
            printf("\n\n%d\n\n", a + b); // certo :) proseguiamo
        
        }                       
        else if ( scelta == 2){
        
            printf("\n\n%d\n\n", a - b);
        
            }
        else if ( scelta == 3){
        
            printf("\n\n%b\n\n", a * b);
        
            }
        else if ( scelta == 4){
             
            printf("\n\n%d\n\n", a / b);  
            
            }
            
        else {
            
            printf("sei proprio un panzone!");
            
            }

           return 0; 
           
} // <----------------- qui finisce il main



