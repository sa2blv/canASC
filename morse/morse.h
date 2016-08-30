#include <stdint.h>

/* speed of the CPU */
/* time quanta of symbols in ms */
#define TIME_QUANTA 400

/* length of symbols (in time quanta) */
/* defaults:
 * #define TIME_DOT 1
 * #define TIME_DASH 3
 * #define TIME_CHARACTER_PAUSE 3
 * #define TIME_SYMBOL_PAUSE 1
 * #define TIME_WORD_PAUSE 7
 */
#define TIME_DOT 1
#define TIME_DASH 5
#define TIME_CHARACTER_PAUSE 7
#define TIME_SYMBOL_PAUSE 2
#define TIME_WORD_PAUSE 15

#define ON 1
#define OFF 0


char* create_morse_array(char *string);
void morse(char** strings, uint8_t string_count);
void init();
