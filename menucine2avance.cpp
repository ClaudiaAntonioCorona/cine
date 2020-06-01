#include <math.h>
#include <stdio.h>
#include <string.h>
int main()
{
    int opcion,funcion,precio;
    char usuario[30];
    char sala[20];
    char pelicula[30];
    char clasificacion[20];
    char resp;
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

        

        switch ( opcion )
        {
            case 1:  printf("\n Sonic");
            printf("\n El hombre invisible");
                   printf( "\n Hombre arana");
                   printf("\n Onward\n");
                    break;

            case 2: printf( "\n El conjuro\n");
            
            printf( "\n Mulan");
            printf("\n Viuda negra");
            printf("\n Wonder Woman");
            printf("\n Bob esponja");
                    break;

            case 3: printf( "  sala 3D\n");
                
                    
                    break;
              case 4: printf( " El conjuro\n");
              printf( "\n Mulan");
            printf("\n Viuda negra\n");
           
                    break;
              case 5: printf( "quieres pagar En efectivo\n");
              scanf( "%s", &resp);
                       
                      printf( " quieres pagar con tarjeta\n");
                      
                      scanf( "%s", &resp);
                     
                    break;
              case 6: printf( " bienvenido conoce los beneficios de ser clinte VIP\n");
              printf( " ASIENTOS VIP.\nTe consentimos con las salas mas comodas, asientos amplios y reclinables para que disfrutes mejor de tu pelicula en una experiencia anica de servicio y comodidad.\n");
                    printf( "SERVICIO VIP.\nRecibes el trato que mereces, por ello te llevamos todos tus alimentos hasta tu lugar, tan solo presiona el botón de servicio y un mesero te atendera.\n");
					printf( "BAR VIP. \n¿Tu pelicula aun no empieza? Acompana la espera con tu pareja y un coctel. Te ofrecemos las mejores instalaciones para pasar un rato agradable, claro, siempre con el mejor servicio.\n");
					break;  
            case 7: printf( " palomitas\n");
                    printf( " bebidas\n");
                    printf( " golosinas\n");
                    break;  
			case 8: printf( " combos\n");
                    printf( " boletos 2*1\n");
                    break;  
			case 9: printf( " generar boleto\n");
		            printf("clasificacion:\n");
		            scanf("%s", &clasificacion);
		            printf("pelicula\n");
		            scanf("%s", &pelicula);
		            printf("sala\n");
		            scanf("%s", &sala);
                    printf("funcion\n");
		            scanf("%d", &funcion);
		            printf("precio\n");
		            scanf("%d", &precio);
		            
		              printf( "\n  BOLETO");
		            
		            printf( "\nclasificacion: %s\n", clasificacion );
		            printf( "\npelicula: %s\n", pelicula);
		            printf( "\nclasificacion: %s\n", sala);
		            printf( "\nfuncion: %d\n", funcion );
		            printf( "\nprecio: %d\n", precio );
                    break;  
			case 10: printf( " ingresa tu usuario\n");
                     scanf( "%s", &usuario );
                     
                    break;  						        
					      
        
         }

       

    } while ( opcion != 11 );
    
printf( "Hasta pronto :)\n");
    return 0;
}













