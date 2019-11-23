#define NUM 257
#define ID 258
#define PLUS 259
#define MUL 260
#define DIV 261
#define MOD 262
#define ASGN 263
#define READ 264
#define WRITE 265
#define MINUS 266
#define NEWLINE 267
#define LT 268
#define GT 269
#define DEQ 270
#define NEQ 271
#define ELSE 272
#define IF 273
#define THEN 274
#define ENDIF 275
#define ENDWHILE 276
#define WHILE 277
#define DO 278
#define START 279
#define END 280
#define DECL 281
#define ENDDECL 282
#define INT 283
#define STR 284
#define LE 285
#define GE 286
#define NOT 287
#define AND 288
#define OR 289
#define MAIN 290
#define RETURN 291
#define ALLOC 292
#define FREE 293
#define INIT 294
#define BRK 295
#define CONTINUE 296
#define BRKP 297
#define TYPE 298
#define ENDTYPE 299
#define NILL 300
#define DEQNILL 301
#define NEQNILL 302
#define STRVAL 303
#define EXPOSCALL 304
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{
    struct ASTNode *nptr;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
