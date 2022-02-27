#include <stdio.h>
#include <stdbool.h>

int main(){
    unsigned char F; //output
    unsigned char one = 0x01;
    unsigned char  P=0x01,Q=0x01,R=0x01; //inputs
 //  unsigned char  P=0,Q=1,R=1; //inputs in hex

    printf("%x%x%x\n",one&P,one&Q,one&R);
    printf(" ");
    //POS implementation using AND-OR logic
/*    F = ((Q|R)&((~(P))|Q)&(P|(~(Q))|(~(R))));
    printf("%x\n" ,one&F);*/

    //POS implementation using NOR logic
    F=~((~(Q|R))|(~((~(P))|Q))|(~(P|(~(Q))|(~(R)))));
    printf("%x\n" ,one&F);

    return 0;
}


