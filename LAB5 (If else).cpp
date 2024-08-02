#include <stdio.h>

int main() {

    int Score ;
    printf( "enter score ( MAX 100 ) : " ) ;
    scanf("%d", &Score);
    
    if ( Score < 50 ) {
        printf( "F!\n" );
    } else if ( Score >= 50 && Score < 55 ) {
        printf( "D!\n" );
    } else if ( Score >= 55 && Score < 60 ) {
        printf( "D+!\n" );
    } else if ( Score >= 60 && Score < 65 ) {
        printf( "C!\n" );
    } else if ( Score >= 65 && Score < 70 ) {
        printf( "C+!\n" );
    } else if ( Score >= 70 && Score < 75 ) {
        printf( "B!\n" );
    } else if ( Score >= 75 && Score < 80 ) {
        printf( "B+!\n" );
    } else if ( Score >= 80 && Score <= 100) {
        printf( "A!\n" );
    } else {
        printf("ใส่ตัวเลข สิพี่ชาย.\n");
    }

    return 0 ;
}//end main
