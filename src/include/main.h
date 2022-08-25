#ifndef _MAIN_H_
#define _MAIN_H_

#define PORTNUM_MAX    2
typedef struct
{
	unsigned char portnum;
    unsigned short baud[PORTNUM_MAX];
	unsigned char devid[PORTNUM_MAX];


} PARA_BAMS; //
#endif