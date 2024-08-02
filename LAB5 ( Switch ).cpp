#include <stdio.h>

int main() {

    int Score ;

    printf( "enter score ( MAX 100 ) : " ) ;
    scanf("%d", &Score);

    switch ( Score > 100 )
    {
    case 1 :
        printf (" Enter number or Enter number less then 100 ") ;
        break;
    
    default:
        switch ( Score/5 )
    {
        case 10 :
            printf (" Grade : D ") ;
            break;
        case 11 :
            printf (" Grade : D+ ") ;
            break;
        case 12 :
            printf (" Grade : C ") ;
            break;
        case 13 :
            printf (" Grade : C+ ") ;
            break;
        case 14 :
            printf (" Grade : B ") ;
            break;
        case 15 :
            printf (" Grade : B+ ") ;
            break;
        case 16 :
        case 17 :
        case 18 :
        case 19 :
        case 20 :
            printf (" Grade : A ") ;
            break;
        default:
            printf (" Grade : F ") ;
            break;
    }
        break;
    }//end switch
return 0;

}//end int main
