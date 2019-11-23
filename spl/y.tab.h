#define ALIAS 257
#define DEFINE 258
#define DO 259
#define ELSE 260
#define ENDIF 261
#define ENDWHILE 262
#define IF 263
#define RETURN 264
#define IRETURN 265
#define LOAD 266
#define STORE 267
#define THEN 268
#define WHILE 269
#define HALT 270
#define REG 271
#define NUM 272
#define ASSIGNOP 273
#define ARITHOP1 274
#define ARITHOP2 275
#define RELOP 276
#define LOGOP 277
#define NOTOP 278
#define ID 279
#define BREAK 280
#define CONTINUE 281
#define CHKPT 282
#define READ 283
#define READI 284
#define PRINT 285
#define STRING 286
#define INLINE 287
#define BACKUP 288
#define RESTORE 289
#define LOADI 290
#define GOTO 291
#define CALL 292
#define ENCRYPT 293
#define PORT 294
#define MULTIPUSH 295
#define MULTIPOP 296
#define UMIN 297
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{
    struct tree *n;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;
