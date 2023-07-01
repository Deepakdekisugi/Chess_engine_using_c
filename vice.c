#include "stdio.h" 
#include "defs.h"
#include "stdlib.h"

int main(){

    AllInit();

    int PieceOne = rand();
    int PieceTwo = rand();
    int PieceThree = rand();
    int PieceFour = rand();

    printf("PieceOne : %x", PieceOne);
    printf("PieceTwo : %x", PieceTwo);
    printf("PieceThree : %x", PieceThree);
    printf("PieceFour : %x", PieceFour);

    int Key = PieceOne ^ PieceTwo ^ PieceThree ^ PieceFour;
    int TempKey = PieceOne;
    TempKey ^= PieceThree;
    TempKey ^= PieceFour;
    TempKey ^= PieceTwo;

    printf("Key: %X\n", Key);
    printf("TempKey: %X\n", TempKey);

    return 0;
}