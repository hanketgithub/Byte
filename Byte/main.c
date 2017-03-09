//
//  main.c
//  Byte
//
//  Created by Hank Lee on 09/03/2017.
//  Copyright © 2017 Hank Lee. All rights reserved.
//

#include <stdio.h>
#include <stdint.h>

/*
    ____ _ _ _  _ _ _ _
    bit7 6 5 4  3 2 1 0
 */
typedef struct
{
    uint8_t bit0:1;
    uint8_t bit1:1;
    uint8_t bit2:1;
    uint8_t bit3:1;
    uint8_t bit4:1;
    uint8_t bit5:1;
    uint8_t bit6:1;
    uint8_t bit7:1;
} __attribute__((packed)) BYTE_T;

int main(int argc, const char * argv[]) {
    // insert code here...
    BYTE_T byte = { 0 };
    
    byte.bit0 = 1;
    
    printf("byte=0x%02x\n", byte);

    byte.bit1 = 1;
    
    printf("byte=0x%02x\n", byte);

    byte.bit2 = 1;
    
    printf("byte=0x%02x\n", byte);
    
    byte.bit3 = 1;
    
    printf("byte=0x%02x\n", byte);

    byte.bit4 = 1;
    
    printf("byte=0x%02x\n", byte);

    byte.bit5 = 1;
    
    printf("byte=0x%02x\n", byte);
    
    byte.bit6 = 1;
    
    printf("byte=0x%02x\n", byte);
    
    byte.bit7 = 1;
    
    printf("byte=0x%02x\n", byte);
    return 0;
}
