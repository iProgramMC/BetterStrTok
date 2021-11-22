## BetterStrTok
Y'all just love `strtok`?

Because I don't. 

### Why?
1) You can only tokenize a single string at once. I would like to tokenize multiple strings without having to do them sequentially. This should fix it.
2) I find it hilarious how bad `strtok` is; it's thread unsafetyness (you probably can't call strtok in different threads at the same time without it fucking up), the fact it uses a *global* variable, all of this just makes it bad.
3) MSVC partly solved this with `strtok_s`, but this is intended for systems without it.

### How to use
The repo provides an example on how to do this

### Setup
The BetterStrTok.c /.h files contain all you will need for this. Compilation was tested on GCC.
