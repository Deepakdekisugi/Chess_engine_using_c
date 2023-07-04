// board.c


#include "stdio.h"
#include "defs.h"

int Parse_Fen(char *fen, S_BOARD *pos) {

    ASSERT(fen! = NULL);  
    ASSERT(pos! = NULL);

    int rank = RANK_8;
    int file = FILE_A;
    int piece = 0;
    int count = 0;
    int i = 0;
    int sq64 = 0;
    int sq120 = 0;

    ResetBoard(pos);  

    while ((rank >= RANK_1) && *fen) {
        count = 1;
    }
}

void ResetBoard(S_BOARD *pos) {

    int index = 0;

    for (index = 0; index < BRD_SQ_NUM; ++index){
        pos -> pieces[index] = OFFBOARD;
    }

    for ( index = 0; index < 64; ++index) {
        pos -> pieces[SQ120(index)] = EMPTY;
    }

    for (index = 0; index < 3; ++index) {
        pos -> bigPce[index] =0;
        pos -> majPce[index] =0;
        pos -> minPce[index] =0;
        pos -> pawns[index] = 0ULL;
    }

    for (index = 0; index < 13; ++index) {
        pos -> pceNum[index] = 0;
    }
    pos -> kingSq[WHITE] = pos -> kingSq[BLACK] = NO_SQ;

    pos -> side = BOTH;
    pos -> enPas = NO_SQ;
    pos -> fiftyMove = 0;

    pos -> ply = 0;
    pos -> hisPly = 0;
    
    pos -> castelPerm = 0;

    pos -> posKey = 0ULL;
    
}