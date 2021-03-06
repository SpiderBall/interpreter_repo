/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 4 "savannah.y" /* yacc.c:339  */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define ID_SIZE 100
#define MAX_CHILDREN 3
#define STATEMENT 500//just so this prints out when a stat is read in

/* a tree node definition */
struct Node {
  /* the type of the node */
  int type;

  /* the value of the node if it can have one */
  double value;

  /* the id of the node (used for identifiers only) */
  char id[ID_SIZE];

  /* at most three children nodes */
  int num_children;
  struct Node* children[MAX_CHILDREN];
};



struct var {

	char name[100];

	double value;

};


struct var *vars[1000];



/* creates a new node and returns it */
struct Node* make_node(int type, double value, char* id) {
  int i;

  /* allocate space */
  struct Node* node = malloc(sizeof(struct Node));

  /* set properties */
  node->type = type;
  node->value = value;
  strcpy(node->id, id);
  node->num_children = 0;
  for(i = 0; i < MAX_CHILDREN; i++) {
    node->children[i] = NULL;
  }

  /* return new node */
  return node;
}
int debug = 0;

/* attach an existing node onto a parent */
void attach_node(struct Node* parent, struct Node* child) {
  /* connect it */
  parent->children[parent->num_children] = child;
  parent->num_children++;
  assert(parent->num_children <= MAX_CHILDREN);
}	

struct Node* tree;


#line 140 "savannah.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "savannah.tab.h".  */
#ifndef YY_YY_SAVANNAH_TAB_H_INCLUDED
# define YY_YY_SAVANNAH_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 100,
    VALUE = 101,
    PLUS = 102,
    MINUS = 103,
    DIVIDE = 104,
    TIMES = 105,
    LESS = 106,
    GREATER = 107,
    LESSEQ = 108,
    GREATEREQ = 109,
    EQUALS = 110,
    NEQUALS = 111,
    AND = 112,
    OR = 113,
    NOT = 114,
    SEMICOLON = 115,
    ASSIGN = 116,
    OPEN_PARENS = 117,
    CLOSE_PARENS = 118,
    START = 119,
    END = 120,
    IF = 121,
    THEN = 122,
    ELSE = 123,
    WHILE = 124,
    DO = 125,
    PRINT = 126,
    INPUT = 127
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 81 "savannah.y" /* yacc.c:355  */
 char* char_array; struct Node * node; double Double;

#line 214 "savannah.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SAVANNAH_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 229 "savannah.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   70

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  31
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  41
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  72

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   257

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   118,   118,   119,   120,   121,   122,   123,   129,   133,
     138,   145,   152,   159,   167,   174,   181,   190,   198,   205,
     213,   220,   227,   234,   241,   248,   254,   261,   267,   275,
     282,   292,   310,   320,   329,   336,   346,   354,   360,   366,
     375,   382
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "VALUE", "PLUS", "MINUS",
  "DIVIDE", "TIMES", "LESS", "GREATER", "LESSEQ", "GREATEREQ", "EQUALS",
  "NEQUALS", "AND", "OR", "NOT", "SEMICOLON", "ASSIGN", "OPEN_PARENS",
  "CLOSE_PARENS", "START", "END", "IF", "THEN", "ELSE", "WHILE", "DO",
  "PRINT", "INPUT", "$accept", "stat", "paren_expr", "not_expr",
  "multdiv_expr", "plusmin_expr", "conditional_expr", "and_expr",
  "or_expr", "if", "assign", "ifelse", "while", "print", "value", "seq",
  "stats", "program", "identifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127
};
# endif

#define YYPACT_NINF -42

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-42)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      13,   -42,    13,     4,     4,     4,    13,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,    15,    -7,    26,   -42,     4,     4,
     -42,   -42,   -42,    24,    22,    47,     5,    -3,   -42,   -42,
      -5,     1,   -42,   -42,     4,   -42,   -42,    34,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
      13,    13,   -42,    23,   -42,   -42,   -42,    24,    24,    22,
      22,    22,    22,    22,    22,    47,     5,    10,   -42,   -42,
      13,   -42
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    41,     0,     0,     0,     0,    38,     3,     2,     4,
       5,     6,     7,    40,     0,     0,     0,    35,     0,     0,
      36,    12,    15,    18,    25,    27,    29,     0,     9,    10,
       0,     0,    39,     1,     0,    37,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     8,    14,    13,    16,    17,    20,
      19,    22,    21,    23,    24,    26,    28,    30,    33,    31,
       0,    32
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -42,   -41,   -42,   -13,    28,    20,   -18,   -11,    -1,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,    12,   -42,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     6,    21,    22,    23,    24,    25,    26,    27,     7,
       8,     9,    10,    11,    28,    12,    13,    14,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      15,    37,    15,    30,    31,    36,    15,     1,    17,    67,
      68,    49,    34,    49,    16,    33,     1,    49,    32,    52,
      48,    18,    50,    51,    19,    55,    56,    40,    41,    71,
      65,    38,    39,    53,    20,     2,    70,     3,    66,    49,
       4,    69,     5,    42,    43,    44,    45,    46,    47,    35,
      15,    15,     0,     0,     0,    54,    42,    43,    44,    45,
      46,    47,    59,    60,    61,    62,    63,    64,    57,    58,
      15
};

static const yytype_int8 yycheck[] =
{
       0,    19,     2,     4,     5,    18,     6,     3,     4,    50,
      51,    16,    19,    16,     2,     0,     3,    16,     6,    18,
      15,    17,    25,    28,    20,    38,    39,     5,     6,    70,
      48,     7,     8,    34,    30,    22,    26,    24,    49,    16,
      27,    18,    29,     9,    10,    11,    12,    13,    14,    23,
      50,    51,    -1,    -1,    -1,    21,     9,    10,    11,    12,
      13,    14,    42,    43,    44,    45,    46,    47,    40,    41,
      70
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    22,    24,    27,    29,    32,    40,    41,    42,
      43,    44,    46,    47,    48,    49,    47,     4,    17,    20,
      30,    33,    34,    35,    36,    37,    38,    39,    45,    49,
      39,    39,    47,     0,    19,    23,    34,    37,     7,     8,
       5,     6,     9,    10,    11,    12,    13,    14,    15,    16,
      25,    28,    18,    39,    21,    34,    34,    35,    35,    36,
      36,    36,    36,    36,    36,    37,    38,    32,    32,    18,
      26,    32
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    31,    32,    32,    32,    32,    32,    32,    33,    33,
      33,    34,    34,    35,    35,    35,    36,    36,    36,    37,
      37,    37,    37,    37,    37,    37,    38,    38,    39,    39,
      40,    41,    42,    43,    44,    45,    45,    46,    47,    47,
      48,    49
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     2,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     1,     3,     1,
       4,     4,     6,     4,     3,     1,     1,     3,     1,     2,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 118 "savannah.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);}
#line 1352 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 119 "savannah.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);}
#line 1358 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 120 "savannah.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);}
#line 1364 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 121 "savannah.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);}
#line 1370 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 122 "savannah.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);}
#line 1376 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 123 "savannah.y" /* yacc.c:1646  */
    { (yyval.node)=(yyvsp[0].node);}
#line 1382 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 129 "savannah.y" /* yacc.c:1646  */
    {
		  if(debug==1) printf("paren_expr\n");
		  (yyval.node)=(yyvsp[-1].node);
		  }
#line 1391 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 133 "savannah.y" /* yacc.c:1646  */
    {
		  if(debug==1) printf("going up to value\n");
		  (yyval.node) = (yyvsp[0].node);
		  }
#line 1400 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 139 "savannah.y" /* yacc.c:1646  */
    {
				if(debug==1)printf("identifier");
				(yyval.node)=(yyvsp[0].node);
			}
#line 1409 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 146 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("not_expr\n");
						(yyval.node) = make_node(NOT, 0, "");
						attach_node((yyval.node), (yyvsp[0].node));  
						/* not should always be to the left of a statement*/
					}
#line 1420 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 152 "savannah.y" /* yacc.c:1646  */
    {
				if(debug==1)printf("going up\n");
				(yyval.node) = (yyvsp[0].node);}
#line 1428 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 160 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("mult_expr\n");
						(yyval.node)=make_node(TIMES, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));
					}
#line 1439 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 168 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("div_expr\n");
						(yyval.node)=make_node(DIVIDE, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));
					}
#line 1450 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 174 "savannah.y" /* yacc.c:1646  */
    {
				if(debug==1)printf("going up\n");
				(yyval.node) = (yyvsp[0].node);}
#line 1458 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 182 "savannah.y" /* yacc.c:1646  */
    {

						if(debug==1)printf("plus_expr\n");
						(yyval.node)=make_node(PLUS, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));

					}
#line 1471 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 192 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("min_expr\n");
						(yyval.node)=make_node(MINUS, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));
					}
#line 1482 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 198 "savannah.y" /* yacc.c:1646  */
    {
			if(debug==1)	printf("going up\n");
				(yyval.node) = (yyvsp[0].node);}
#line 1490 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 206 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("greater\n");
						(yyval.node)=make_node(GREATER, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));
					}
#line 1501 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 214 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("less\n");
						(yyval.node)=make_node(LESS, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));
					}
#line 1512 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 221 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("greatereq\n");
						(yyval.node)=make_node(GREATEREQ, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));
					}
#line 1523 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 228 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("lesseq\n");
						(yyval.node)=make_node(LESSEQ, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));
					}
#line 1534 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 235 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("equals\n");
						(yyval.node)=make_node(EQUALS, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));
					}
#line 1545 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 242 "savannah.y" /* yacc.c:1646  */
    {
						if(debug==1)printf("nequals\n");
						(yyval.node)=make_node(NEQUALS, 0, "");
						attach_node((yyval.node), (yyvsp[-2].node));
						attach_node((yyval.node), (yyvsp[0].node));
					}
#line 1556 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 248 "savannah.y" /* yacc.c:1646  */
    {
				if(debug==1)printf("going up\n");
				(yyval.node) = (yyvsp[0].node);}
#line 1564 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 255 "savannah.y" /* yacc.c:1646  */
    {
					if(debug==1)printf("and\n");
					(yyval.node) = make_node(AND, 0, "");
					attach_node((yyval.node), (yyvsp[-2].node));
					attach_node((yyval.node), (yyvsp[0].node));
				}
#line 1575 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 261 "savannah.y" /* yacc.c:1646  */
    {
			if(debug==1)printf("going up\n");
			(yyval.node)=(yyvsp[0].node);}
#line 1583 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 268 "savannah.y" /* yacc.c:1646  */
    { 
					if(debug==1)printf("or\n");
					(yyval.node) = make_node(OR, 0, "");
					attach_node((yyval.node), (yyvsp[-2].node));
					attach_node((yyval.node), (yyvsp[0].node));

				}
#line 1595 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 275 "savannah.y" /* yacc.c:1646  */
    {
			if(debug==1)printf("going up\n");
			(yyval.node) = (yyvsp[0].node);}
#line 1603 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 283 "savannah.y" /* yacc.c:1646  */
    {
					if(debug==1)printf("if\n");
					(yyval.node) = make_node(IF, 0, "");
					attach_node((yyval.node), (yyvsp[-2].node));
					attach_node((yyval.node), (yyvsp[0].node));
				}
#line 1614 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 293 "savannah.y" /* yacc.c:1646  */
    {
					fflush(stdout);
					if(debug==1)printf("assign\n");
					(yyval.node) = make_node(ASSIGN, 0 ,"");
					if(debug==1)printf("makes the assignment node");
					fflush(stdout);
					if(debug==1)printf("created node\n");
					fflush(stdout);
					attach_node((yyval.node), (yyvsp[-3].node)); //adds identifier to the tree
					if(debug==1)printf("attached node\n");
					fflush(stdout);
					attach_node((yyval.node), (yyvsp[-1].node)); //adds stat to the tree
					if(debug==1)printf("attached or");
					fflush(stdout);
				}
#line 1634 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 311 "savannah.y" /* yacc.c:1646  */
    {
					if(debug==1)printf("ifelse\n");
					(yyval.node) = make_node(IF, 0, "");
					attach_node((yyval.node), (yyvsp[-4].node)); //adds identifier to the tree
					attach_node((yyval.node), (yyvsp[-2].node)); //adds stat to the tree
					attach_node((yyval.node), (yyvsp[0].node)); //adds identifier to the tree
				}
#line 1646 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 321 "savannah.y" /* yacc.c:1646  */
    {
					if(debug==1)printf("while\n");
					(yyval.node) = make_node(WHILE, 0, "");
					attach_node((yyval.node), (yyvsp[-2].node));
					attach_node((yyval.node), (yyvsp[0].node));
				}
#line 1657 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 330 "savannah.y" /* yacc.c:1646  */
    {
					if(debug==1)printf("print\n");
					(yyval.node)=make_node(PRINT, 0, ""); 
					attach_node((yyval.node), (yyvsp[-1].node));
				}
#line 1667 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 337 "savannah.y" /* yacc.c:1646  */
    {
		 	if(debug==1)printf("val\n");
			 (yyval.node)=make_node(VALUE, yylval.Double, "");
		 }
#line 1676 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 347 "savannah.y" /* yacc.c:1646  */
    {
			if(debug==1)printf("input");
			(yyval.node)=make_node(INPUT, 0,"");
		}
#line 1685 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 355 "savannah.y" /* yacc.c:1646  */
    {
				if(debug==1)printf("starting sequence");
				(yyval.node) = (yyvsp[-1].node);
			}
#line 1694 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 361 "savannah.y" /* yacc.c:1646  */
    {
				if(debug==1)printf("Making a statement \n");
				(yyval.node) = make_node(STATEMENT, 0, "");
				attach_node((yyval.node), (yyvsp[0].node));
			 }
#line 1704 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 367 "savannah.y" /* yacc.c:1646  */
    {
				if(debug==1)printf("Making statements\n");
				(yyval.node) = make_node(STATEMENT, 0, "");
				attach_node((yyval.node), (yyvsp[-1].node));
				attach_node((yyval.node), (yyvsp[0].node));
			 }
#line 1715 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 376 "savannah.y" /* yacc.c:1646  */
    {
			   if(debug==1)printf("IN PROGRAM\n");
			   tree = (yyvsp[0].node); 
			   if(debug==1)printf("added element to tree\n");
		   }
#line 1725 "savannah.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 383 "savannah.y" /* yacc.c:1646  */
    {
		  	if(debug==1)printf("iden\n");
		  	(yyval.node) = make_node(IDENTIFIER, 0, yylval.char_array);
		  }
#line 1734 "savannah.tab.c" /* yacc.c:1646  */
    break;


#line 1738 "savannah.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 388 "savannah.y" /* yacc.c:1906  */


 /*
 * It will handle the node types that produce a value such as 
 * identifiers, values, inputs, and arithmetic / logical operators. For 
 * expression nodes that have children, it will need to recursively 
 * evaluate those expressions. */
double eval_expression(struct Node* node){
/*Takes a parse tree node, and returns the value of the expression it 
 * represents. 
 */
	
    double arg1, arg2 = 0;
	switch(node->type){
    	case VALUE: return node->value;
    	case IDENTIFIER: return node->value;
    	case INPUT: return node->value;//need to read in user input somehow
   		case PLUS: 
			
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			return arg1 + arg2;
   		case MINUS:
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			return arg1 - arg2;
   		case DIVIDE:
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			return arg1 / arg2;
   		case TIMES:
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			return arg1 * arg2;
   		case LESS:
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			if (arg1 < arg2){
				return 1;
			}else{
				return 0;
			}
   		case GREATER:
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			if (arg1 > arg2){
				return 1;
			}else{
				return 0;
			}
   		case LESSEQ:
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			if (arg1 <= arg2){
				return 1;
			}else{
				return 0;
			}
   		case GREATEREQ:
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			if (arg1 >= arg2){
				return 1;
			}else{
				return 0;
			}
   		case EQUALS:   
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			if (arg1 == arg2){
				return 1;
			}else{
				return 0;
			}
   		case NEQUALS:   
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			if (arg1 != arg2){
				return 1;
			}else{
				return 0;
			}
   		case AND:   
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			if (arg1 && arg2){
				return 1;
			}else{
				return 0;
			}
   		case OR:    
        	arg1 = eval_expression(node->children[0]);
        	arg2 = eval_expression(node->children[1]);
			if (arg1 || arg2){
				return 1;
			}else{
				return 0;
			}
   		case NOT:   
        	arg1 = eval_expression(node->children[0]);
			if (!arg1){
				return 1;
			}else{
				return 0;
			}	

 		 default:
 		    printf("Error, %d not a valid node type.\n", node->type);
 		    exit(1);
	}
}








void eval_statement(struct Node* node){
	int i, j = 0;
	double a;
	
	struct var *currentVar;
	
	 switch(node->type) {//for every possible node type, find the value
	   case IDENTIFIER:
			for(j = 0; j <sizeof(node->id); j++){
				currentVar->name[j] = node->id[j];}//this is here so that the name can be stored in the vars array
			currentVar->value = eval_expression(node);break;
	   case ASSIGN: 
		//first child must always be an identifier, second child must be a value
			for(i = 0; i<node->num_children; i++){
				eval_statement(node->children[i]);
			}
			break;
	   case IF: 
			if(eval_expression(node->children[0])){//statement to be evaluated
				currentVar->value = eval_expression(node->children[1]); //statement to be executed if expr above is true
			}else{
				if(node->children[2]){ //else case, if a third child exists
				currentVar->value = eval_expression(node->children[2]); //if a third child exists, evaluate it
				}
			}
			break;
	   case WHILE: 
			while(eval_expression(node->children[0])){//statement to be evaluated
				currentVar->value = eval_expression(node->children[1]); //statement to be executed while expr above is true
			}
			break;
	   case PRINT://should only have one child? and it should always be an expression?
			printf("wtf\n");
			a = eval_expression(node->children[0]);
			printf("the current value is %lf", a);
			break;
	   case STATEMENT: //for each existing child, evaluate it
			for(i = 0; i<node->num_children; i++){
				eval_statement(node->children[i]);
			}
			break;
	   default:
			currentVar->value = eval_expression(node);break;
	}
	//vars[i] = currentVar;//stores anything saved as the currentVar in the vars array

}


/*Takes a parse tree node, and evaluates the statement it represents. 
 * Most of the statement types contain statements and/or expressions as 
 * children nodes. These will have to be handled recursively. */
                                                                






void print_tree(struct Node* node, int tabs) {
  int i;
  if(debug==1)printf("entering print tree \n");	

  /* base case */
  if(!node){ printf("no node \n"); return;}

  /* print leading tabs */
  for(i = 0; i < tabs; i++) {
	 //if(debug==1)printf("entering for loop \n");
	 printf("   " );
     //if(debug==1)printf("end for loop \n");
	 fflush(stdout);
  }
  if(debug==1)printf("out of for loop\n");


  switch(node->type) {
    case IDENTIFIER : printf("IDENTIFIER: %s\n", node->id); break;
    case VALUE      : printf("VALUE: %lf\n", node->value); break;
    case PLUS       : printf("PLUS: \n"); break;
    case MINUS      : printf("MINUS: \n"); break;
    case DIVIDE     : printf("DIVIDE: \n"); break;
    case TIMES      : printf("TIMES: \n"); break;
    case LESS       : printf("LESS THAN: \n"); break;
    case GREATER    : printf("GREATER: \n"); break;
    case LESSEQ     : printf("LESS EQUAL: \n"); break;
    case GREATEREQ  : printf("GREATER EQUAL: \n"); break;
    case EQUALS     : printf("EQUALS: \n"); break;
    case NEQUALS    : printf("NOT EQUALS: \n"); break;
    case AND        : printf("AND: \n"); break;
    case OR         : printf("OR: \n"); break;
    case NOT        : printf("NOT: \n"); break;
    case ASSIGN     : printf("ASSIGN: \n"); break;
    case IF         : printf("IF: \n"); break;
    case WHILE      : printf("WHILE: \n"); break;
    case PRINT      : printf("PRINT: \n"); break;
    case INPUT      : printf("INPUT: \n"); break;
    case STATEMENT  : printf("STATEMENT: \n"); break;
    default:
      printf("Error, %d not a valid node type.\n", node->type);
      exit(1);
  }

  /* print all children nodes underneath */
  for(i = 0; i < node->num_children; i++) {
 	//if(debug==1){printf("in for at element %d \n", i );}
    print_tree(node->children[i], tabs + 1);
  }
}

int yywrap( ) {
  return 1;
}

void yyerror(const char* str) {
  fprintf(stderr, "Compiler error: '%s'.\n", str);
}

int main(int argc, char* argv[])
{ 

	if(debug==1){printf("In main \n");}
	if(!argv[1]){printf("No file entered \n"); return 0;}
	stdin = fopen(argv[1], "r");    
	yyparse();
	print_tree(tree, 1);// (tree to feed in, num tabs it will print out with) 
	printf("WE ARE OUT OF PRINT TREE");
	eval_statement(tree);
	if(debug==1){printf("leaving main \n");}
	return 0; 
}
