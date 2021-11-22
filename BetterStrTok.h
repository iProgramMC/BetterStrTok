#ifndef __cplusplus
#define __bst_bool char
#else
#define __bst_bool bool
#endif // __cplusplus

typedef struct TokenState {
    __bst_bool m_bInitted;
    char*m_pContinuation;
    char*m_pReturnValue;
} TokenState;

#ifdef __cplusplus
extern "C" {
#endif
    char* Tokenize (TokenState* pState, char* pString, char* separator);
#ifdef __cplusplus
};
#endif
