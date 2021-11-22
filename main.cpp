#include <iostream>
#include <cstring>
#include "BetterStrTok.h"

TokenState state1, state2;

char s1[] = "This is a string.";
char s2[] = "This is another string.";

int main() {
    bool ok, first = true;
    do {
        ok = false;

        char* p1 = Tokenize(&state1, first ? s1 : NULL, " ");
        char* p2 = Tokenize(&state2, first ? s2 : NULL, " ");

        if (p1) {
            ok = true;
            std::cout << p1 << ' ';
        }
        if (p2) {
            ok = true;
            std::cout << p2 << ' ';
        }

        first = false;
    } while (ok);
    return 0;
}
