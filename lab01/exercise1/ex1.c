#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) { // using 2 hint
    int count = 0;
    while (*(str) != '\0') { // MAKE THE LOOP RUN UNTILL THE END OF STRING (I.E: IT ENCOUNTER NULL TERMINATOR)
        if (*(str) == letter) {  // IF THE STRING CHARACHTER EQUALS THE REQUIRED LETTER THEN INCREMENT COUNT. 
            count++;
        }
        str++;  // move to next character
    }
    return count;
}




/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
    // Initialize counts to zero
    dna_seq->A_count = 0;
    dna_seq->C_count = 0;
    dna_seq->G_count = 0;
    dna_seq->T_count = 0;

    char *str = dna_seq->sequence;  // Get pointer to the DNA string

    while (*(str) != '\0') {  // Loop until end of string (null terminator)
        if (*(str) == 'A') {     // If character is 'A', increment A_count
            dna_seq->A_count++;
        } else if (*(str) == 'C') {  // If 'C', increment C_count
            dna_seq->C_count++;
        } else if (*(str) == 'G') {  // If 'G', increment G_count
            dna_seq->G_count++;
        } else if (*(str) == 'T') {  // If 'T', increment T_count
            dna_seq->T_count++;
        }
        str++;  // Move to next character
    }
    return;
}

   