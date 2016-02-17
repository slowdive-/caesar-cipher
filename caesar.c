#include "caesar.h"

void caesar(int key, char *clear_text) {
    for(char *c = clear_text; *c != '\0'; c++) {
        //ignore non-alphabetic characters
        int ascii_value = (int) *c;
        if(ascii_value < 65 || ascii_value > 122 || (ascii_value > 90 && ascii_value < 97)) {
            continue;
        }
        //ASCII values for A-Z start at 65, for a-z at 97
        int ascii_difference = 97;
        if(ascii_value < 97) {
            ascii_difference = 65;
        }

        int alphabet_position = ascii_value - ascii_difference;
        int new_alphabet_position = (alphabet_position + key) % 26;
        int new_ascii_value = ascii_difference + new_alphabet_position;
        *c = (char) new_ascii_value;
    }
}
