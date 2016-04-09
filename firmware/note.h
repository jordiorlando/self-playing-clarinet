#ifndef _NOTE_H_
#define _NOTE_H_

#include "servo.h"
#include "spi.h"

#define LOWEST_NOTE 51 // Corresponds to a Concert Eb
#define NUM_NOTES   37 // Three octave range

#define COMPARE(a, b) (((b) >= 0) && ((a) == (b)))

void note_init(void);

void note_on(int8_t, int8_t);
void note_off(int8_t);
void note_volume(int8_t, int8_t);
void note_transpose(int8_t);

int8_t note_get(void);

#endif