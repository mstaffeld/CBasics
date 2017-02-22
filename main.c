#include <stdio.h>

//#define originalBits = 0b01010101;

void turnOnBitAtPosition2();
void turnOffBitAtPosition4();

void checkTheValueOfBitAtPosition3();

int main() {
    printf("Hello, World!\n");

    // turnOnBitAtPosition2();
    // turnOffBitAtPosition4();
    // checkTheValueOfBitAtPosition3();


    return 0;
}

void checkTheValueOfBitAtPosition3() {
    char lee = 0b10001010;
    char bit = (lee >> 3) & 1;

    printf("bit: %x\n", bit);
}

void turnOffBitAtPosition4() {
    char originalBits = 0b10010010;
    char bitMask = 0b0000001 << 4; // shift a new 01 over to the 4th spot.
    char flippedBitMask = ~bitMask;
    char andedFlippedAndOriginal = originalBits & flippedBitMask; // this will keep the values from the original bits

    printBits(originalBits);
    printBits(~originalBits);
    printBits(bitMask);
    printBits(flippedBitMask);
    printBits(andedFlippedAndOriginal);
}

void turnOnBitAtPosition2() {
    // Turn on bit [2]
    char originalBits = 0b00001001;
    printf("originalBits: ");
    printBits(originalBits);
    printf("originalBits int: %x\n", originalBits);

    // Create a bitMask
    // The position value, or 1.
    char bitMask = 0b00000001;
    printf("bitMask: ");
    printBits(bitMask);
    printf("bitMask int: %x\n", bitMask);

    // shift that over to the left
    unsigned char shiftedBits = bitMask << 2;
    printf("shiftedBits: ");
    printBits(shiftedBits);

    // or them together to keep original value ?
    unsigned char orTogether = originalBits | shiftedBits;
    printf("orTogether: ");
    printBits(orTogether);
}

void printBits(unsigned char v) {
    int i;
    for(i = 7; i >= 0; i--)
    {
        // putchar writes to stdout
        putchar('0' + ((v >> i) & 1));
    }

    printf("\n");
}
