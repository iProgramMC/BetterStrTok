#include <string.h>
#include "BetterStrTok.h"

char* Tokenize (TokenState* pState, char* pString, char* separator) {
    int len, i;
    if(!pState->m_bInitted) {
        pState->m_bInitted = 1;
        pState->m_pContinuation = NULL;
        pState->m_pReturnValue = NULL;
    }
    else if (!pState->m_pContinuation) return NULL;
    if(!pString) {
        pString = pState->m_pContinuation;
    }
    if (!pString) return NULL;
    len = strlen (pString);

    for (i=0; i<len; i++) {
        if (strchr(separator, pString[i])) {
            pState->m_pContinuation = &pString[i+1];
            pString[i] = 0;
            pState->m_pReturnValue = pString;
            return pString;
        }
    }
    // not found, hit null term:
    pState->m_pContinuation = NULL;
    pState->m_pReturnValue = pString;
    return pString;
}

