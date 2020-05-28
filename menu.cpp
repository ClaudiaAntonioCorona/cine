#include <math.h>
#include <stdio.h>

int main()
{
    int n, opcion;

    do
    {
    	printf("\t\t *** *********** *** \n");
    	printf("\t\t *** BIENVENIDOS *** \n");
    	printf("\t\t *** *********** *** \n");
        printf( "\n   1. Cartelera");
        printf( "\n   2. Proximos estrenos" );
        printf( "\n   3. Salas disponibles");
        printf( "\n   4. Preventas");
        printf( "\n   5. Pagar");
        printf( "\n   6. Cliente VIP");
        printf( "\n   7. Dulceria");
        printf( "\n   8. Ofertas");
        printf( "\n   9. Boletos");
        printf( "\n   10. iniciar sesion");
        printf( "\n   11. Salir." );
        printf( "\n\n   Introduzca opcion (1-11): ");

        scanf( "%d", &opcion );

        /* Inicio del anidamiento */

        switch ( opcion )
        {
            case 1:  printf("\n Sonic");
                   printf( "\n Hombre arana\n");
                    break;

            case 2: printf( "\n El conjuro\n");
                    break;

            case 3: printf( "  sala 3D\n");
                    
                    break;
              case 4: printf( " El conjuro\n");
                    break;
              case 5: printf( " En efectivo\n");
                      printf( " con tarjeta\n");
                    break;
              case 6: printf( " bienvenido\n");
              
                    break;  
            case 7: printf( " palomitas\n");
                    printf( " bebidas\n");
                    printf( " golosinas\n");
                    break;  
			case 8: printf( " combos\n");
                    printf( " boletos 2*1\n");
                    break;  
			case 9: printf( " generar boleto\n");
              
                    break;  
			case 10: printf( " ingresa tu usuario\n");
              
                    break;  						        
					      
        
         }

         /* Fin del anidamiento */

    } while ( opcion != 11 );

    return 0;
}
