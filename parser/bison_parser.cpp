/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Substitute the type names.  */
#define YYSTYPE         HSQL_STYPE
#define YYLTYPE         HSQL_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         hsql_parse
#define yylex           hsql_lex
#define yyerror         hsql_error
#define yydebug         hsql_debug
#define yynerrs         hsql_nerrs

/* First part of user prologue.  */
#line 1 "bison_parser.y"

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "bison_parser.h"
#include "flex_lexer.h"
#include "../include/utils.h"

#include <stdio.h>
#include <string.h>


int yyerror(YYLTYPE* llocp, Program * result, yyscan_t scanner, const char *msg) {
    //fprintf(stderr, "%s\n", msg);
    return 0;
}


#line 105 "bison_parser.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_HSQL_BISON_PARSER_H_INCLUDED
# define YY_HSQL_BISON_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef HSQL_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define HSQL_DEBUG 1
#  else
#   define HSQL_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define HSQL_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined HSQL_DEBUG */
#if HSQL_DEBUG
extern int hsql_debug;
#endif
/* "%code requires" blocks.  */
#line 34 "bison_parser.y"

// %code requires block


#include "../include/ast.h"
#include "../include/define.h"
#include "parser_typedef.h"


// Auto update column and line number
#define YY_USER_ACTION \
        yylloc->first_line = yylloc->last_line; \
        yylloc->first_column = yylloc->last_column; \
        for(int i = 0; yytext[i] != '\0'; i++) { \
            yylloc->total_column++; \
            yylloc->string_length++; \
                if(yytext[i] == '\n') { \
                        yylloc->last_line++; \
                        yylloc->last_column = 0; \
                } \
                else { \
                        yylloc->last_column++; \
                } \
        }

#line 182 "bison_parser.cpp"

/* Token type.  */
#ifndef HSQL_TOKENTYPE
# define HSQL_TOKENTYPE
  enum hsql_tokentype
  {
    SQL_STRING = 258,
    SQL_IDENTIFIER = 259,
    SQL_BLOBSTRING = 260,
    SQL_HEXVAL = 261,
    SQL_EXPVAL = 262,
    SQL_FLOATVAL = 263,
    SQL_INTVAL = 264,
    SQL_DEALLOCATE = 265,
    SQL_PARAMETERS = 266,
    SQL_INTERSECT = 267,
    SQL_TEMPORARY = 268,
    SQL_TIMESTAMP = 269,
    SQL_CURRENT_TIME = 270,
    SQL_CURRENT_DATE = 271,
    SQL_CURRENT_TIMESTAMP = 272,
    SQL_DISTINCT = 273,
    SQL_RESTRICT = 274,
    SQL_TRUNCATE = 275,
    SQL_ANALYZE = 276,
    SQL_BETWEEN = 277,
    SQL_STRICT = 278,
    SQL_CASCADE = 279,
    SQL_COLUMNS = 280,
    SQL_CONTROL = 281,
    SQL_DEFAULT = 282,
    SQL_EXECUTE = 283,
    SQL_EXPLAIN = 284,
    SQL_INTEGER = 285,
    SQL_NATURAL = 286,
    SQL_PREPARE = 287,
    SQL_PRIMARY = 288,
    SQL_SCHEMAS = 289,
    SQL_SPATIAL = 290,
    SQL_VIRTUAL = 291,
    SQL_DESCRIBE = 292,
    SQL_BEFORE = 293,
    SQL_COLUMN = 294,
    SQL_CREATE = 295,
    SQL_DELETE = 296,
    SQL_DIRECT = 297,
    SQL_STORED = 298,
    SQL_DOUBLE = 299,
    SQL_ESCAPE = 300,
    SQL_EXCEPT = 301,
    SQL_EXISTS = 302,
    SQL_EXTRACT = 303,
    SQL_GLOBAL = 304,
    SQL_HAVING = 305,
    SQL_IMPORT = 306,
    SQL_INSERT = 307,
    SQL_ISNULL = 308,
    SQL_OFFSET = 309,
    SQL_RENAME = 310,
    SQL_SCHEMA = 311,
    SQL_SELECT = 312,
    SQL_SORTED = 313,
    SQL_TABLES = 314,
    SQL_UNIQUE = 315,
    SQL_UNLOAD = 316,
    SQL_UPDATE = 317,
    SQL_VALUES = 318,
    SQL_AFTER = 319,
    SQL_ALTER = 320,
    SQL_CROSS = 321,
    SQL_DELTA = 322,
    SQL_FLOAT = 323,
    SQL_GROUP = 324,
    SQL_INDEX = 325,
    SQL_INNER = 326,
    SQL_LIMIT = 327,
    SQL_LOCAL = 328,
    SQL_MERGE = 329,
    SQL_MINUS = 330,
    SQL_ORDER = 331,
    SQL_OUTER = 332,
    SQL_RIGHT = 333,
    SQL_TABLE = 334,
    SQL_UNION = 335,
    SQL_USING = 336,
    SQL_WHERE = 337,
    SQL_CALL = 338,
    SQL_CASE = 339,
    SQL_DATE = 340,
    SQL_DATETIME = 341,
    SQL_CHAR = 342,
    SQL_CHARACTER = 343,
    SQL_NCHAR = 344,
    SQL_VARYING = 345,
    SQL_NATIVE = 346,
    SQL_VARCHAR = 347,
    SQL_NVARCHAR = 348,
    SQL_DESC = 349,
    SQL_DROP = 350,
    SQL_ELSE = 351,
    SQL_FILE = 352,
    SQL_FROM = 353,
    SQL_FULL = 354,
    SQL_HASH = 355,
    SQL_HINT = 356,
    SQL_INTO = 357,
    SQL_JOIN = 358,
    SQL_LEFT = 359,
    SQL_LIKE = 360,
    SQL_LOAD = 361,
    SQL_LONG = 362,
    SQL_NULL = 363,
    SQL_PLAN = 364,
    SQL_SHOW = 365,
    SQL_TEXT = 366,
    SQL_ANY = 367,
    SQL_STRINGTOKEN = 368,
    SQL_THEN = 369,
    SQL_TIME = 370,
    SQL_BLOB = 371,
    SQL_CLOB = 372,
    SQL_VIEW = 373,
    SQL_WHEN = 374,
    SQL_WITH = 375,
    SQL_ADD = 376,
    SQL_ALL = 377,
    SQL_AND = 378,
    SQL_ASC = 379,
    SQL_CSV = 380,
    SQL_END = 381,
    SQL_FOR = 382,
    SQL_INT = 383,
    SQL_KEY = 384,
    SQL_REAL = 385,
    SQL_BOOL = 386,
    SQL_BOOLEAN = 387,
    SQL_TINYINT = 388,
    SQL_SMALLINT = 389,
    SQL_MEDIUMINT = 390,
    SQL_BIGINT = 391,
    SQL_UNSIGNED = 392,
    SQL_BIG = 393,
    SQL_INT2 = 394,
    SQL_INT8 = 395,
    SQL_NOT = 396,
    SQL_OFF = 397,
    SQL_SET = 398,
    SQL_TOP = 399,
    SQL_AS = 400,
    SQL_BY = 401,
    SQL_IF = 402,
    SQL_IN = 403,
    SQL_IS = 404,
    SQL_OF = 405,
    SQL_ON = 406,
    SQL_OR = 407,
    SQL_TO = 408,
    SQL_ARRAY = 409,
    SQL_CONCAT = 410,
    SQL_ILIKE = 411,
    SQL_SECOND = 412,
    SQL_MINUTE = 413,
    SQL_HOUR = 414,
    SQL_DAY = 415,
    SQL_MONTH = 416,
    SQL_YEAR = 417,
    SQL_TRUE = 418,
    SQL_FALSE = 419,
    SQL_PRECISION = 420,
    SQL_NUMERIC = 421,
    SQL_NUM = 422,
    SQL_DECIMAL = 423,
    SQL_FOREIGN = 424,
    SQL_WITHOUT = 425,
    SQL_ROWID = 426,
    SQL_CONSTRAINT = 427,
    SQL_BLOBSTART = 428,
    SQL_BTWAND = 429,
    SQL_PRAGMA = 430,
    SQL_REINDEX = 431,
    SQL_GENERATED = 432,
    SQL_ALWAYS = 433,
    SQL_CHECK = 434,
    SQL_CONFLICT = 435,
    SQL_IGNORE = 436,
    SQL_REPLACE = 437,
    SQL_ROLLBACK = 438,
    SQL_REFERENCES = 439,
    SQL_ABORT = 440,
    SQL_FAIL = 441,
    SQL_AUTOINCR = 442,
    SQL_AUTOINCREMENT = 443,
    SQL_BEGIN = 444,
    SQL_TRIGGER = 445,
    SQL_TEMP = 446,
    SQL_INSTEAD = 447,
    SQL_EACH = 448,
    SQL_ROW = 449,
    SQL_OVER = 450,
    SQL_FILTER = 451,
    SQL_PARTITION = 452,
    SQL_CURRENT = 453,
    SQL_EXCLUDE = 454,
    SQL_FOLLOWING = 455,
    SQL_GROUPS = 456,
    SQL_NO = 457,
    SQL_OTHERS = 458,
    SQL_PRECEDING = 459,
    SQL_RANGE = 460,
    SQL_ROWS = 461,
    SQL_TIES = 462,
    SQL_UNBOUNDED = 463,
    SQL_WINDOW = 464,
    SQL_ATTACH = 465,
    SQL_DETACH = 466,
    SQL_DATABASE = 467,
    SQL_INDEXED = 468,
    SQL_CAST = 469,
    SQL_SAVEPOINT = 470,
    SQL_RELEASE = 471,
    SQL_VACUUM = 472,
    SQL_TRANSACTION = 473,
    SQL_DEFFERED = 474,
    SQL_EXCLUSIVE = 475,
    SQL_IMEDIATE = 476,
    SQL_COMMIT = 477,
    SQL_GLOB = 478,
    SQL_MATCH = 479,
    SQL_REGEXP = 480,
    SQL_NOTHING = 481,
    SQL_NULLS = 482,
    SQL_LAST = 483,
    SQL_FIRST = 484,
    SQL_DO = 485,
    SQL_COLLATE = 486,
    SQL_RAISE = 487,
    SQL_RECURSIVE = 488,
    SQL_RETURNING = 489,
    SQL_ACTION = 490,
    SQL_DEFERRABLE = 491,
    SQL_DEFERRED = 492,
    SQL_IMMEDIATE = 493,
    SQL_INITIALLY = 494,
    SQL_NOTNULL = 495,
    SQL_NOTEQUALS = 496,
    SQL_EQUALS = 497,
    SQL_LESSEQ = 498,
    SQL_GREATEREQ = 499,
    SQL_LSHIFT = 500,
    SQL_RSHIFT = 501
  };
#endif

/* Value type.  */
#if ! defined HSQL_STYPE && ! defined HSQL_STYPE_IS_DECLARED
#line 96 "bison_parser.y"
union HSQL_STYPE
{
#line 96 "bison_parser.y"

    double fval;
    int64_t ival;
    char* sval;
    uintmax_t uval;
    bool bval;

    Program* program_t;
    StatementList* statement_list_t;
    Statement* statement_t;
    PreparableStatement* preparable_statement_t;
    FilePath* file_path_t;
    TableRefCommaList* table_ref_commalist_t;
    CreateStatement* create_statement_t;
    CreateTableStatement * create_table_statement_t;
    CreateViewStatement * create_view_statement_t;
    CreateIndexStatement * create_index_statement_t;
    CreateVirtualTableStatement * create_virtual_table_statement_t;
    CreateTriggerStatement * create_trigger_statement_t;
    OptIfNotExists* opt_if_not_exists_t;
    OptRecursive* opt_recursive_t;
    OptNot* opt_not_t;
    ColumnDefList* column_def_list_t;
    ColumnDef* column_def_t;
    TableConstraint* table_constraint_t;
    TableConstraintList* table_constraint_list_t;
    OptConstraintName* opt_constraint_name_t;
    ColumnType* column_type_t;
    //OptColumnNullable* opt_column_nullable_t;
    DropStatement* drop_statement_t;
    DropTableStatement* drop_table_statement_t;
    DropIndexStatement* drop_index_statement_t;
    DropViewStatement* drop_view_statement_t;
    DropTriggerStatement* drop_trigger_statement_t;
    OptIfExists* opt_if_exists_t;
    OptWithoutRowID* opt_without_rowid_t;
    OptStrict* opt_strict_t;
    DeleteStatement* delete_statement_t;
    InsertStatement* insert_statement_t;
    OptColumnListParen * opt_column_list_paren_t;
    UpdateStatement* update_statement_t;
    UpdateClauseList* update_clause_list_t;
    UpdateClause* update_clause_t;
    SelectStatement* select_statement_t;
    SetOperator* set_operator_t;
    SelectCore* select_core_t;
    SelectCoreList * select_core_list_t;
    OptDistinct* opt_distinct_t;
    OptStoredVirtual * opt_stored_virtual_t;
    OptReturningClause* opt_returning_clause_t;
    ResultColumnList* result_column_list_t;
    ResultColumn* result_column_t;
    OptFromClause* opt_from_clause_t;
    FromClause* from_clause_t;
    OptWhere* opt_where_t;
    OptEscapeExpr* opt_escape_expr_t;
    OptElseExpr* opt_else_expr_t;
    OptGroup* opt_group_t;
    OptHaving* opt_having_t;
    OptOrder* opt_order_t;
    OrderList* order_list_t;
    OrderTerm* order_term_t;
    OptOrderType* opt_order_type_t;
    OptLimit* opt_limit_t;
    ExprList* expr_list_t;
    ExprListParen* expr_list_paren_t;
    ExprListParenList* expr_list_paren_list_t;
    OptExpr* opt_expr_t;
    NewExpr* new_expr_t;
    UnaryOp* unary_op_t;
    BinaryOp* binary_op_t;
    InTarget* in_target_t;
    CaseCondition* case_condition_t;
    CaseConditionList* case_condition_list_t;
    ColumnName* column_name_t;
    FunctionName* function_name_t;
    FunctionArgs* function_args_t;
    Literal* literal_t;
    StringLiteral* string_literal_t;
    BlobLiteral * blob_literal_t;
    NumericLiteral* numeric_literal_t;
    SignedNumber * signed_number_t;
    ForeignKeyClause * foreign_key_clause_t;
    ForeignKeyOn * foreign_key_on_t;
    ForeignKeyOnList * foreign_key_on_list_t;
    OptForeignKeyOnList * opt_foreign_key_on_list_t;
    DeferrableClause * deferrable_clause_t;
    OptDeferrableClause * opt_deferrable_clause_t;
    NullLiteral* null_literal_t;
    ParamExpr* param_expr_t;
    TableOrSubquery * table_or_subquery_t;
    TableOrSubqueryList * table_or_subquery_list_t;
    TableRefAtomic* table_ref_atomic_t;
    NonjoinTableRefAtomic* nonjoin_table_ref_atomic_t;
    TableRefName* table_ref_name_t;
    TableName* table_name_t;
    QualifiedTableName * qualified_table_name_t;
    TableAlias* table_alias_t;
    OptTableAlias* opt_table_alias_t;
    OptTableAliasAs * opt_table_alias_as_t;
    ColumnAlias* column_alias_t;
    OptColumnAlias* opt_column_alias_t;
    OptWithClause* opt_with_clause_t;
    WithClause* with_clause_t;
    CommonTableExpr* common_table_expr_t;
    CommonTableExprList* common_table_expr_list_t;
    JoinClause* join_clause_t;
    JoinSuffix* join_suffix_t;
    JoinSuffixList* join_suffix_list_t;
    OptJoinType* opt_join_type_t;
    JoinConstraint* join_constraint_t;
    OptSemicolon* opt_semicolon_t;
    Identifier* identifier_t;
    AttachStatement * attach_statement_t;
    DetachStatement * detach_statement_t;
    ReindexStatement * reindex_statement_t;
    AnalyzeStatement * analyze_statement_t;
    PragmaStatement* pragma_statement_t;
    PragmaKey * pragma_key_t;
    PragmaValue * pragma_value_t;
    PragmaName * pragma_name_t;
    SchemaName * schema_name_t;
    OptColumnConstraintlist*	opt_column_constraintlist_t;
	ColumnConstraintlist*	column_constraintlist_t;
	ColumnConstraint*	column_constraint_t;
	OptConflictClause*	opt_conflict_clause_t;
	ResolveType*	resolve_type_t;
	OptAutoinc*	opt_autoinc_t;
	OptUnique*	opt_unique_t;
	IndexName*	index_name_t;
	OptTmp*	opt_tmp_t;
	TriggerName*	trigger_name_t;
	OptTriggerTime*	opt_trigger_time_t;
	TriggerEvent*	trigger_event_t;
	OptOfColumnList*	opt_of_column_list_t;
	OptForEach*	opt_for_each_t;
	OptWhen*	opt_when_t;
	TriggerCmdList*	trigger_cmd_list_t;
	TriggerCmd*	trigger_cmd_t;
	ModuleName*	module_name_t;
	OptOverClause*	opt_over_clause_t;
	OptFilterClause*	opt_filter_clause_t;
  FilterClause* filter_clause_t;
	WindowClause*	window_clause_t;
  OptWindowClause * opt_window_clause_t;
	WindowDefnList*	window_defn_list_t;
	WindowDefn*	window_defn_t;
	WindowBody*	window_body_t;
	OptBaseWindowName*	opt_base_window_name_t;
  WindowName* window_name_t;
	OptFrame*	opt_frame_t;
	RangeOrRows*	range_or_rows_t;
	FrameBoundS*	frame_bound_s_t;
	FrameBoundE*	frame_bound_e_t;
	FrameBound*	frame_bound_t;
	FrameExclude*	frame_exclude_t;
  OptFrameExclude* opt_frame_exclude_t;
    InsertType * insert_type_t;
    UpdateType * update_type_t;
    InsertValue * insert_value_t;

    JoinOp * join_op_t;
    OptIndex * opt_index_t;
    OnExpr* on_expr_t;
    ElseExpr* else_expr_t;
    WhereExpr* where_expr_t;
    EscapeExpr* escape_expr_t;

    AlterStatement * alter_statement_t;
    SavepointStatement * savepoint_statement_t;
    ReleaseStatement * release_statement_t;
    OptColumn * opt_column_t;
    VacuumStatement * vacuum_statement_t;
    OptSchemaName * opt_schema_name_t;
    RollbackStatement * rollback_statement_t;
    OptTransaction * opt_transaction_t;
    OptToSavepoint * opt_to_savepoint_t;
    BeginStatement * begin_statement_t;
    CommitStatement * commit_statement_t;
    UpsertClause * upsert_clause_t;
    UpsertItem * upsert_item_t;
    IndexedColumnList * indexed_column_list_t;
    IndexedColumn * indexed_column_t;
    OptCollate * opt_collate_t;
    Collate* collate_t;
    AssignList * assign_list_t;
    OptOrderOfNull * opt_order_of_null_t;
    NullOfExpr* null_of_expr_t;
    ExistsOrNot* exists_or_not_t;
    AssignClause * assign_clause_t;
    ColumnNameList * column_name_list_t;
    OptUpsertClause * opt_upsert_clause_t;
    PartitionBy* partition_by_t;
    OptPartitionBy* opt_partition_by_t;
    RaiseFunction * raise_function_t;
    ConflictTarget* conflict_target_t;
    OptConflictTarget * opt_conflict_target_t;

    std::vector<char*>* str_vec;
    std::vector<ColumnDef*>* column_vec;
    std::vector<UpdateClause*>* update_vec;
    std::vector<NewExpr*>* expr_vec;
    std::vector<OrderTerm*>* order_vec;

#line 646 "bison_parser.cpp"

};
#line 96 "bison_parser.y"
typedef union HSQL_STYPE HSQL_STYPE;
# define HSQL_STYPE_IS_TRIVIAL 1
# define HSQL_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined HSQL_LTYPE && ! defined HSQL_LTYPE_IS_DECLARED
typedef struct HSQL_LTYPE HSQL_LTYPE;
struct HSQL_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define HSQL_LTYPE_IS_DECLARED 1
# define HSQL_LTYPE_IS_TRIVIAL 1
#endif



int hsql_parse (Program * result, yyscan_t scanner);

#endif /* !YY_HSQL_BISON_PARSER_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL \
             && defined HSQL_STYPE_IS_TRIVIAL && HSQL_STYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3017

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  264
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  187
/* YYNRULES -- Number of rules.  */
#define YYNRULES  522
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  911

#define YYUNDEFTOK  2
#define YYMAXUTOK   501


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   256,   248,     2,
     258,   259,   254,   252,   261,   253,   260,   255,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   262,
     246,   243,   247,   263,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   249,     2,   257,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   244,   245,
     250,   251
};

#if HSQL_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   601,   601,   611,   615,   623,   632,   633,   634,   635,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   659,   665,   674,   679,   685,   694,
     695,   700,   701,   705,   711,   720,   725,   733,   734,   738,
     739,   740,   741,   742,   743,   744,   748,   752,   756,   760,
     768,   772,   779,   785,   791,   799,   805,   813,   818,   825,
     830,   835,   840,   848,   853,   861,   864,   865,   868,   869,
     872,   873,   877,   882,   892,   893,   897,   906,   910,   917,
     926,   935,   940,   948,   953,   961,   965,   969,   976,   977,
     978,   982,   983,   987,   994,  1003,  1007,  1014,  1027,  1035,
    1045,  1053,  1064,  1068,  1081,  1090,  1101,  1116,  1141,  1156,
    1185,  1202,  1203,  1204,  1205,  1206,  1210,  1211,  1214,  1215,
    1216,  1219,  1220,  1224,  1225,  1226,  1230,  1231,  1232,  1233,
    1237,  1238,  1239,  1243,  1244,  1248,  1249,  1253,  1254,  1258,
    1259,  1263,  1264,  1265,  1266,  1270,  1274,  1275,  1279,  1280,
    1283,  1284,  1288,  1292,  1299,  1303,  1307,  1315,  1321,  1328,
    1335,  1345,  1356,  1357,  1361,  1365,  1373,  1379,  1386,  1387,
    1391,  1392,  1393,  1397,  1398,  1402,  1403,  1407,  1408,  1409,
    1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1421,  1431,
    1439,  1446,  1452,  1458,  1463,  1468,  1473,  1478,  1484,  1490,
    1496,  1503,  1504,  1505,  1510,  1511,  1516,  1517,  1518,  1519,
    1520,  1526,  1527,  1528,  1533,  1534,  1535,  1536,  1537,  1538,
    1539,  1540,  1541,  1542,  1543,  1544,  1545,  1546,  1549,  1552,
    1556,  1560,  1563,  1566,  1569,  1570,  1571,  1572,  1573,  1574,
    1575,  1576,  1577,  1581,  1582,  1583,  1584,  1585,  1595,  1604,
    1612,  1621,  1629,  1630,  1631,  1632,  1636,  1637,  1646,  1661,
    1676,  1682,  1688,  1696,  1697,  1701,  1702,  1703,  1707,  1708,
    1717,  1730,  1734,  1740,  1746,  1760,  1771,  1772,  1780,  1781,
    1782,  1783,  1787,  1797,  1805,  1806,  1810,  1814,  1815,  1819,
    1828,  1839,  1840,  1844,  1847,  1854,  1862,  1866,  1867,  1868,
    1872,  1873,  1874,  1875,  1879,  1880,  1881,  1882,  1886,  1887,
    1888,  1892,  1893,  1894,  1895,  1899,  1900,  1904,  1905,  1906,
    1910,  1911,  1917,  1918,  1922,  1923,  1929,  1930,  1931,  1935,
    1936,  1941,  1942,  1946,  1947,  1951,  1952,  1956,  1957,  1961,
    1962,  1966,  1972,  1976,  1977,  1980,  1981,  1985,  1986,  1990,
    2001,  2002,  2003,  2007,  2008,  2009,  2010,  2018,  2019,  2023,
    2026,  2030,  2037,  2045,  2046,  2047,  2050,  2056,  2061,  2067,
    2074,  2082,  2087,  2093,  2099,  2108,  2116,  2124,  2132,  2138,
    2145,  2150,  2158,  2159,  2160,  2161,  2165,  2166,  2167,  2168,
    2169,  2170,  2171,  2172,  2173,  2174,  2175,  2176,  2177,  2178,
    2179,  2180,  2181,  2182,  2185,  2186,  2190,  2194,  2195,  2196,
    2197,  2201,  2202,  2207,  2212,  2222,  2223,  2230,  2237,  2246,
    2247,  2251,  2255,  2256,  2260,  2261,  2266,  2270,  2273,  2274,
    2278,  2284,  2289,  2297,  2307,  2308,  2312,  2321,  2322,  2323,
    2324,  2325,  2329,  2333,  2334,  2335,  2339,  2340,  2341,  2342,
    2343,  2344,  2345,  2346,  2347,  2351,  2355,  2358,  2369,  2370,
    2371,  2375,  2379,  2382,  2386,  2390,  2399,  2405,  2417,  2423,
    2434,  2440,  2451,  2460,  2461,  2462,  2466,  2467,  2472,  2478,
    2487,  2488,  2496,  2497,  2501,  2545,  2549,  2556,  2570,  2571,
    2572,  2573,  2574,  2575,  2576,  2577,  2578,  2579,  2580,  2581,
    2582,  2583,  2584,  2585,  2586,  2587,  2588,  2592,  2593,  2594,
    2598,  2607,  2608,  2612,  2613,  2623,  2624,  2627,  2633,  2638,
    2646,  2659,  2660
};
#endif

#if HSQL_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRING", "IDENTIFIER", "BLOBSTRING",
  "HEXVAL", "EXPVAL", "FLOATVAL", "INTVAL", "DEALLOCATE", "PARAMETERS",
  "INTERSECT", "TEMPORARY", "TIMESTAMP", "CURRENT_TIME", "CURRENT_DATE",
  "CURRENT_TIMESTAMP", "DISTINCT", "RESTRICT", "TRUNCATE", "ANALYZE",
  "BETWEEN", "STRICT", "CASCADE", "COLUMNS", "CONTROL", "DEFAULT",
  "EXECUTE", "EXPLAIN", "INTEGER", "NATURAL", "PREPARE", "PRIMARY",
  "SCHEMAS", "SPATIAL", "VIRTUAL", "DESCRIBE", "BEFORE", "COLUMN",
  "CREATE", "DELETE", "DIRECT", "STORED", "DOUBLE", "ESCAPE", "EXCEPT",
  "EXISTS", "EXTRACT", "GLOBAL", "HAVING", "IMPORT", "INSERT", "ISNULL",
  "OFFSET", "RENAME", "SCHEMA", "SELECT", "SORTED", "TABLES", "UNIQUE",
  "UNLOAD", "UPDATE", "VALUES", "AFTER", "ALTER", "CROSS", "DELTA",
  "FLOAT", "GROUP", "INDEX", "INNER", "LIMIT", "LOCAL", "MERGE", "MINUS",
  "ORDER", "OUTER", "RIGHT", "TABLE", "UNION", "USING", "WHERE", "CALL",
  "CASE", "DATE", "DATETIME", "CHAR", "CHARACTER", "NCHAR", "VARYING",
  "NATIVE", "VARCHAR", "NVARCHAR", "DESC", "DROP", "ELSE", "FILE", "FROM",
  "FULL", "HASH", "HINT", "INTO", "JOIN", "LEFT", "LIKE", "LOAD", "LONG",
  "NULL", "PLAN", "SHOW", "TEXT", "ANY", "STRINGTOKEN", "THEN", "TIME",
  "BLOB", "CLOB", "VIEW", "WHEN", "WITH", "ADD", "ALL", "AND", "ASC",
  "CSV", "END", "FOR", "INT", "KEY", "REAL", "BOOL", "BOOLEAN", "TINYINT",
  "SMALLINT", "MEDIUMINT", "BIGINT", "UNSIGNED", "BIG", "INT2", "INT8",
  "NOT", "OFF", "SET", "TOP", "AS", "BY", "IF", "IN", "IS", "OF", "ON",
  "OR", "TO", "ARRAY", "CONCAT", "ILIKE", "SECOND", "MINUTE", "HOUR",
  "DAY", "MONTH", "YEAR", "TRUE", "FALSE", "PRECISION", "NUMERIC", "NUM",
  "DECIMAL", "FOREIGN", "WITHOUT", "ROWID", "CONSTRAINT", "BLOBSTART",
  "BTWAND", "PRAGMA", "REINDEX", "GENERATED", "ALWAYS", "CHECK",
  "CONFLICT", "IGNORE", "REPLACE", "ROLLBACK", "REFERENCES", "ABORT",
  "FAIL", "AUTOINCR", "AUTOINCREMENT", "BEGIN", "TRIGGER", "TEMP",
  "INSTEAD", "EACH", "ROW", "OVER", "FILTER", "PARTITION", "CURRENT",
  "EXCLUDE", "FOLLOWING", "GROUPS", "NO", "OTHERS", "PRECEDING", "RANGE",
  "ROWS", "TIES", "UNBOUNDED", "WINDOW", "ATTACH", "DETACH", "DATABASE",
  "INDEXED", "CAST", "SAVEPOINT", "RELEASE", "VACUUM", "TRANSACTION",
  "DEFFERED", "EXCLUSIVE", "IMEDIATE", "COMMIT", "GLOB", "MATCH", "REGEXP",
  "NOTHING", "NULLS", "LAST", "FIRST", "DO", "COLLATE", "RAISE",
  "RECURSIVE", "RETURNING", "ACTION", "DEFERRABLE", "DEFERRED",
  "IMMEDIATE", "INITIALLY", "NOTNULL", "NOTEQUALS", "EQUALS", "'='",
  "LESSEQ", "GREATEREQ", "'<'", "'>'", "'&'", "'|'", "LSHIFT", "RSHIFT",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'~'", "'('", "')'", "'.'", "','",
  "';'", "'?'", "$accept", "input", "statement_list", "statement",
  "preparable_statement", "release_statement", "pragma_statement",
  "reindex_statement", "analyze_statement", "attach_statement",
  "detach_statement", "pragma_key", "pragma_value", "schema_name",
  "pragma_name", "savepoint_statement", "rollback_statement",
  "opt_transaction", "opt_to_savepoint", "vacuum_statement",
  "opt_schema_name", "begin_statement", "commit_statement", "partition_by",
  "opt_partition_by", "opt_upsert_clause", "upsert_clause", "upsert_item",
  "opt_conflict_target", "conflict_target", "indexed_column_list",
  "indexed_column", "collate", "opt_collate", "assign_list",
  "opt_order_of_null", "null_of_expr", "exists_or_not", "assign_clause",
  "column_name_list", "file_path", "alter_statement", "opt_column",
  "create_table_statement", "create_view_statement",
  "create_index_statement", "create_virtual_table_statement",
  "create_trigger_statement", "create_statement", "opt_without_rowid",
  "opt_strict", "opt_unique", "opt_tmp", "opt_trigger_time",
  "trigger_event", "opt_of_column_list", "opt_for_each", "opt_when",
  "trigger_cmd_list", "trigger_cmd", "module_name", "opt_not",
  "opt_recursive", "opt_if_not_exists", "column_def_list",
  "table_constraint_list", "table_constraint", "column_def",
  "opt_column_constraintlist", "column_constraintlist",
  "opt_constraint_name", "opt_deferrable_clause", "deferrable_clause",
  "opt_foreign_key_on_list", "foreign_key_on_list", "foreign_key_on",
  "foreign_key_clause", "column_constraint", "opt_stored_virtual",
  "opt_conflict_clause", "resolve_type", "opt_autoinc", "column_type",
  "drop_table_statement", "drop_index_statement", "drop_view_statement",
  "drop_trigger_statement", "drop_statement", "opt_if_exists",
  "delete_statement", "insert_statement", "insert_value", "update_type",
  "insert_type", "opt_column_list_paren", "update_statement",
  "update_clause_list", "update_clause", "select_statement",
  "select_core_list", "set_operator", "select_core", "opt_window_clause",
  "window_clause", "windowdefn_list", "windowdefn", "window_body",
  "opt_base_window_name", "window_name", "opt_frame", "range_or_rows",
  "frame_bound_s", "frame_bound_e", "frame_bound", "frame_exclude",
  "opt_frame_exclude", "opt_distinct", "result_column_list",
  "opt_returning_clause", "returning_column_list", "result_column",
  "returning_column", "opt_from_clause", "from_clause", "opt_where",
  "opt_else_expr", "opt_escape_expr", "opt_group", "opt_having",
  "opt_order", "order_list", "order_term", "opt_order_type", "opt_limit",
  "expr_list_paren_list", "expr_list_paren", "expr_list", "function_name",
  "function_args", "new_expr", "unary_op", "binary_op", "in_op",
  "similar_bop", "in_target", "raise_function", "opt_expr",
  "case_condition", "case_condition_list", "opt_over_clause",
  "filter_clause", "opt_filter_clause", "one_column_name", "column_name",
  "literal", "string_literal", "signed_number", "numeric_literal",
  "null_literal", "blob_literal", "param_expr", "opt_index", "on_expr",
  "else_expr", "where_expr", "escape_expr", "qualified_table_name",
  "trigger_name", "index_name", "table_name", "table_alias",
  "opt_table_alias", "opt_table_alias_as", "column_alias",
  "opt_column_alias", "opt_with_clause", "with_clause",
  "common_table_expr_list", "common_table_expr", "join_op",
  "join_constraint", "join_suffix", "join_suffix_list", "join_clause",
  "table_or_subquery_list", "table_or_subquery", "opt_semicolon", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,    61,   498,   499,    60,    62,    38,   124,
     500,   501,    43,    45,    42,    47,    37,   126,    40,    41,
      46,    44,    59,    63
};
# endif

#define YYPACT_NINF (-712)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-472)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -167,  -167,   130,  2705,  -712,  -712,   138,    71,    67,   -15,
      -7,   -29,   305,   138,   -29,   133,   568,    20,   315,    25,
     320,   -29,  -167,  -712,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,  -712,   271,  -712,   -30,  -712,  -712,   262,  -712,  -712,
     295,   -13,   138,   245,   245,   245,   245,  -712,   138,  -712,
    -712,   114,    99,   126,  -712,  -712,   267,   -29,   -29,   -29,
    -712,  -712,  -162,  -712,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,  -712,   908,  -712,   349,  -712,  -712,  -712,   908,   180,
     196,  -712,  -712,  -712,  -712,   769,  -712,   200,   203,  2114,
     908,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,   320,  -712,  -712,  -712,   445,  -712,   364,  -712,  1503,
     379,   159,    52,   346,   247,   401,   138,   138,   279,  -712,
     500,   368,   368,   368,   368,   368,   205,   469,   513,   138,
     138,   517,   264,   265,  -712,   990,   990,   519,    26,  -712,
    -712,  -712,  -712,    12,  2159,   405,  -712,  2186,   908,   228,
     266,   134,  1360,   244,   407,     4,  -712,  -712,   420,   320,
    -712,  -712,  -712,   525,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,  -712,  -712,    14,   908,  1360,  -712,  -712,   527,  -712,
     138,  -712,   259,  -712,  -712,   956,   259,   908,   272,  -712,
    -712,   388,   387,   387,  -712,  -712,   391,   412,   244,   466,
    -712,   398,   138,   513,   138,   138,   517,    19,   501,   501,
    -712,   281,  -712,  -712,  -712,   285,  -712,    40,   399,   138,
    -712,  -712,  -712,  -712,  -712,   151,   151,  -712,  -712,  -712,
    -712,   287,  -712,  -712,  -712,   543,  -712,  -712,  -712,   908,
    -712,   -11,   320,  2320,   289,   288,   290,   291,  -712,  -712,
     908,   294,  -712,   908,   296,  -712,  -712,  -712,   908,  -712,
    -712,  -712,  -712,  -712,     9,   908,  1360,  -712,  -712,   472,
    -712,  -712,  -712,  -712,  -712,   454,   142,  1032,   -45,  -712,
    1092,   298,  -712,   187,   247,    10,   555,   -79,   264,   908,
    -712,  -712,   908,  -712,   515,   479,   413,   -82,   264,    86,
    -712,   138,    40,    40,   561,   562,   563,   309,   191,  -712,
     321,  -712,  -712,  -712,  -712,  -712,  2363,   908,   452,  -712,
    -712,  -712,  2849,  -712,   578,   585,   586,  1360,  -712,   329,
     395,  2403,   503,  -712,  -712,  1305,   908,   359,  -712,  -712,
      42,    15,   956,   472,    47,  -712,   590,  -712,  -712,   341,
    -712,  -712,   337,    40,   -44,  -712,   355,  -712,  -712,   386,
     455,  -712,   101,   339,  -712,  1360,  1244,  -712,   598,   138,
     407,   561,   458,  -712,  -712,   456,   308,  -712,   457,  -712,
    2849,  -712,  -712,  -712,  -712,    40,   407,   908,  2537,  -712,
    -712,   440,  -712,  -712,  -712,   350,   351,   354,   526,   528,
     360,   361,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,  -712,  -712,  -712,  -712,  -712,   475,  -712,  -712,  -712,
    -712,   363,   358,   369,   373,   374,   376,  -712,   427,   908,
    -712,   377,   198,   908,  -712,  -712,  1360,   972,  -712,   371,
      23,    55,  -712,   380,    66,  -712,   569,  -712,  -712,  -712,
      30,   204,    10,   472,   908,  -712,   633,   577,   247,   359,
     491,   908,  1421,    -3,   908,   908,  -712,   264,   396,  -712,
     222,  -712,   407,  -712,  -712,  -712,   505,   502,    41,   283,
    -712,   397,  1909,  -712,   651,   652,   653,   406,   410,   654,
     656,   541,   661,  -712,  -712,  -712,  -712,   472,    16,  -712,
    1360,  -712,  -712,   181,    60,   411,  -712,  1092,   414,   416,
     223,   555,  -712,   -79,    15,   319,   574,   575,   121,   215,
    -712,   243,  -712,    15,  -712,    66,   533,   462,   438,  -712,
     359,  1360,  -712,  -712,   -83,  -712,   504,  -712,   491,  -712,
    -712,  -712,  -712,   459,  1360,  1360,   512,   908,   512,    46,
    -712,    40,  -712,   138,  -712,    32,   425,   681,   514,  -712,
    -712,   283,    44,  -712,  -712,   431,   432,   434,   685,   687,
     446,   447,  -712,   436,   448,  -712,   704,  -712,   956,  -712,
      55,  -712,  -712,  -712,  -712,  -712,   610,   613,   255,   261,
    -712,   270,  -712,  -712,   615,  -712,   616,  -712,   617,  -712,
       2,  -712,   908,   717,  -712,  -712,   908,  -712,  -712,   464,
    -712,   188,  -712,   552,  -712,   226,  -712,  1586,    -6,    43,
    -712,  -712,    78,   463,   600,   908,  -712,  -712,  -712,   908,
    -712,   580,  -712,   599,   582,  -712,   471,   730,   628,  -712,
    -712,  -712,  -712,   478,   481,  -712,  -712,   729,  -712,  -712,
     482,   547,  -712,  -712,  -712,  -712,   643,  -712,   645,  -712,
     646,  -712,  -712,  -712,  -712,   494,   908,  -712,  -712,   -17,
     492,  -712,   609,  1360,   908,   529,  -712,  -712,  -712,  -712,
     472,   908,    -3,  -712,   735,  -712,   512,   591,  -712,   635,
     507,   638,   511,   588,   668,  1628,  1655,   531,    -3,   611,
    -712,   908,   264,   582,  -712,  -712,   534,  -712,   624,  -712,
     714,  -712,  -712,  -712,    40,  1360,   908,  -712,   717,   536,
     227,   -19,  -712,  -712,  -712,  -712,    -6,  -712,   537,   908,
     538,   908,   603,   908,   612,  -712,   186,   908,   582,   259,
    1702,   -61,  -712,  -712,   908,   202,   230,  1360,  -712,   704,
     472,   655,  -712,  -712,   908,   231,    40,  1771,  -712,  2567,
     407,  -712,  -712,  -712,  1836,   239,  -712,  -712,   184,   767,
     -28,   -61,  -712,   329,  -712,  -712,  -712,  -712,   372,  -712,
     540,  -712,    11,   234,   582,   235,  -712,   246,   542,  -712,
    -712,  -712,  -712,   186,  -712,  -712,  -712,    50,    54,  -712,
     566,  -712,  -712,  -712,   642,   614,   605,   608,  2620,  -712,
      40,   -59,  -712,   567,   582,  -712,   627,  -712,   550,  -712,
    -712,  -712,  -712,    48,   579,  -712,  -712,    65,   584,   589,
     623,   619,   650,  1976,  -712,  -712,   137,  -712,  -712,  -712,
     238,    11,  -712,   908,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,  -712,  -712,   236,  -712,  -712,   695,  -712,  -712,  -712,
     636,   626,  -712,   592,  -712,  1360,  -712,  -712,   639,   632,
     608,  2043,  -712,  -712,   908,  -712,  -712,  -712,  -712,  -712,
    1360
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     522,   522,     0,   483,   521,     1,    31,   125,     0,     0,
     149,    51,     0,    29,    51,    51,     0,     0,     0,     0,
      58,    51,   522,     3,     5,    18,    16,    17,     7,     8,
      13,    20,    19,    23,     9,    10,     6,   111,   112,   113,
     114,   115,    11,   252,   253,   254,   255,    14,    12,    15,
      22,    21,     0,   482,   470,    32,   124,     0,   121,   123,
       0,     0,     0,   257,   257,   257,   257,   148,     0,    50,
      64,    47,    26,     0,    37,    30,    54,    51,    51,    51,
      59,   442,   430,   456,   448,   449,   446,   447,   452,   453,
     454,    91,   420,   455,   384,   450,   451,   431,     0,     0,
       0,   383,   382,   435,   385,   483,   457,     0,     0,   147,
       0,   380,   434,   367,   366,   438,   437,   440,   439,   441,
      46,     0,    35,    48,    25,     0,    57,    56,    63,   483,
       0,     0,   319,   263,     0,     0,     0,     0,   346,   276,
       0,   151,   151,   151,   151,   151,     0,     0,     0,     0,
       0,     0,   269,   484,   485,     0,     0,     0,     0,    49,
      60,    62,    61,     0,   147,     0,    92,   147,     0,     0,
       0,     0,   360,     0,   483,   319,    88,   404,   146,     0,
     403,   405,   386,     0,    89,   402,   401,   400,   397,   399,
     396,   398,   394,   395,   392,   393,   390,   391,   387,   388,
     389,   373,   375,     0,     0,   368,    36,    24,     0,     4,
       0,   265,     0,   317,   318,     0,     0,     0,   283,   357,
     266,     0,   477,   477,   280,   281,     0,   278,     0,   356,
     471,     0,     0,     0,     0,     0,     0,   103,   103,   103,
     256,   468,   249,   248,   250,   466,   251,     0,     0,     0,
      41,    45,    44,    43,    42,     0,     0,    27,    40,    39,
     443,     0,    47,    38,    52,     0,   432,   433,   436,     0,
     422,   338,     0,   147,     0,     0,     0,     0,   381,   371,
       0,     0,   364,     0,     0,    90,    33,    80,     0,   407,
     406,   408,   409,   410,     0,     0,   369,    55,    97,   336,
     208,   209,   210,   206,   207,     0,   430,   327,   332,   320,
     481,     0,   264,     0,     0,     0,     0,   460,   269,     0,
     279,   277,     0,   275,     0,     0,     0,     0,   269,   129,
     102,     0,     0,     0,     0,     0,     0,   430,     0,    95,
       0,   486,   444,   445,    28,    53,   147,     0,     0,   423,
     337,    34,   247,   415,     0,     0,     0,   361,   378,   363,
     429,   147,   483,   377,   414,   340,     0,   323,   335,   267,
       0,     0,     0,   336,   481,   478,     0,   480,   326,     0,
     359,   358,   430,     0,   332,   271,     0,   472,   476,     0,
       0,   465,   483,   345,   347,    82,   353,   150,     0,     0,
     483,     0,     0,   126,   127,     0,     0,    98,     0,   101,
     247,   100,   469,   467,   268,     0,   483,     0,   147,   379,
     217,   225,   224,   243,   244,     0,     0,     0,     0,     0,
       0,     0,   223,   234,   246,   245,   236,   235,   214,   237,
     240,   241,   218,   219,   220,   221,     0,   215,   216,   238,
     239,     0,     0,     0,     0,     0,     0,   428,   426,     0,
     411,     0,     0,     0,   374,   339,   463,     0,   258,   432,
     483,   475,   333,   334,   513,   321,   342,   331,   479,   328,
       0,     0,     0,   336,     0,   459,     0,     0,     0,   323,
      69,     0,    81,   352,     0,     0,   145,   269,     0,   104,
       0,   152,   483,   128,   130,   131,   134,     0,     0,   163,
      96,     0,   147,   226,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   372,   416,   417,   418,     0,     0,   370,
     376,   412,   413,   464,   435,   322,   324,   481,     0,     0,
       0,     0,   473,   460,     0,     0,     0,     0,     0,     0,
     489,     0,   488,     0,   511,   514,     0,   285,     0,   272,
     323,   273,   458,   262,    69,   259,     0,   261,    68,    70,
     348,   351,   350,    87,   354,   355,   117,     0,   117,   167,
     107,     0,   132,     0,    99,     0,     0,     0,     0,   196,
     161,   162,   147,   165,   487,     0,     0,     0,     0,     0,
       0,     0,   222,     0,     0,   293,   292,   424,     0,   329,
     475,   520,   518,   474,   519,   516,     0,     0,     0,     0,
     494,     0,   493,   492,     0,   499,     0,   503,     0,   490,
     509,   512,     0,     0,   282,   284,     0,   270,   260,    75,
      71,     0,   349,     0,   109,     0,    77,   147,   120,   167,
     154,   153,     0,   133,   136,     0,   194,   195,   437,     0,
     166,   200,   164,     0,   205,   146,     0,     0,     0,   197,
     227,   228,   231,     0,     0,   229,   233,     0,   427,   291,
       0,    67,   325,   517,   498,   497,     0,   501,     0,   505,
       0,   495,   500,   504,   491,     0,     0,   507,   510,   344,
     286,   287,     0,   274,     0,     0,    74,    86,    85,   116,
     336,     0,   352,   118,     0,   105,   117,   167,   155,     0,
       0,     0,     0,     0,   138,   147,   147,     0,   352,     0,
     191,     0,   269,   205,   230,   232,     0,   425,     0,    66,
     346,   502,   506,   496,     0,   461,     0,   341,     0,     0,
       0,     0,   108,    78,    79,   119,   120,   156,     0,     0,
       0,     0,     0,     0,     0,   193,   203,     0,   205,     0,
     147,   174,   190,   242,     0,   296,     0,   343,   288,   292,
     336,     0,    72,   106,     0,     0,     0,   147,   135,   147,
     483,   202,   201,   199,   147,   213,   204,   192,     0,     0,
     169,   173,   175,    65,   299,   297,   298,   290,     0,   508,
       0,    76,     0,     0,   205,     0,   157,   483,     0,   144,
     143,   142,   141,   203,   211,   212,   189,     0,     0,   187,
       0,   188,   168,   176,     0,     0,     0,   316,   147,   289,
       0,   336,    83,     0,   205,   159,     0,   110,     0,   139,
     198,   180,   179,     0,     0,   185,   184,     0,     0,   170,
       0,     0,     0,   147,   309,   308,     0,   315,   294,   310,
       0,     0,    73,     0,   158,   160,   140,   178,   177,   181,
     183,   182,   186,     0,   301,   300,     0,   303,   302,   313,
       0,     0,   314,     0,    84,    93,   171,   172,     0,     0,
     316,   147,   312,   311,     0,   305,   304,   295,   307,   306,
      94
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -712,  -712,  -712,   698,  -712,  -712,  -712,  -712,  -712,  -712,
    -712,  -712,   678,     8,   680,  -712,  -712,   284,  -712,  -712,
    -712,  -712,  -712,  -712,  -712,   274,  -712,   273,  -712,  -712,
    -605,   128,  -364,   195,  -712,  -712,  -712,  -712,   -27,  -376,
    -712,  -712,   263,  -712,  -712,  -712,  -712,  -712,  -712,  -522,
      87,  -712,  -712,  -712,  -712,  -712,  -712,  -712,  -712,    28,
    -712,  -550,  -712,   327,  -712,  -712,  -533,  -369,  -712,  -712,
    -444,  -712,  -712,  -712,  -712,    45,     1,   257,    29,  -653,
    -212,  -712,   439,  -712,  -712,  -712,  -712,  -712,   318,  -711,
    -703,  -712,  -712,  -712,  -307,  -697,  -712,   378,  -103,  -712,
    -712,   634,  -712,  -712,  -712,   103,    75,  -712,   333,  -712,
    -712,  -712,  -712,  -712,  -712,   -37,   689,  -712,  -356,  -712,
    -354,  -712,   483,  -712,  -365,  -712,  -712,  -712,  -712,   115,
    -712,   381,  -626,  -712,   383,   551,  -211,  -712,  -712,   -16,
    -712,  -712,  -712,  -712,  -712,  -712,  -712,   597,  -712,  -712,
    -712,  -712,  -263,  -244,   293,   132,   297,  -146,  -712,  -712,
    -712,   326,  -712,  -712,   348,  -712,   663,   640,   647,    -1,
    -290,   269,   658,  -712,  -317,    -2,  -712,  -712,   637,  -712,
    -712,   328,  -712,   415,   417,  -236,   347
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    72,   257,    73,    74,    31,    32,    70,   159,    33,
     127,    34,    35,   739,   740,   567,   568,   569,   705,   706,
     645,   646,   201,   493,   841,   642,   202,   107,   842,   338,
     297,    36,   332,    37,    38,    39,    40,    41,    42,   644,
     715,    60,    61,   406,   507,   582,   724,   764,   817,   818,
     497,   203,    68,   232,   500,   649,   650,   411,   590,   591,
     652,   831,   832,   800,   801,   802,   669,   593,   793,   730,
     305,   826,   452,    43,    44,    45,    46,    47,   148,    48,
      49,   489,   136,   137,   248,    50,   384,   385,    51,   138,
     228,   139,   634,   635,   700,   701,   680,   681,   702,   807,
     808,   862,   900,   837,   867,   868,   215,   308,   468,   535,
     309,   536,   373,   374,   367,   348,   464,   557,   747,   229,
     393,   394,   573,   323,   218,   219,   171,   108,   284,   172,
     110,   204,   294,   295,   363,   111,   165,   270,   271,   529,
     457,   458,   112,   113,   114,   115,   259,   116,   117,   118,
     119,   391,   697,   350,   368,   465,   221,   246,   242,   471,
     542,   543,   317,   377,   378,   173,    53,   153,   154,   553,
     698,   554,   555,   472,   473,   474,     3
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     109,    52,   170,   339,   312,    55,   313,   481,   476,   260,
     260,   392,    75,    54,   382,   337,   266,   713,   475,    54,
     605,   402,   213,   366,   120,   122,   388,    54,   126,   124,
     264,   492,   501,   746,   266,    81,   288,    83,    84,    85,
      86,    87,   668,   781,   337,   382,   469,    88,    89,    90,
     410,   375,   386,   371,   371,    63,   648,   477,   330,   387,
    -330,   146,   389,   400,    64,   592,   143,   152,   566,   851,
     213,   281,   359,   855,   852,   877,   164,   663,   856,   819,
     772,  -330,   167,   695,    56,   347,   754,   820,   408,   409,
     798,   571,   880,   821,   205,     1,  -362,   545,   163,   750,
    -330,  -330,   768,    65,   664,   144,   819,    57,   269,   342,
     343,   719,  -330,   665,   820,   795,   718,  -330,   560,   289,
     821,   572,  -330,  -330,   403,  -330,   214,    52,   487,   206,
       5,    58,   546,   565,   390,   222,   223,   547,   720,   339,
      93,  -122,    54,    10,   548,   589,    62,   592,   243,   244,
     404,   462,   273,   696,   785,  -330,   878,    84,    85,    86,
      87,   845,   290,   799,   488,   549,    88,    89,    90,   550,
     551,   510,   331,   881,   214,    66,   401,   145,   314,   813,
    -330,    97,    97,   267,   757,   665,  -330,   286,   296,    69,
     576,   874,   376,   853,   756,    95,    96,   857,   624,   310,
     541,   267,   871,  -147,   637,   653,   889,   782,  -147,   222,
     651,    97,    97,   267,   311,   587,   372,   482,   587,   386,
     609,    10,   791,   666,   625,   827,    67,   589,   667,   792,
     140,   325,   121,   327,   328,  -330,  -330,   291,   292,   293,
     125,   265,  -330,  -330,   280,   584,   828,   721,   152,  -330,
     830,   613,   854,   346,   682,   714,   858,   722,   282,   461,
     237,   211,    59,  -365,   357,   103,   268,   362,   383,   840,
    -330,  -330,   361,   470,   606,  -330,  -330,  -330,   405,   365,
     351,   470,  -330,   492,   255,   256,  -147,   258,   258,   490,
     655,   224,   626,   364,   103,   106,   268,   499,    76,    80,
     238,   132,   716,   395,   717,   128,   396,   134,   615,    71,
     585,   212,   130,   511,    95,    96,  -167,   630,   627,   123,
     628,  -330,  -330,   131,   120,   225,   239,   552,   132,  -147,
     407,   418,   686,   133,   134,   890,   182,   339,   688,   891,
     298,   141,   155,  -167,   892,   752,   629,   690,     4,   504,
     466,    69,    77,    78,    79,   226,   310,   156,   687,   227,
     505,   160,   161,   162,   689,   142,    10,   538,   776,   129,
     506,   311,   847,   691,   -46,    81,    82,    83,    84,    85,
      86,    87,   149,   150,   151,   616,   157,    88,    89,    90,
     617,  -167,   147,   279,   834,   280,   166,   618,   498,   580,
    -362,   512,   370,   804,  -147,  -147,  -147,   805,   806,   274,
     815,   275,   183,   276,   277,   811,   707,   708,   619,    91,
     158,   699,   620,   621,  -167,   771,   824,   825,   586,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   168,   658,
     300,   301,   302,   530,   303,   304,   380,   533,   280,   207,
     414,   537,   415,   135,   169,   587,    92,   532,   174,   280,
     588,   175,  -167,   558,   870,   415,   208,  -167,   561,   233,
     234,   235,   236,   896,   897,   395,   872,   210,   574,   575,
      93,   578,   612,   579,   544,   710,   780,   711,   711,   809,
     814,   415,   711,   844,   846,   711,   415,   893,   216,   415,
     339,   333,   334,   220,   230,   217,    81,    82,    83,    84,
      85,    86,    87,    94,   183,   231,   240,   241,    88,    89,
      90,   245,   247,   262,   269,   278,   249,    10,   285,   287,
      81,   315,   316,   314,   320,    95,    96,   319,   322,   324,
     330,   335,   339,    97,   340,   336,   344,   345,   353,   354,
      91,   355,   356,   358,   366,   360,   369,   796,   379,   387,
     398,   647,   397,   803,   399,   410,   412,   413,   843,   163,
     835,    81,    82,    83,    84,    85,    86,    87,   419,   416,
     836,   453,   654,    88,    89,    90,    99,    92,   454,   455,
     280,   456,   310,   467,   478,   479,   339,   480,   484,   485,
     491,   486,   496,   502,   100,   513,   503,   311,   514,   515,
     508,    93,   516,   521,   517,    91,   518,   523,   519,   520,
     703,   522,   528,    10,   101,   102,   103,   843,   524,   104,
     105,  -471,   525,   526,   527,   106,   531,   562,   556,   725,
     563,   544,   566,   726,    94,    81,    82,    83,    84,    85,
      86,    87,    92,   583,   577,   581,   594,    88,    89,    90,
     595,   596,   597,   600,   598,   601,    95,    96,   599,   602,
     603,   633,   608,   610,    97,   611,    93,   622,   623,   632,
     745,   636,   643,   659,   639,   660,   641,   822,   647,    91,
     670,   671,   661,   672,   673,   647,   674,   677,    81,    82,
      83,    84,    85,    86,    87,   675,   676,   678,   679,    94,
      88,    89,    90,   684,   822,   770,   685,    99,   692,   693,
     694,   605,   704,   709,   415,   727,    92,   723,   728,   731,
     777,    95,    96,   729,   732,   100,   733,   734,   736,    97,
     735,   737,    91,   647,   738,   787,   741,   789,   742,   743,
      93,   794,   744,   748,   749,   101,   102,   103,   755,   751,
     104,   105,   460,   587,   758,   759,   106,   760,   647,   761,
     774,   829,    81,    82,    83,    84,    85,    86,    87,    92,
      98,   762,    99,    94,    88,    89,    90,   763,    52,   767,
     226,   769,   838,   773,   779,   784,   786,   788,   812,   839,
     100,   790,   859,    93,   849,    95,    96,   866,   864,   865,
     873,   667,   876,    97,   879,    52,    91,   884,   863,   882,
     101,   102,   103,   885,   886,   104,   105,   209,   883,   903,
     902,   106,   906,   905,   261,   904,    94,   263,   638,   753,
     860,   640,   712,   783,   894,   848,   833,   875,   662,   509,
     861,   778,   850,    92,   810,   775,    99,   895,    95,    96,
     559,   607,   321,   907,   283,   381,    97,   483,   349,   614,
     901,   564,   570,   299,   100,   604,   329,    93,   656,   683,
     326,   318,   657,   631,     0,   539,   341,   540,   910,    10,
       0,     0,     0,   898,   101,   102,   103,     0,     0,   104,
     105,     0,     0,   899,     0,   106,     0,     0,     0,    99,
      94,    81,    82,    83,    84,    85,    86,    87,     0,     0,
       0,     0,     0,    88,    89,    90,     0,   100,     0,     0,
       0,     0,    95,    96,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,     0,   101,   102,   103,
       0,     0,   104,   105,     0,    91,     0,     0,   106,    81,
     306,    83,    84,    85,    86,    87,     0,     0,     0,     0,
       0,    88,    89,    90,     0,    81,    82,    83,    84,    85,
      86,    87,     0,    99,     0,     0,     0,    88,    89,    90,
       0,     0,    92,    81,   250,     0,    84,    85,    86,    87,
       0,   100,     0,    91,     0,    88,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,    93,   251,     0,    91,
       0,   101,   102,   103,     0,     0,   104,   105,     0,     0,
       0,   252,   106,     0,     0,     0,  -435,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,  -435,     0,    92,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,     0,     0,     0,     0,    97,
      93,     0,     0,     0,     0,  -435,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   375,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,  -147,     0,     0,     0,     0,    95,
      96,     0,    99,     0,     0,     0,     0,    97,     0,     0,
       0,     0,   253,     0,     0,    95,    96,  -435,     0,     0,
     100,   254,     0,    97,     0,   176,     0,     0,     0,     0,
       0,     0,     0,    95,    96,  -435,     0,     0,     0,     0,
     101,   102,   103,     0,     0,   104,   105,     0,     0,     0,
      99,   106,     0,  -435,     0,     0,     0,  -435,     0,     0,
    -435,  -435,     0,     0,  -435,     0,    99,  -435,   100,     0,
       0,     0,     0,     0,     0,     0,     0,  -147,     0,     0,
       0,     0,     0,     0,   100,     0,     0,     0,   101,   102,
     307,     0,     0,   104,   105,   177,     0,     0,     0,   106,
       0,     0,     0,     0,   101,   102,   534,     0,     0,   104,
     105,     0,     0,   178,     0,   106,     0,   376,     0,     0,
    -147,   180,   255,   256,   181,     0,     0,   182,     0,     0,
       0,     0,     0,     0,     0,  -435,  -435,  -435,     0,     0,
       0,     0,     0,  -435,     0,     0,  -147,     0,     0,     0,
       0,     0,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,
    -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,  -435,     0,
       0,     0,     0,     0,     0,     0,     0,   176,   494,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -147,  -147,  -147,     0,     0,
       0,     0,     0,   183,     0,     0,     0,  -147,     0,     0,
       0,     0,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,  -147,
     463,     0,     0,     0,     0,     0,     0,     0,   176,     0,
       0,     0,     0,     0,     0,     0,     0,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -147,     0,     0,   178,     0,     0,     0,     0,
       0,     0,  -147,   180,     0,     0,   181,     0,     0,   182,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -147,     0,     0,   176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -373,     0,     0,   178,     0,     0,     0,
       0,     0,     0,  -147,   180,     0,     0,   181,     0,     0,
     182,     0,     0,     0,     0,  -147,     0,  -147,  -147,  -147,
       0,     0,     0,     0,  -373,   183,     0,     0,     0,     0,
       0,     0,     0,   177,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   178,     0,    -2,     0,   495,     0,     0,  -147,   180,
       0,     0,   181,     0,     0,   182,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,  -373,     0,  -147,  -147,
    -147,     0,     0,     0,     0,     0,   183,     0,     0,     0,
       0,     0,     0,     7,  -373,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,  -373,     0,     0,     0,     0,     0,     8,  -373,
    -373,     0,     0,  -373,     0,     0,  -373,     0,     0,     0,
       0,     0,     0,  -147,  -147,  -147,     0,     0,     0,     0,
       0,   183,     0,     0,     0,     0,     0,     0,     9,     0,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,     0,     0,     0,  -373,  -373,  -373,     0,     0,     0,
       0,     0,  -373,     0,     0,     0,     0,     0,     0,     0,
       0,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,    12,    13,
     -82,   176,     0,     0,     0,     0,    14,     0,     0,     0,
       0,     0,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   176,   177,
     -82,     0,     0,    16,    17,     0,     0,     0,    18,    19,
      20,     0,     0,     0,     0,    21,     0,   178,     0,     0,
       0,     0,     0,     0,     0,   180,     0,     0,   181,     0,
       0,   182,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   177,     0,     0,     0,   176,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   178,
       0,     0,     0,     0,     0,     0,     0,   180,   177,     0,
     181,     0,     0,   182,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,     0,     0,     0,
       0,     0,     0,     0,   180,     0,     0,   181,     0,     0,
     182,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,     0,     0,     0,   176,   177,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   178,     0,   -82,     0,   -82,     0,     0,
       0,   180,     0,     0,   181,     0,     0,   182,     0,   183,
       0,     0,     0,     0,     0,     0,     0,     0,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,     0,   183,   765,     0,   176,
       0,     0,     0,     0,   177,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   178,     0,   766,     0,     0,     0,     0,     0,
     180,     0,     0,   181,     0,     0,   182,     0,     0,     0,
       0,     0,     0,   183,     0,     0,     0,     0,     0,     0,
       0,     0,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   177,
       0,   797,   176,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
       0,     0,     0,     0,     0,   180,     0,     0,   181,     0,
       0,   182,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   183,     0,     0,  -421,     0,     0,     0,     0,
       0,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,  -421,   176,
     816,     0,   177,     0,     0,  -421,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     178,     0,     0,     0,     0,     0,     0,     0,   180,     0,
       0,   181,     0,     0,   182,     0,     0,   183,     0,     0,
       0,     0,     0,     0,     0,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,     0,     0,   823,   176,     0,     0,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
       0,     0,     0,     0,     0,   180,     0,     0,   181,     0,
       0,   182,     0,     0,     0,     0,     0,     0,     0,     0,
     183,     0,     0,     0,     0,     0,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   177,   176,     0,     0,
       0,     0,     0,     0,     0,     0,   887,     0,     0,     0,
     888,     0,     0,     0,   178,     0,     0,     0,     0,     0,
       0,     0,   180,     0,     0,   181,     0,     0,   182,     0,
       0,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,     0,   176,     0,     0,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,     0,     0,     0,     0,   177,     0,   176,
       0,     0,     0,   908,     0,     0,     0,   909,     0,     0,
       0,     0,     0,     0,     0,   178,     0,     0,     0,   179,
       0,     0,     0,   180,     0,     0,   181,     0,     0,   182,
       0,     0,     0,     0,   183,     0,     0,     0,  -419,     0,
       0,     0,   177,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     178,     0,     0,     0,     0,     0,     0,     0,   180,   177,
       0,   181,     0,     0,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   178,     0,     0,
       0,   272,     0,     0,     0,   180,     0,     0,   181,     0,
       0,   182,     0,     0,     0,   183,     0,     0,     0,     0,
       0,     0,     0,     0,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,     0,     0,   176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     183,     0,     0,     0,     0,     0,     0,     0,     0,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   176,   183,     0,     0,
       0,     0,     0,     0,     0,     0,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   176,     0,     0,     0,
       0,   178,     0,     0,     0,   352,     0,     0,     0,   180,
       0,     0,   181,     0,     0,   182,     0,   417,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,     0,     0,     0,     0,     0,
       0,     0,   180,     0,     0,   181,     0,     0,   182,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   178,     0,     0,     0,     0,     0,
       0,   183,   180,     0,     0,   181,     0,     0,   182,     0,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   459,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     176,     0,     0,     0,   183,     0,     0,     0,     0,     0,
       0,     0,     0,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     176,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   183,     0,     0,     0,     0,     0,
       0,     0,     0,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     177,     0,     0,  -462,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,   180,     0,     0,   181,
     177,     0,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   178,     0,
       0,     0,     0,     0,     0,     0,   180,     0,     0,   181,
       0,     0,   182,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   177,     0,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -137,     0,     0,     0,
       0,   178,     0,     0,     0,     0,     0,     0,   183,   180,
       8,     0,   181,     0,     0,   182,     0,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,     0,     0,     0,     0,   183,     0,
       9,     0,     0,     0,     0,     0,     0,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   869,    10,     0,     0,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   183,     0,     0,     0,     0,     0,     0,     0,     0,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,     0,     0,   420,
      12,    13,     0,     0,     0,     0,     0,     0,    14,     0,
       0,     0,     0,   421,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,    17,   422,     0,     0,
      18,    19,    20,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,   423,   424,   425,   426,   427,   428,
     429,   430,   431,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   432,     0,     0,     0,
     433,   434,   435,     0,     0,   436,   437,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   438,     0,   439,
     440,   441,   442,   443,   444,   445,   446,     0,   447,   448,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   449,   450,   451
};

static const yytype_int16 yycheck[] =
{
      16,     3,   105,   247,   216,     6,   217,   383,   373,   155,
     156,   318,    13,     4,     4,     4,     4,    23,   372,     4,
       4,   328,    18,    82,     4,    17,   316,     4,    20,     4,
       4,   395,   401,    50,     4,     3,    22,     5,     6,     7,
       8,     9,   592,    62,     4,     4,     4,    15,    16,    17,
       4,     4,   315,    98,    98,    70,   578,   374,    39,     4,
       0,    62,   141,   145,    79,   509,    79,    68,   151,    19,
      18,   174,   283,    19,    24,    27,    92,    33,    24,   790,
     733,    21,    98,    81,    13,    96,   712,   790,   332,   333,
     151,    94,    27,   790,   110,   262,   258,    31,   260,   704,
      40,    41,   728,   118,    60,   118,   817,    36,   119,   255,
     256,    33,    52,   141,   817,   768,   649,    57,   483,   105,
     817,   124,    62,    63,    38,    65,   122,   129,    27,   121,
       0,    60,    66,   489,   213,   136,   137,    71,    60,   383,
     108,    70,     4,   120,    78,   509,    79,   591,   149,   150,
      64,   362,   168,   151,   759,    95,   108,     6,     7,     8,
       9,   814,   148,   224,    63,    99,    15,    16,    17,   103,
     104,   415,   153,   108,   122,   190,   258,   190,   261,   784,
     120,   171,   171,   171,   717,   141,   126,   179,   204,   218,
     497,   844,   145,   143,   716,   163,   164,   143,    77,   215,
     145,   171,   261,    22,   560,   581,    69,   226,   236,   210,
     579,   171,   171,   171,   215,   172,   261,   261,   172,   482,
     537,   120,    36,   179,   103,    41,   233,   591,   184,    43,
     260,   232,   212,   234,   235,   175,   176,   223,   224,   225,
     215,   215,   182,   183,   261,   508,    62,   169,   249,   189,
     800,   541,   202,   269,   608,   261,   202,   179,   254,   362,
      55,   102,   191,   259,   280,   254,   254,   258,   258,   258,
     210,   211,   288,   258,   258,   215,   216,   217,   192,   295,
     272,   258,   222,   647,   252,   253,   105,   155,   156,   392,
     258,    12,    77,   294,   254,   263,   254,   400,    14,    15,
      95,    57,   259,   319,   261,    21,   322,    63,   544,     4,
      27,   152,    41,   416,   163,   164,    33,   553,   103,     4,
      77,   261,   262,    52,     4,    46,   121,   261,    57,   148,
     331,   347,    77,    62,    63,   198,   155,   581,    77,   202,
     208,    79,   243,    60,   207,   710,   103,    77,     1,    41,
     366,   218,   219,   220,   221,    76,   372,   258,   103,    80,
      52,    77,    78,    79,   103,    70,   120,   470,   744,    22,
      62,   372,   126,   103,   260,     3,     4,     5,     6,     7,
       8,     9,    64,    65,    66,    66,   260,    15,    16,    17,
      71,   108,   147,   259,    22,   261,    47,    78,   399,   502,
     258,   417,   260,   201,   223,   224,   225,   205,   206,   181,
     786,   183,   231,   185,   186,   780,   228,   229,    99,    47,
     153,   632,   103,   104,   141,   732,   187,   188,   145,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   258,   585,
     181,   182,   183,   459,   185,   186,   259,   463,   261,     4,
     259,   467,   261,   182,   258,   172,    84,   259,   258,   261,
     177,   258,   179,   259,   840,   261,   102,   184,   484,   142,
     143,   144,   145,   237,   238,   491,   841,    98,   494,   495,
     108,   259,   259,   261,   261,   259,   259,   261,   261,   259,
     259,   261,   261,   259,   259,   261,   261,   259,   152,   261,
     744,   238,   239,   102,     4,   258,     3,     4,     5,     6,
       7,     8,     9,   141,   231,   147,    47,     4,    15,    16,
      17,     4,   258,     4,   119,   259,   261,   120,   108,     4,
       3,   143,   145,   261,   122,   163,   164,   146,    72,   141,
      39,   260,   786,   171,   145,   260,   259,     4,   259,   261,
      47,   261,   261,   259,    82,   259,   102,   769,   260,     4,
      81,   577,    47,   774,   151,     4,     4,     4,   812,   260,
     198,     3,     4,     5,     6,     7,     8,     9,   126,   258,
     208,     3,   583,    15,    16,    17,   214,    84,     3,     3,
     261,   196,   608,   234,     4,   254,   840,   260,   243,   213,
     261,   146,     4,   145,   232,   165,   150,   608,   258,   258,
     153,   108,   258,   138,    88,    47,    88,   259,   258,   258,
     636,   258,   195,   120,   252,   253,   254,   871,   259,   257,
     258,   260,   259,   259,   258,   263,   259,     4,    69,   655,
      63,   261,   151,   659,   141,     3,     4,     5,     6,     7,
       8,     9,    84,   151,   258,   150,   259,    15,    16,    17,
       9,     9,     9,     9,   258,     9,   163,   164,   258,   128,
       9,   209,   261,   259,   171,   259,   108,   103,   103,   146,
     696,   243,   170,   258,   180,     4,   227,   790,   704,    47,
     259,   259,   178,   259,     9,   711,     9,   261,     3,     4,
       5,     6,     7,     8,     9,   259,   259,   259,     4,   141,
      15,    16,    17,   103,   817,   731,   103,   214,   103,   103,
     103,     4,   258,   171,   261,   145,    84,   127,   129,   258,
     746,   163,   164,   151,     4,   232,   108,   259,     9,   171,
     259,   259,    47,   759,   197,   761,   103,   763,   103,   103,
     108,   767,   258,   261,   145,   252,   253,   254,    23,   230,
     257,   258,   259,   172,   129,   258,   263,   129,   784,   258,
     146,     4,     3,     4,     5,     6,     7,     8,     9,    84,
     212,   193,   214,   141,    15,    16,    17,   119,   790,   258,
      76,   180,   808,   259,   258,   258,   258,   194,   143,   259,
     232,   189,   236,   108,   262,   163,   164,   199,   194,   204,
     243,   184,   262,   171,   235,   817,    47,   194,   834,   235,
     252,   253,   254,   204,   174,   257,   258,   129,   239,   203,
     194,   263,   200,   194,   156,   243,   141,   157,   564,   711,
     198,   568,   647,   756,   871,   817,   801,   846,   591,   410,
     208,   748,   823,    84,   779,   740,   214,   873,   163,   164,
     482,   528,   228,   900,   175,   314,   171,   384,   271,   543,
     886,   488,   491,   210,   232,   527,   236,   108,   585,   610,
     233,   223,   585,   555,    -1,   470,   249,   470,   904,   120,
      -1,    -1,    -1,   198,   252,   253,   254,    -1,    -1,   257,
     258,    -1,    -1,   208,    -1,   263,    -1,    -1,    -1,   214,
     141,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    -1,   232,    -1,    -1,
      -1,    -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,
     171,    -1,    -1,    -1,    -1,    -1,    -1,   252,   253,   254,
      -1,    -1,   257,   258,    -1,    47,    -1,    -1,   263,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,   214,    -1,    -1,    -1,    15,    16,    17,
      -1,    -1,    84,     3,     4,    -1,     6,     7,     8,     9,
      -1,   232,    -1,    47,    -1,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    27,    -1,    47,
      -1,   252,   253,   254,    -1,    -1,   257,   258,    -1,    -1,
      -1,    41,   263,    -1,    -1,    -1,     4,    -1,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    22,    -1,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,    -1,    -1,    -1,    -1,
      -1,   163,   164,    -1,    -1,    -1,    -1,    -1,    -1,   171,
     108,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     4,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    22,    -1,    -1,    -1,    -1,   163,
     164,    -1,   214,    -1,    -1,    -1,    -1,   171,    -1,    -1,
      -1,    -1,   142,    -1,    -1,   163,   164,   105,    -1,    -1,
     232,   151,    -1,   171,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   163,   164,   123,    -1,    -1,    -1,    -1,
     252,   253,   254,    -1,    -1,   257,   258,    -1,    -1,    -1,
     214,   263,    -1,   141,    -1,    -1,    -1,   145,    -1,    -1,
     148,   149,    -1,    -1,   152,    -1,   214,   155,   232,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,   252,   253,
     254,    -1,    -1,   257,   258,   123,    -1,    -1,    -1,   263,
      -1,    -1,    -1,    -1,   252,   253,   254,    -1,    -1,   257,
     258,    -1,    -1,   141,    -1,   263,    -1,   145,    -1,    -1,
     148,   149,   252,   253,   152,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,   224,   225,    -1,    -1,
      -1,    -1,    -1,   231,    -1,    -1,    22,    -1,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,   224,   225,    -1,    -1,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    22,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   105,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,   141,    -1,    -1,    -1,    -1,
      -1,    -1,   148,   149,    -1,    -1,   152,    -1,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     105,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,   148,   149,    -1,    -1,   152,    -1,    -1,
     155,    -1,    -1,    -1,    -1,   105,    -1,   223,   224,   225,
      -1,    -1,    -1,    -1,    53,   231,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   141,    -1,     0,    -1,   261,    -1,    -1,   148,   149,
      -1,    -1,   152,    -1,    -1,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,   105,    -1,   223,   224,
     225,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,
      -1,    -1,    -1,    40,   123,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   141,    -1,    -1,    -1,    -1,    -1,    65,   148,
     149,    -1,    -1,   152,    -1,    -1,   155,    -1,    -1,    -1,
      -1,    -1,    -1,   223,   224,   225,    -1,    -1,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    -1,
      -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,   223,   224,   225,    -1,    -1,    -1,
      -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   175,   176,
      94,    53,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,
      -1,    -1,   189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,   123,
     124,    -1,    -1,   210,   211,    -1,    -1,    -1,   215,   216,
     217,    -1,    -1,    -1,    -1,   222,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,   152,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,   123,    -1,
     152,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   149,    -1,    -1,   152,    -1,    -1,
     155,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    53,   123,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   141,    -1,   259,    -1,   261,    -1,    -1,
      -1,   149,    -1,    -1,   152,    -1,    -1,   155,    -1,   231,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,    -1,   231,   259,    -1,    53,
      -1,    -1,    -1,    -1,   123,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   141,    -1,   259,    -1,    -1,    -1,    -1,    -1,
     149,    -1,    -1,   152,    -1,    -1,   155,    -1,    -1,    -1,
      -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   123,
      -1,   259,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,   152,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   231,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   119,    53,
     259,    -1,   123,    -1,    -1,   126,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,
      -1,   152,    -1,    -1,   155,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,   259,    53,    -1,    -1,   123,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,   152,    -1,
      -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   123,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   200,    -1,    -1,    -1,
     204,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,    -1,    -1,   152,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,    -1,    -1,    -1,    -1,   123,    -1,    53,
      -1,    -1,    -1,   200,    -1,    -1,    -1,   204,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,   145,
      -1,    -1,    -1,   149,    -1,    -1,   152,    -1,    -1,   155,
      -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,   119,    -1,
      -1,    -1,   123,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,   123,
      -1,   152,    -1,    -1,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,    -1,
      -1,   145,    -1,    -1,    -1,   149,    -1,    -1,   152,    -1,
      -1,   155,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,    53,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,   145,    -1,    -1,    -1,   149,
      -1,    -1,   152,    -1,    -1,   155,    -1,   114,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,    -1,    -1,   152,    -1,    -1,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,
      -1,   231,   149,    -1,    -1,   152,    -1,    -1,   155,    -1,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   174,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   231,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     123,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,   152,
     123,    -1,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   141,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,   152,
      -1,    -1,   155,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   189,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,   231,   149,
      65,    -1,   152,    -1,    -1,   155,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,    -1,    -1,    -1,    -1,   231,    -1,
      95,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   204,   120,    -1,    -1,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,    -1,    -1,    30,
     175,   176,    -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,
      -1,    -1,    -1,    44,   189,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   210,   211,    68,    -1,    -1,
     215,   216,   217,    -1,    -1,    -1,    -1,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,
     111,   112,   113,    -1,    -1,   116,   117,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   128,    -1,   130,
     131,   132,   133,   134,   135,   136,   137,    -1,   139,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   166,   167,   168
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,   262,   265,   450,   450,     0,    21,    40,    65,    95,
     120,   126,   175,   176,   183,   189,   210,   211,   215,   216,
     217,   222,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   279,   280,   283,   285,   286,   305,   307,   308,   309,
     310,   311,   312,   347,   348,   349,   350,   351,   353,   354,
     359,   362,   439,   440,     4,   433,    13,    36,    60,   191,
     315,   316,    79,    70,    79,   118,   190,   233,   326,   218,
     281,     4,   275,   277,   278,   433,   281,   219,   220,   221,
     281,     3,     4,     5,     6,     7,     8,     9,    15,    16,
      17,    47,    84,   108,   141,   163,   164,   171,   212,   214,
     232,   252,   253,   254,   257,   258,   263,   301,   401,   403,
     404,   409,   416,   417,   418,   419,   421,   422,   423,   424,
       4,   212,   277,     4,     4,   215,   277,   284,   281,   450,
      41,    52,    57,    62,    63,   182,   356,   357,   363,   365,
     260,    79,    70,    79,   118,   190,   433,   147,   352,   352,
     352,   352,   433,   441,   442,   243,   258,   260,   153,   282,
     281,   281,   281,   260,   403,   410,    47,   403,   258,   258,
     362,   400,   403,   439,   258,   258,    53,   123,   141,   145,
     149,   152,   155,   231,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   296,   300,   325,   405,   403,   277,     4,   102,   267,
      98,   102,   152,    18,   122,   380,   152,   258,   398,   399,
     102,   430,   433,   433,    12,    46,    76,    80,   364,   393,
       4,   147,   327,   327,   327,   327,   327,    55,    95,   121,
      47,     4,   432,   433,   433,     4,   431,   258,   358,   261,
       4,    27,    41,   142,   151,   252,   253,   276,   419,   420,
     421,   276,     4,   278,     4,   215,     4,   171,   254,   119,
     411,   412,   145,   403,   181,   183,   185,   186,   259,   259,
     261,   362,   254,   380,   402,   108,   277,     4,    22,   105,
     148,   223,   224,   225,   406,   407,   403,   304,   419,   430,
     181,   182,   183,   185,   186,   344,     4,   254,   381,   384,
     403,   433,   344,   400,   261,   143,   145,   436,   436,   146,
     122,   365,    72,   397,   141,   433,   432,   433,   433,   431,
      39,   153,   306,   306,   306,   260,   260,     4,   303,   417,
     145,   442,   421,   421,   259,     4,   403,    96,   389,   411,
     427,   277,   145,   259,   261,   261,   261,   403,   259,   400,
     259,   403,   258,   408,   433,   403,    82,   388,   428,   102,
     260,    98,   261,   386,   387,     4,   145,   437,   438,   260,
     259,   399,     4,   258,   360,   361,   416,     4,   434,   141,
     213,   425,   358,   394,   395,   403,   403,    47,    81,   151,
     145,   258,   358,    38,    64,   192,   317,   433,   417,   417,
       4,   331,     4,     4,   259,   261,   258,   114,   403,   126,
      30,    44,    68,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   107,   111,   112,   113,   116,   117,   128,   130,
     131,   132,   133,   134,   135,   136,   137,   139,   140,   166,
     167,   168,   346,     3,     3,     3,   196,   414,   415,   174,
     259,   362,   400,    45,   390,   429,   403,   234,   382,     4,
     258,   433,   447,   448,   449,   384,   388,   438,     4,   254,
     260,   303,   261,   386,   243,   213,   146,    27,    63,   355,
     362,   261,   296,   297,    54,   261,     4,   324,   433,   362,
     328,   331,   145,   150,    41,    52,    62,   318,   153,   346,
     417,   362,   403,   165,   258,   258,   258,    88,    88,   258,
     258,   138,   258,   259,   259,   259,   259,   258,   195,   413,
     403,   259,   259,   403,   254,   383,   385,   403,   362,   447,
     448,   145,   434,   435,   261,    31,    66,    71,    78,    99,
     103,   104,   261,   443,   445,   446,    69,   391,   259,   361,
     388,   403,     4,    63,   398,   382,   151,   289,   290,   291,
     395,    94,   124,   396,   403,   403,   358,   258,   259,   261,
     362,   150,   319,   151,   416,    27,   145,   172,   177,   296,
     332,   333,   334,   341,   259,     9,     9,     9,   258,   258,
       9,     9,   128,     9,   428,     4,   258,   372,   261,   438,
     259,   259,   259,   434,   425,   449,    66,    71,    78,    99,
     103,   104,   103,   103,    77,   103,    77,   103,    77,   103,
     449,   445,   146,   209,   366,   367,   243,   382,   289,   180,
     291,   227,   299,   170,   313,   294,   295,   403,   313,   329,
     330,   331,   334,   303,   433,   258,   418,   420,   421,   258,
       4,   178,   341,    33,    60,   141,   179,   184,   325,   340,
     259,   259,   259,     9,     9,   259,   259,   261,   259,     4,
     370,   371,   384,   435,   103,   103,    77,   103,    77,   103,
      77,   103,   103,   103,   103,    81,   151,   426,   444,   400,
     368,   369,   372,   403,   258,   292,   293,   228,   229,   171,
     259,   261,   297,    23,   261,   314,   259,   261,   330,    33,
      60,   169,   179,   127,   320,   403,   403,   145,   129,   151,
     343,   258,     4,   108,   259,   259,     9,   259,   197,   287,
     288,   103,   103,   103,   258,   403,    50,   392,   261,   145,
     294,   230,   388,   295,   396,    23,   313,   330,   129,   258,
     129,   258,   193,   119,   321,   259,   259,   258,   396,   180,
     403,   358,   343,   259,   146,   393,   303,   403,   369,   258,
     259,    62,   226,   314,   258,   294,   258,   403,   194,   403,
     189,    36,    43,   342,   403,   343,   344,   259,   151,   224,
     337,   338,   339,   400,   201,   205,   206,   373,   374,   259,
     370,   388,   143,   294,   259,   303,   259,   322,   323,   353,
     354,   359,   362,   259,   187,   188,   345,    41,    62,     4,
     325,   335,   336,   339,    22,   198,   208,   377,   403,   259,
     258,   298,   302,   417,   259,   343,   259,   126,   323,   262,
     342,    19,    24,   143,   202,    19,    24,   143,   202,   236,
     198,   208,   375,   403,   194,   204,   199,   378,   379,   204,
     303,   261,   388,   243,   343,   340,   262,    27,   108,   235,
      27,   108,   235,   239,   194,   204,   174,   200,   204,    69,
     198,   202,   207,   259,   302,   403,   237,   238,   198,   208,
     376,   403,   194,   203,   243,   194,   200,   379,   200,   204,
     403
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   264,   265,   266,   266,   267,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   269,   269,   270,   270,   270,   271,
     271,   272,   272,   273,   273,   274,   274,   275,   275,   276,
     276,   276,   276,   276,   276,   276,   277,   278,   279,   280,
     281,   281,   282,   282,   282,   283,   283,   284,   284,   285,
     285,   285,   285,   286,   286,   287,   288,   288,   289,   289,
     290,   290,   291,   291,   292,   292,   293,   294,   294,   295,
     296,   297,   297,   298,   298,   299,   299,   299,   300,   300,
     300,   301,   301,   302,   302,   303,   303,   304,   305,   305,
     305,   305,   306,   306,   307,   307,   307,   308,   309,   310,
     311,   312,   312,   312,   312,   312,   313,   313,   314,   314,
     314,   315,   315,   316,   316,   316,   317,   317,   317,   317,
     318,   318,   318,   319,   319,   320,   320,   321,   321,   322,
     322,   323,   323,   323,   323,   324,   325,   325,   326,   326,
     327,   327,   328,   328,   329,   329,   329,   330,   330,   330,
     330,   331,   332,   332,   333,   333,   334,   334,   335,   335,
     336,   336,   336,   337,   337,   338,   338,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   340,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   342,   342,   342,   343,   343,   344,   344,   344,   344,
     344,   345,   345,   345,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   347,   348,
     349,   350,   351,   351,   351,   351,   352,   352,   353,   354,
     355,   355,   355,   356,   356,   357,   357,   357,   358,   358,
     359,   360,   360,   361,   361,   362,   363,   363,   364,   364,
     364,   364,   365,   365,   366,   366,   367,   368,   368,   369,
     370,   371,   371,   372,   373,   373,   373,   374,   374,   374,
     375,   375,   375,   375,   376,   376,   376,   376,   377,   377,
     377,   378,   378,   378,   378,   379,   379,   380,   380,   380,
     381,   381,   382,   382,   383,   383,   384,   384,   384,   385,
     385,   386,   386,   387,   387,   388,   388,   389,   389,   390,
     390,   391,   391,   392,   392,   393,   393,   394,   394,   395,
     396,   396,   396,   397,   397,   397,   397,   398,   398,   399,
     400,   400,   401,   402,   402,   402,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   404,   404,   404,   404,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   405,   405,
     405,   405,   405,   405,   405,   405,   406,   407,   407,   407,
     407,   408,   408,   408,   408,   409,   409,   409,   409,   410,
     410,   411,   412,   412,   413,   413,   413,   414,   415,   415,
     416,   416,   416,   416,   417,   417,   417,   418,   418,   418,
     418,   418,   419,   420,   420,   420,   421,   421,   421,   421,
     421,   421,   421,   421,   421,   422,   423,   424,   425,   425,
     425,   426,   427,   428,   429,   430,   431,   431,   432,   432,
     433,   433,   434,   435,   435,   435,   436,   436,   437,   437,
     438,   438,   439,   439,   440,   441,   441,   442,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   443,   443,   443,
     443,   443,   443,   443,   443,   443,   443,   444,   444,   444,
     445,   446,   446,   447,   447,   448,   448,   449,   449,   449,
     449,   450,   450
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     2,     4,     5,     1,
       2,     1,     2,     4,     5,     2,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     0,     2,     3,     0,     4,     2,     1,     0,     2,
       3,     3,     3,     2,     2,     3,     1,     0,     1,     0,
       1,     2,     5,     8,     1,     0,     4,     1,     3,     3,
       2,     1,     0,     1,     3,     2,     2,     0,     1,     1,
       2,     1,     2,     3,     5,     1,     3,     1,     6,     8,
       6,     6,     1,     0,     7,    10,    12,     8,    11,     9,
      14,     1,     1,     1,     1,     1,     2,     0,     1,     2,
       0,     1,     0,     1,     1,     0,     1,     1,     2,     0,
       1,     1,     2,     2,     0,     3,     0,     2,     0,     2,
       3,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       3,     0,     1,     3,     1,     2,     3,     5,     7,     6,
       7,     3,     1,     0,     2,     1,     2,     0,     1,     0,
       2,     4,     4,     1,     0,     1,     2,     4,     4,     3,
       3,     4,     4,     4,     3,     3,     4,     2,     5,     6,
       4,     3,     5,     4,     2,     2,     1,     2,     7,     5,
       2,     1,     1,     0,     3,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     2,     4,     4,     4,
       5,     4,     5,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     1,     1,     1,     1,     0,     4,     4,
       4,     4,     1,     1,     1,     1,     2,     0,     6,     7,
       3,     2,     2,     1,     3,     2,     2,     4,     3,     0,
       8,     1,     3,     3,     5,     4,     1,     3,     1,     2,
       1,     1,     7,     2,     1,     0,     2,     1,     3,     5,
       4,     1,     0,     1,     3,     6,     0,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     2,     2,     1,     0,     1,     1,     0,
       1,     3,     2,     0,     1,     3,     2,     1,     3,     2,
       1,     2,     0,     2,     2,     1,     0,     1,     0,     1,
       0,     4,     0,     2,     0,     3,     0,     1,     3,     4,
       1,     1,     0,     2,     4,     4,     0,     1,     3,     3,
       1,     3,     1,     2,     1,     0,     1,     1,     2,     3,
       6,     3,     6,     2,     5,     2,     6,     4,     4,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     1,     4,     6,     6,     6,     1,
       0,     4,     1,     2,     2,     4,     0,     4,     1,     0,
       1,     1,     3,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       0,     2,     2,     2,     2,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     2,     0,     2,     0,     1,     2,
       1,     0,     1,     0,     3,     1,     3,     6,     1,     1,
       2,     3,     2,     2,     2,     3,     4,     3,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     4,     0,
       3,     1,     2,     1,     2,     1,     3,     4,     3,     3,
       3,     2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if HSQL_DEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program * result, yyscan_t scanner)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, Program * result, yyscan_t scanner)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp, result, scanner);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, Program * result, yyscan_t scanner)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !HSQL_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !HSQL_DEBUG */


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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, Program * result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 3: /* STRING  */
#line 536 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2844 "bison_parser.cpp"
        break;

    case 4: /* IDENTIFIER  */
#line 536 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2850 "bison_parser.cpp"
        break;

    case 5: /* BLOBSTRING  */
#line 536 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2856 "bison_parser.cpp"
        break;

    case 6: /* HEXVAL  */
#line 536 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2862 "bison_parser.cpp"
        break;

    case 7: /* EXPVAL  */
#line 536 "bison_parser.y"
            { free( (((*yyvaluep).sval)) ); }
#line 2868 "bison_parser.cpp"
        break;

    case 8: /* FLOATVAL  */
#line 535 "bison_parser.y"
            { }
#line 2874 "bison_parser.cpp"
        break;

    case 9: /* INTVAL  */
#line 535 "bison_parser.y"
            { }
#line 2880 "bison_parser.cpp"
        break;

    case 265: /* input  */
#line 535 "bison_parser.y"
            { }
#line 2886 "bison_parser.cpp"
        break;

    case 266: /* statement_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).statement_list_t)!=NULL)((*yyvaluep).statement_list_t)->deep_delete(); }
#line 2892 "bison_parser.cpp"
        break;

    case 267: /* statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).statement_t)!=NULL)((*yyvaluep).statement_t)->deep_delete(); }
#line 2898 "bison_parser.cpp"
        break;

    case 268: /* preparable_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).preparable_statement_t)!=NULL)((*yyvaluep).preparable_statement_t)->deep_delete(); }
#line 2904 "bison_parser.cpp"
        break;

    case 269: /* release_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).release_statement_t)!=NULL)((*yyvaluep).release_statement_t)->deep_delete(); }
#line 2910 "bison_parser.cpp"
        break;

    case 270: /* pragma_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).pragma_statement_t)!=NULL)((*yyvaluep).pragma_statement_t)->deep_delete(); }
#line 2916 "bison_parser.cpp"
        break;

    case 271: /* reindex_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).reindex_statement_t)!=NULL)((*yyvaluep).reindex_statement_t)->deep_delete(); }
#line 2922 "bison_parser.cpp"
        break;

    case 272: /* analyze_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).analyze_statement_t)!=NULL)((*yyvaluep).analyze_statement_t)->deep_delete(); }
#line 2928 "bison_parser.cpp"
        break;

    case 273: /* attach_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).attach_statement_t)!=NULL)((*yyvaluep).attach_statement_t)->deep_delete(); }
#line 2934 "bison_parser.cpp"
        break;

    case 274: /* detach_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).detach_statement_t)!=NULL)((*yyvaluep).detach_statement_t)->deep_delete(); }
#line 2940 "bison_parser.cpp"
        break;

    case 275: /* pragma_key  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).pragma_key_t)!=NULL)((*yyvaluep).pragma_key_t)->deep_delete(); }
#line 2946 "bison_parser.cpp"
        break;

    case 276: /* pragma_value  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).pragma_value_t)!=NULL)((*yyvaluep).pragma_value_t)->deep_delete(); }
#line 2952 "bison_parser.cpp"
        break;

    case 277: /* schema_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).schema_name_t)!=NULL)((*yyvaluep).schema_name_t)->deep_delete(); }
#line 2958 "bison_parser.cpp"
        break;

    case 278: /* pragma_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).pragma_name_t)!=NULL)((*yyvaluep).pragma_name_t)->deep_delete(); }
#line 2964 "bison_parser.cpp"
        break;

    case 279: /* savepoint_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).savepoint_statement_t)!=NULL)((*yyvaluep).savepoint_statement_t)->deep_delete(); }
#line 2970 "bison_parser.cpp"
        break;

    case 280: /* rollback_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).rollback_statement_t)!=NULL)((*yyvaluep).rollback_statement_t)->deep_delete(); }
#line 2976 "bison_parser.cpp"
        break;

    case 281: /* opt_transaction  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_transaction_t)!=NULL)((*yyvaluep).opt_transaction_t)->deep_delete(); }
#line 2982 "bison_parser.cpp"
        break;

    case 282: /* opt_to_savepoint  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_to_savepoint_t)!=NULL)((*yyvaluep).opt_to_savepoint_t)->deep_delete(); }
#line 2988 "bison_parser.cpp"
        break;

    case 283: /* vacuum_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).vacuum_statement_t)!=NULL)((*yyvaluep).vacuum_statement_t)->deep_delete(); }
#line 2994 "bison_parser.cpp"
        break;

    case 284: /* opt_schema_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_schema_name_t)!=NULL)((*yyvaluep).opt_schema_name_t)->deep_delete(); }
#line 3000 "bison_parser.cpp"
        break;

    case 285: /* begin_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).begin_statement_t)!=NULL)((*yyvaluep).begin_statement_t)->deep_delete(); }
#line 3006 "bison_parser.cpp"
        break;

    case 286: /* commit_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).commit_statement_t)!=NULL)((*yyvaluep).commit_statement_t)->deep_delete(); }
#line 3012 "bison_parser.cpp"
        break;

    case 287: /* partition_by  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).partition_by_t)!=NULL)((*yyvaluep).partition_by_t)->deep_delete(); }
#line 3018 "bison_parser.cpp"
        break;

    case 288: /* opt_partition_by  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_partition_by_t)!=NULL)((*yyvaluep).opt_partition_by_t)->deep_delete(); }
#line 3024 "bison_parser.cpp"
        break;

    case 289: /* opt_upsert_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_upsert_clause_t)!=NULL)((*yyvaluep).opt_upsert_clause_t)->deep_delete(); }
#line 3030 "bison_parser.cpp"
        break;

    case 290: /* upsert_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).upsert_clause_t)!=NULL)((*yyvaluep).upsert_clause_t)->deep_delete(); }
#line 3036 "bison_parser.cpp"
        break;

    case 291: /* upsert_item  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).upsert_item_t)!=NULL)((*yyvaluep).upsert_item_t)->deep_delete(); }
#line 3042 "bison_parser.cpp"
        break;

    case 292: /* opt_conflict_target  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_conflict_target_t)!=NULL)((*yyvaluep).opt_conflict_target_t)->deep_delete(); }
#line 3048 "bison_parser.cpp"
        break;

    case 293: /* conflict_target  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).conflict_target_t)!=NULL)((*yyvaluep).conflict_target_t)->deep_delete(); }
#line 3054 "bison_parser.cpp"
        break;

    case 294: /* indexed_column_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).indexed_column_list_t)!=NULL)((*yyvaluep).indexed_column_list_t)->deep_delete(); }
#line 3060 "bison_parser.cpp"
        break;

    case 295: /* indexed_column  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).indexed_column_t)!=NULL)((*yyvaluep).indexed_column_t)->deep_delete(); }
#line 3066 "bison_parser.cpp"
        break;

    case 296: /* collate  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).collate_t)!=NULL)((*yyvaluep).collate_t)->deep_delete(); }
#line 3072 "bison_parser.cpp"
        break;

    case 297: /* opt_collate  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_collate_t)!=NULL)((*yyvaluep).opt_collate_t)->deep_delete(); }
#line 3078 "bison_parser.cpp"
        break;

    case 298: /* assign_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).assign_list_t)!=NULL)((*yyvaluep).assign_list_t)->deep_delete(); }
#line 3084 "bison_parser.cpp"
        break;

    case 299: /* opt_order_of_null  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_order_of_null_t)!=NULL)((*yyvaluep).opt_order_of_null_t)->deep_delete(); }
#line 3090 "bison_parser.cpp"
        break;

    case 300: /* null_of_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).null_of_expr_t)!=NULL)((*yyvaluep).null_of_expr_t)->deep_delete(); }
#line 3096 "bison_parser.cpp"
        break;

    case 301: /* exists_or_not  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).exists_or_not_t)!=NULL)((*yyvaluep).exists_or_not_t)->deep_delete(); }
#line 3102 "bison_parser.cpp"
        break;

    case 302: /* assign_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).assign_clause_t)!=NULL)((*yyvaluep).assign_clause_t)->deep_delete(); }
#line 3108 "bison_parser.cpp"
        break;

    case 303: /* column_name_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).column_name_list_t)!=NULL)((*yyvaluep).column_name_list_t)->deep_delete(); }
#line 3114 "bison_parser.cpp"
        break;

    case 304: /* file_path  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).file_path_t)!=NULL)((*yyvaluep).file_path_t)->deep_delete(); }
#line 3120 "bison_parser.cpp"
        break;

    case 305: /* alter_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).alter_statement_t)!=NULL)((*yyvaluep).alter_statement_t)->deep_delete(); }
#line 3126 "bison_parser.cpp"
        break;

    case 306: /* opt_column  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_column_t)!=NULL)((*yyvaluep).opt_column_t)->deep_delete(); }
#line 3132 "bison_parser.cpp"
        break;

    case 307: /* create_table_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).create_table_statement_t)!=NULL)((*yyvaluep).create_table_statement_t)->deep_delete(); }
#line 3138 "bison_parser.cpp"
        break;

    case 308: /* create_view_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).create_view_statement_t)!=NULL)((*yyvaluep).create_view_statement_t)->deep_delete(); }
#line 3144 "bison_parser.cpp"
        break;

    case 309: /* create_index_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).create_index_statement_t)!=NULL)((*yyvaluep).create_index_statement_t)->deep_delete(); }
#line 3150 "bison_parser.cpp"
        break;

    case 310: /* create_virtual_table_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).create_virtual_table_statement_t)!=NULL)((*yyvaluep).create_virtual_table_statement_t)->deep_delete(); }
#line 3156 "bison_parser.cpp"
        break;

    case 311: /* create_trigger_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).create_trigger_statement_t)!=NULL)((*yyvaluep).create_trigger_statement_t)->deep_delete(); }
#line 3162 "bison_parser.cpp"
        break;

    case 312: /* create_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).create_statement_t)!=NULL)((*yyvaluep).create_statement_t)->deep_delete(); }
#line 3168 "bison_parser.cpp"
        break;

    case 313: /* opt_without_rowid  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_without_rowid_t)!=NULL)((*yyvaluep).opt_without_rowid_t)->deep_delete(); }
#line 3174 "bison_parser.cpp"
        break;

    case 314: /* opt_strict  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_strict_t)!=NULL)((*yyvaluep).opt_strict_t)->deep_delete(); }
#line 3180 "bison_parser.cpp"
        break;

    case 315: /* opt_unique  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_unique_t)!=NULL)((*yyvaluep).opt_unique_t)->deep_delete(); }
#line 3186 "bison_parser.cpp"
        break;

    case 316: /* opt_tmp  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_tmp_t)!=NULL)((*yyvaluep).opt_tmp_t)->deep_delete(); }
#line 3192 "bison_parser.cpp"
        break;

    case 317: /* opt_trigger_time  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_trigger_time_t)!=NULL)((*yyvaluep).opt_trigger_time_t)->deep_delete(); }
#line 3198 "bison_parser.cpp"
        break;

    case 318: /* trigger_event  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).trigger_event_t)!=NULL)((*yyvaluep).trigger_event_t)->deep_delete(); }
#line 3204 "bison_parser.cpp"
        break;

    case 319: /* opt_of_column_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_of_column_list_t)!=NULL)((*yyvaluep).opt_of_column_list_t)->deep_delete(); }
#line 3210 "bison_parser.cpp"
        break;

    case 320: /* opt_for_each  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_for_each_t)!=NULL)((*yyvaluep).opt_for_each_t)->deep_delete(); }
#line 3216 "bison_parser.cpp"
        break;

    case 321: /* opt_when  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_when_t)!=NULL)((*yyvaluep).opt_when_t)->deep_delete(); }
#line 3222 "bison_parser.cpp"
        break;

    case 322: /* trigger_cmd_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).trigger_cmd_list_t)!=NULL)((*yyvaluep).trigger_cmd_list_t)->deep_delete(); }
#line 3228 "bison_parser.cpp"
        break;

    case 323: /* trigger_cmd  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).trigger_cmd_t)!=NULL)((*yyvaluep).trigger_cmd_t)->deep_delete(); }
#line 3234 "bison_parser.cpp"
        break;

    case 324: /* module_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).module_name_t)!=NULL)((*yyvaluep).module_name_t)->deep_delete(); }
#line 3240 "bison_parser.cpp"
        break;

    case 325: /* opt_not  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_not_t)!=NULL)((*yyvaluep).opt_not_t)->deep_delete(); }
#line 3246 "bison_parser.cpp"
        break;

    case 326: /* opt_recursive  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_recursive_t)!=NULL)((*yyvaluep).opt_recursive_t)->deep_delete(); }
#line 3252 "bison_parser.cpp"
        break;

    case 327: /* opt_if_not_exists  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_if_not_exists_t)!=NULL)((*yyvaluep).opt_if_not_exists_t)->deep_delete(); }
#line 3258 "bison_parser.cpp"
        break;

    case 328: /* column_def_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).column_def_list_t)!=NULL)((*yyvaluep).column_def_list_t)->deep_delete(); }
#line 3264 "bison_parser.cpp"
        break;

    case 329: /* table_constraint_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).table_constraint_list_t)!=NULL)((*yyvaluep).table_constraint_list_t)->deep_delete(); }
#line 3270 "bison_parser.cpp"
        break;

    case 330: /* table_constraint  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).table_constraint_t)!=NULL)((*yyvaluep).table_constraint_t)->deep_delete(); }
#line 3276 "bison_parser.cpp"
        break;

    case 331: /* column_def  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).column_def_t)!=NULL)((*yyvaluep).column_def_t)->deep_delete(); }
#line 3282 "bison_parser.cpp"
        break;

    case 332: /* opt_column_constraintlist  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_column_constraintlist_t)!=NULL)((*yyvaluep).opt_column_constraintlist_t)->deep_delete(); }
#line 3288 "bison_parser.cpp"
        break;

    case 333: /* column_constraintlist  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).column_constraintlist_t)!=NULL)((*yyvaluep).column_constraintlist_t)->deep_delete(); }
#line 3294 "bison_parser.cpp"
        break;

    case 334: /* opt_constraint_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_constraint_name_t)!=NULL)((*yyvaluep).opt_constraint_name_t)->deep_delete(); }
#line 3300 "bison_parser.cpp"
        break;

    case 335: /* opt_deferrable_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_deferrable_clause_t)!=NULL)((*yyvaluep).opt_deferrable_clause_t)->deep_delete(); }
#line 3306 "bison_parser.cpp"
        break;

    case 336: /* deferrable_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).deferrable_clause_t)!=NULL)((*yyvaluep).deferrable_clause_t)->deep_delete(); }
#line 3312 "bison_parser.cpp"
        break;

    case 337: /* opt_foreign_key_on_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_foreign_key_on_list_t)!=NULL)((*yyvaluep).opt_foreign_key_on_list_t)->deep_delete(); }
#line 3318 "bison_parser.cpp"
        break;

    case 338: /* foreign_key_on_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).foreign_key_on_list_t)!=NULL)((*yyvaluep).foreign_key_on_list_t)->deep_delete(); }
#line 3324 "bison_parser.cpp"
        break;

    case 339: /* foreign_key_on  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).foreign_key_on_t)!=NULL)((*yyvaluep).foreign_key_on_t)->deep_delete(); }
#line 3330 "bison_parser.cpp"
        break;

    case 340: /* foreign_key_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).foreign_key_clause_t)!=NULL)((*yyvaluep).foreign_key_clause_t)->deep_delete(); }
#line 3336 "bison_parser.cpp"
        break;

    case 341: /* column_constraint  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).column_constraint_t)!=NULL)((*yyvaluep).column_constraint_t)->deep_delete(); }
#line 3342 "bison_parser.cpp"
        break;

    case 342: /* opt_stored_virtual  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_stored_virtual_t)!=NULL)((*yyvaluep).opt_stored_virtual_t)->deep_delete(); }
#line 3348 "bison_parser.cpp"
        break;

    case 343: /* opt_conflict_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_conflict_clause_t)!=NULL)((*yyvaluep).opt_conflict_clause_t)->deep_delete(); }
#line 3354 "bison_parser.cpp"
        break;

    case 344: /* resolve_type  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).resolve_type_t)!=NULL)((*yyvaluep).resolve_type_t)->deep_delete(); }
#line 3360 "bison_parser.cpp"
        break;

    case 345: /* opt_autoinc  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_autoinc_t)!=NULL)((*yyvaluep).opt_autoinc_t)->deep_delete(); }
#line 3366 "bison_parser.cpp"
        break;

    case 346: /* column_type  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).column_type_t)!=NULL)((*yyvaluep).column_type_t)->deep_delete(); }
#line 3372 "bison_parser.cpp"
        break;

    case 347: /* drop_table_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).drop_table_statement_t)!=NULL)((*yyvaluep).drop_table_statement_t)->deep_delete(); }
#line 3378 "bison_parser.cpp"
        break;

    case 348: /* drop_index_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).drop_index_statement_t)!=NULL)((*yyvaluep).drop_index_statement_t)->deep_delete(); }
#line 3384 "bison_parser.cpp"
        break;

    case 349: /* drop_view_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).drop_view_statement_t)!=NULL)((*yyvaluep).drop_view_statement_t)->deep_delete(); }
#line 3390 "bison_parser.cpp"
        break;

    case 350: /* drop_trigger_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).drop_trigger_statement_t)!=NULL)((*yyvaluep).drop_trigger_statement_t)->deep_delete(); }
#line 3396 "bison_parser.cpp"
        break;

    case 351: /* drop_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).drop_statement_t)!=NULL)((*yyvaluep).drop_statement_t)->deep_delete(); }
#line 3402 "bison_parser.cpp"
        break;

    case 352: /* opt_if_exists  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_if_exists_t)!=NULL)((*yyvaluep).opt_if_exists_t)->deep_delete(); }
#line 3408 "bison_parser.cpp"
        break;

    case 353: /* delete_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).delete_statement_t)!=NULL)((*yyvaluep).delete_statement_t)->deep_delete(); }
#line 3414 "bison_parser.cpp"
        break;

    case 354: /* insert_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).insert_statement_t)!=NULL)((*yyvaluep).insert_statement_t)->deep_delete(); }
#line 3420 "bison_parser.cpp"
        break;

    case 355: /* insert_value  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).insert_value_t)!=NULL)((*yyvaluep).insert_value_t)->deep_delete(); }
#line 3426 "bison_parser.cpp"
        break;

    case 356: /* update_type  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).update_type_t)!=NULL)((*yyvaluep).update_type_t)->deep_delete(); }
#line 3432 "bison_parser.cpp"
        break;

    case 357: /* insert_type  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).insert_type_t)!=NULL)((*yyvaluep).insert_type_t)->deep_delete(); }
#line 3438 "bison_parser.cpp"
        break;

    case 358: /* opt_column_list_paren  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_column_list_paren_t)!=NULL)((*yyvaluep).opt_column_list_paren_t)->deep_delete(); }
#line 3444 "bison_parser.cpp"
        break;

    case 359: /* update_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).update_statement_t)!=NULL)((*yyvaluep).update_statement_t)->deep_delete(); }
#line 3450 "bison_parser.cpp"
        break;

    case 360: /* update_clause_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).update_clause_list_t)!=NULL)((*yyvaluep).update_clause_list_t)->deep_delete(); }
#line 3456 "bison_parser.cpp"
        break;

    case 361: /* update_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).update_clause_t)!=NULL)((*yyvaluep).update_clause_t)->deep_delete(); }
#line 3462 "bison_parser.cpp"
        break;

    case 362: /* select_statement  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).select_statement_t)!=NULL)((*yyvaluep).select_statement_t)->deep_delete(); }
#line 3468 "bison_parser.cpp"
        break;

    case 363: /* select_core_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).select_core_list_t)!=NULL)((*yyvaluep).select_core_list_t)->deep_delete(); }
#line 3474 "bison_parser.cpp"
        break;

    case 364: /* set_operator  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).set_operator_t)!=NULL)((*yyvaluep).set_operator_t)->deep_delete(); }
#line 3480 "bison_parser.cpp"
        break;

    case 365: /* select_core  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).select_core_t)!=NULL)((*yyvaluep).select_core_t)->deep_delete(); }
#line 3486 "bison_parser.cpp"
        break;

    case 366: /* opt_window_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_window_clause_t)!=NULL)((*yyvaluep).opt_window_clause_t)->deep_delete(); }
#line 3492 "bison_parser.cpp"
        break;

    case 367: /* window_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).window_clause_t)!=NULL)((*yyvaluep).window_clause_t)->deep_delete(); }
#line 3498 "bison_parser.cpp"
        break;

    case 368: /* windowdefn_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).window_defn_list_t)!=NULL)((*yyvaluep).window_defn_list_t)->deep_delete(); }
#line 3504 "bison_parser.cpp"
        break;

    case 369: /* windowdefn  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).window_defn_t)!=NULL)((*yyvaluep).window_defn_t)->deep_delete(); }
#line 3510 "bison_parser.cpp"
        break;

    case 370: /* window_body  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).window_body_t)!=NULL)((*yyvaluep).window_body_t)->deep_delete(); }
#line 3516 "bison_parser.cpp"
        break;

    case 371: /* opt_base_window_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_base_window_name_t)!=NULL)((*yyvaluep).opt_base_window_name_t)->deep_delete(); }
#line 3522 "bison_parser.cpp"
        break;

    case 372: /* window_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).window_name_t)!=NULL)((*yyvaluep).window_name_t)->deep_delete(); }
#line 3528 "bison_parser.cpp"
        break;

    case 373: /* opt_frame  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_frame_t)!=NULL)((*yyvaluep).opt_frame_t)->deep_delete(); }
#line 3534 "bison_parser.cpp"
        break;

    case 374: /* range_or_rows  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).range_or_rows_t)!=NULL)((*yyvaluep).range_or_rows_t)->deep_delete(); }
#line 3540 "bison_parser.cpp"
        break;

    case 375: /* frame_bound_s  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).frame_bound_s_t)!=NULL)((*yyvaluep).frame_bound_s_t)->deep_delete(); }
#line 3546 "bison_parser.cpp"
        break;

    case 376: /* frame_bound_e  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).frame_bound_e_t)!=NULL)((*yyvaluep).frame_bound_e_t)->deep_delete(); }
#line 3552 "bison_parser.cpp"
        break;

    case 377: /* frame_bound  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).frame_bound_t)!=NULL)((*yyvaluep).frame_bound_t)->deep_delete(); }
#line 3558 "bison_parser.cpp"
        break;

    case 378: /* frame_exclude  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).frame_exclude_t)!=NULL)((*yyvaluep).frame_exclude_t)->deep_delete(); }
#line 3564 "bison_parser.cpp"
        break;

    case 379: /* opt_frame_exclude  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_frame_exclude_t)!=NULL)((*yyvaluep).opt_frame_exclude_t)->deep_delete(); }
#line 3570 "bison_parser.cpp"
        break;

    case 380: /* opt_distinct  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_distinct_t)!=NULL)((*yyvaluep).opt_distinct_t)->deep_delete(); }
#line 3576 "bison_parser.cpp"
        break;

    case 381: /* result_column_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).result_column_list_t)!=NULL)((*yyvaluep).result_column_list_t)->deep_delete(); }
#line 3582 "bison_parser.cpp"
        break;

    case 382: /* opt_returning_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_returning_clause_t)!=NULL)((*yyvaluep).opt_returning_clause_t)->deep_delete(); }
#line 3588 "bison_parser.cpp"
        break;

    case 383: /* returning_column_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).result_column_list_t)!=NULL)((*yyvaluep).result_column_list_t)->deep_delete(); }
#line 3594 "bison_parser.cpp"
        break;

    case 384: /* result_column  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).result_column_t)!=NULL)((*yyvaluep).result_column_t)->deep_delete(); }
#line 3600 "bison_parser.cpp"
        break;

    case 385: /* returning_column  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).result_column_t)!=NULL)((*yyvaluep).result_column_t)->deep_delete(); }
#line 3606 "bison_parser.cpp"
        break;

    case 386: /* opt_from_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_from_clause_t)!=NULL)((*yyvaluep).opt_from_clause_t)->deep_delete(); }
#line 3612 "bison_parser.cpp"
        break;

    case 387: /* from_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).from_clause_t)!=NULL)((*yyvaluep).from_clause_t)->deep_delete(); }
#line 3618 "bison_parser.cpp"
        break;

    case 388: /* opt_where  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_where_t)!=NULL)((*yyvaluep).opt_where_t)->deep_delete(); }
#line 3624 "bison_parser.cpp"
        break;

    case 389: /* opt_else_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_else_expr_t)!=NULL)((*yyvaluep).opt_else_expr_t)->deep_delete(); }
#line 3630 "bison_parser.cpp"
        break;

    case 390: /* opt_escape_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_escape_expr_t)!=NULL)((*yyvaluep).opt_escape_expr_t)->deep_delete(); }
#line 3636 "bison_parser.cpp"
        break;

    case 391: /* opt_group  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_group_t)!=NULL)((*yyvaluep).opt_group_t)->deep_delete(); }
#line 3642 "bison_parser.cpp"
        break;

    case 392: /* opt_having  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_having_t)!=NULL)((*yyvaluep).opt_having_t)->deep_delete(); }
#line 3648 "bison_parser.cpp"
        break;

    case 393: /* opt_order  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_order_t)!=NULL)((*yyvaluep).opt_order_t)->deep_delete(); }
#line 3654 "bison_parser.cpp"
        break;

    case 394: /* order_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).order_list_t)!=NULL)((*yyvaluep).order_list_t)->deep_delete(); }
#line 3660 "bison_parser.cpp"
        break;

    case 395: /* order_term  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).order_term_t)!=NULL)((*yyvaluep).order_term_t)->deep_delete(); }
#line 3666 "bison_parser.cpp"
        break;

    case 396: /* opt_order_type  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_order_type_t)!=NULL)((*yyvaluep).opt_order_type_t)->deep_delete(); }
#line 3672 "bison_parser.cpp"
        break;

    case 397: /* opt_limit  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_limit_t)!=NULL)((*yyvaluep).opt_limit_t)->deep_delete(); }
#line 3678 "bison_parser.cpp"
        break;

    case 398: /* expr_list_paren_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).expr_list_paren_list_t)!=NULL)((*yyvaluep).expr_list_paren_list_t)->deep_delete(); }
#line 3684 "bison_parser.cpp"
        break;

    case 399: /* expr_list_paren  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).expr_list_paren_t)!=NULL)((*yyvaluep).expr_list_paren_t)->deep_delete(); }
#line 3690 "bison_parser.cpp"
        break;

    case 400: /* expr_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).expr_list_t)!=NULL)((*yyvaluep).expr_list_t)->deep_delete(); }
#line 3696 "bison_parser.cpp"
        break;

    case 401: /* function_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).function_name_t)!=NULL)((*yyvaluep).function_name_t)->deep_delete(); }
#line 3702 "bison_parser.cpp"
        break;

    case 402: /* function_args  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).function_args_t)!=NULL)((*yyvaluep).function_args_t)->deep_delete(); }
#line 3708 "bison_parser.cpp"
        break;

    case 403: /* new_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).new_expr_t)!=NULL)((*yyvaluep).new_expr_t)->deep_delete(); }
#line 3714 "bison_parser.cpp"
        break;

    case 404: /* unary_op  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).unary_op_t)!=NULL)((*yyvaluep).unary_op_t)->deep_delete(); }
#line 3720 "bison_parser.cpp"
        break;

    case 405: /* binary_op  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).binary_op_t)!=NULL)((*yyvaluep).binary_op_t)->deep_delete(); }
#line 3726 "bison_parser.cpp"
        break;

    case 406: /* in_op  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).binary_op_t)!=NULL)((*yyvaluep).binary_op_t)->deep_delete(); }
#line 3732 "bison_parser.cpp"
        break;

    case 407: /* similar_bop  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).binary_op_t)!=NULL)((*yyvaluep).binary_op_t)->deep_delete(); }
#line 3738 "bison_parser.cpp"
        break;

    case 408: /* in_target  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).in_target_t)!=NULL)((*yyvaluep).in_target_t)->deep_delete(); }
#line 3744 "bison_parser.cpp"
        break;

    case 409: /* raise_function  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).raise_function_t)!=NULL)((*yyvaluep).raise_function_t)->deep_delete(); }
#line 3750 "bison_parser.cpp"
        break;

    case 410: /* opt_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_expr_t)!=NULL)((*yyvaluep).opt_expr_t)->deep_delete(); }
#line 3756 "bison_parser.cpp"
        break;

    case 411: /* case_condition  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).case_condition_t)!=NULL)((*yyvaluep).case_condition_t)->deep_delete(); }
#line 3762 "bison_parser.cpp"
        break;

    case 412: /* case_condition_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).case_condition_list_t)!=NULL)((*yyvaluep).case_condition_list_t)->deep_delete(); }
#line 3768 "bison_parser.cpp"
        break;

    case 413: /* opt_over_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_over_clause_t)!=NULL)((*yyvaluep).opt_over_clause_t)->deep_delete(); }
#line 3774 "bison_parser.cpp"
        break;

    case 414: /* filter_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).filter_clause_t)!=NULL)((*yyvaluep).filter_clause_t)->deep_delete(); }
#line 3780 "bison_parser.cpp"
        break;

    case 415: /* opt_filter_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_filter_clause_t)!=NULL)((*yyvaluep).opt_filter_clause_t)->deep_delete(); }
#line 3786 "bison_parser.cpp"
        break;

    case 416: /* one_column_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).column_name_t)!=NULL)((*yyvaluep).column_name_t)->deep_delete(); }
#line 3792 "bison_parser.cpp"
        break;

    case 417: /* column_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).column_name_t)!=NULL)((*yyvaluep).column_name_t)->deep_delete(); }
#line 3798 "bison_parser.cpp"
        break;

    case 418: /* literal  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).literal_t)!=NULL)((*yyvaluep).literal_t)->deep_delete(); }
#line 3804 "bison_parser.cpp"
        break;

    case 419: /* string_literal  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).string_literal_t)!=NULL)((*yyvaluep).string_literal_t)->deep_delete(); }
#line 3810 "bison_parser.cpp"
        break;

    case 420: /* signed_number  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).signed_number_t)!=NULL)((*yyvaluep).signed_number_t)->deep_delete(); }
#line 3816 "bison_parser.cpp"
        break;

    case 421: /* numeric_literal  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).numeric_literal_t)!=NULL)((*yyvaluep).numeric_literal_t)->deep_delete(); }
#line 3822 "bison_parser.cpp"
        break;

    case 422: /* null_literal  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).null_literal_t)!=NULL)((*yyvaluep).null_literal_t)->deep_delete(); }
#line 3828 "bison_parser.cpp"
        break;

    case 423: /* blob_literal  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).blob_literal_t)!=NULL)((*yyvaluep).blob_literal_t)->deep_delete(); }
#line 3834 "bison_parser.cpp"
        break;

    case 424: /* param_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).param_expr_t)!=NULL)((*yyvaluep).param_expr_t)->deep_delete(); }
#line 3840 "bison_parser.cpp"
        break;

    case 425: /* opt_index  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_index_t)!=NULL)((*yyvaluep).opt_index_t)->deep_delete(); }
#line 3846 "bison_parser.cpp"
        break;

    case 426: /* on_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).on_expr_t)!=NULL)((*yyvaluep).on_expr_t)->deep_delete(); }
#line 3852 "bison_parser.cpp"
        break;

    case 427: /* else_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).else_expr_t)!=NULL)((*yyvaluep).else_expr_t)->deep_delete(); }
#line 3858 "bison_parser.cpp"
        break;

    case 428: /* where_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).where_expr_t)!=NULL)((*yyvaluep).where_expr_t)->deep_delete(); }
#line 3864 "bison_parser.cpp"
        break;

    case 429: /* escape_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).escape_expr_t)!=NULL)((*yyvaluep).escape_expr_t)->deep_delete(); }
#line 3870 "bison_parser.cpp"
        break;

    case 430: /* qualified_table_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).qualified_table_name_t)!=NULL)((*yyvaluep).qualified_table_name_t)->deep_delete(); }
#line 3876 "bison_parser.cpp"
        break;

    case 431: /* trigger_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).trigger_name_t)!=NULL)((*yyvaluep).trigger_name_t)->deep_delete(); }
#line 3882 "bison_parser.cpp"
        break;

    case 432: /* index_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).index_name_t)!=NULL)((*yyvaluep).index_name_t)->deep_delete(); }
#line 3888 "bison_parser.cpp"
        break;

    case 433: /* table_name  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).table_name_t)!=NULL)((*yyvaluep).table_name_t)->deep_delete(); }
#line 3894 "bison_parser.cpp"
        break;

    case 434: /* table_alias  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).table_alias_t)!=NULL)((*yyvaluep).table_alias_t)->deep_delete(); }
#line 3900 "bison_parser.cpp"
        break;

    case 435: /* opt_table_alias  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_table_alias_t)!=NULL)((*yyvaluep).opt_table_alias_t)->deep_delete(); }
#line 3906 "bison_parser.cpp"
        break;

    case 436: /* opt_table_alias_as  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_table_alias_as_t)!=NULL)((*yyvaluep).opt_table_alias_as_t)->deep_delete(); }
#line 3912 "bison_parser.cpp"
        break;

    case 437: /* column_alias  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).column_alias_t)!=NULL)((*yyvaluep).column_alias_t)->deep_delete(); }
#line 3918 "bison_parser.cpp"
        break;

    case 438: /* opt_column_alias  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_column_alias_t)!=NULL)((*yyvaluep).opt_column_alias_t)->deep_delete(); }
#line 3924 "bison_parser.cpp"
        break;

    case 439: /* opt_with_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_with_clause_t)!=NULL)((*yyvaluep).opt_with_clause_t)->deep_delete(); }
#line 3930 "bison_parser.cpp"
        break;

    case 440: /* with_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).with_clause_t)!=NULL)((*yyvaluep).with_clause_t)->deep_delete(); }
#line 3936 "bison_parser.cpp"
        break;

    case 441: /* common_table_expr_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).common_table_expr_list_t)!=NULL)((*yyvaluep).common_table_expr_list_t)->deep_delete(); }
#line 3942 "bison_parser.cpp"
        break;

    case 442: /* common_table_expr  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).common_table_expr_t)!=NULL)((*yyvaluep).common_table_expr_t)->deep_delete(); }
#line 3948 "bison_parser.cpp"
        break;

    case 443: /* join_op  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).join_op_t)!=NULL)((*yyvaluep).join_op_t)->deep_delete(); }
#line 3954 "bison_parser.cpp"
        break;

    case 444: /* join_constraint  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).join_constraint_t)!=NULL)((*yyvaluep).join_constraint_t)->deep_delete(); }
#line 3960 "bison_parser.cpp"
        break;

    case 445: /* join_suffix  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).join_suffix_t)!=NULL)((*yyvaluep).join_suffix_t)->deep_delete(); }
#line 3966 "bison_parser.cpp"
        break;

    case 446: /* join_suffix_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).join_suffix_list_t)!=NULL)((*yyvaluep).join_suffix_list_t)->deep_delete(); }
#line 3972 "bison_parser.cpp"
        break;

    case 447: /* join_clause  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).join_clause_t)!=NULL)((*yyvaluep).join_clause_t)->deep_delete(); }
#line 3978 "bison_parser.cpp"
        break;

    case 448: /* table_or_subquery_list  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).table_or_subquery_list_t)!=NULL)((*yyvaluep).table_or_subquery_list_t)->deep_delete(); }
#line 3984 "bison_parser.cpp"
        break;

    case 449: /* table_or_subquery  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).table_or_subquery_t)!=NULL)((*yyvaluep).table_or_subquery_t)->deep_delete(); }
#line 3990 "bison_parser.cpp"
        break;

    case 450: /* opt_semicolon  */
#line 573 "bison_parser.y"
            { if(((*yyvaluep).opt_semicolon_t)!=NULL)((*yyvaluep).opt_semicolon_t)->deep_delete(); }
#line 3996 "bison_parser.cpp"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (Program * result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined HSQL_LTYPE_IS_TRIVIAL && HSQL_LTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 74 "bison_parser.y"
{
    // Initialize
    yylloc.first_column = 0;
    yylloc.last_column = 0;
    yylloc.first_line = 0;
    yylloc.last_line = 0;
    yylloc.total_column = 0;
    yylloc.string_length = 0;
}

#line 4114 "bison_parser.cpp"

  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 601 "bison_parser.y"
                                                   {
            (yyval.program_t) = NULL;
            result->opt_semicolon_prefix_ = (yyvsp[-2].opt_semicolon_t);
            result->statement_list_ = (yyvsp[-1].statement_list_t);
            result->opt_semicolon_suffix_ = (yyvsp[0].opt_semicolon_t);
        }
#line 4318 "bison_parser.cpp"
    break;

  case 3:
#line 611 "bison_parser.y"
                  {
            (yyval.statement_list_t) = new StatementList();
            (yyval.statement_list_t)->v_statement_list_.push_back((yyvsp[0].statement_t));
        }
#line 4327 "bison_parser.cpp"
    break;

  case 4:
#line 615 "bison_parser.y"
                                               {
            (yyvsp[-2].statement_list_t)->v_opt_semicolon_list_.push_back((yyvsp[-1].opt_semicolon_t));
            (yyvsp[-2].statement_list_t)->v_statement_list_.push_back((yyvsp[0].statement_t));
            (yyval.statement_list_t) = (yyvsp[-2].statement_list_t);
        }
#line 4337 "bison_parser.cpp"
    break;

  case 5:
#line 623 "bison_parser.y"
                             {
            (yyval.statement_t) = new Statement();
            (yyval.statement_t)->sub_type_ = CASE0;
            (yyval.statement_t)->preparable_statement_ = (yyvsp[0].preparable_statement_t);
        }
#line 4347 "bison_parser.cpp"
    break;

  case 6:
#line 632 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].alter_statement_t); }
#line 4353 "bison_parser.cpp"
    break;

  case 7:
#line 633 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].analyze_statement_t); }
#line 4359 "bison_parser.cpp"
    break;

  case 8:
#line 634 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].attach_statement_t); }
#line 4365 "bison_parser.cpp"
    break;

  case 9:
#line 635 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].begin_statement_t); }
#line 4371 "bison_parser.cpp"
    break;

  case 10:
#line 636 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].commit_statement_t); }
#line 4377 "bison_parser.cpp"
    break;

  case 11:
#line 637 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].create_statement_t); }
#line 4383 "bison_parser.cpp"
    break;

  case 12:
#line 638 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].delete_statement_t); }
#line 4389 "bison_parser.cpp"
    break;

  case 13:
#line 639 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].detach_statement_t); }
#line 4395 "bison_parser.cpp"
    break;

  case 14:
#line 640 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].drop_statement_t); }
#line 4401 "bison_parser.cpp"
    break;

  case 15:
#line 641 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].insert_statement_t); }
#line 4407 "bison_parser.cpp"
    break;

  case 16:
#line 642 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].pragma_statement_t); }
#line 4413 "bison_parser.cpp"
    break;

  case 17:
#line 643 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].reindex_statement_t); }
#line 4419 "bison_parser.cpp"
    break;

  case 18:
#line 644 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].release_statement_t); }
#line 4425 "bison_parser.cpp"
    break;

  case 19:
#line 645 "bison_parser.y"
                            {(yyval.preparable_statement_t) = (yyvsp[0].rollback_statement_t);}
#line 4431 "bison_parser.cpp"
    break;

  case 20:
#line 646 "bison_parser.y"
                            { (yyval.preparable_statement_t) = (yyvsp[0].savepoint_statement_t); }
#line 4437 "bison_parser.cpp"
    break;

  case 21:
#line 647 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].select_statement_t); }
#line 4443 "bison_parser.cpp"
    break;

  case 22:
#line 648 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].update_statement_t); }
#line 4449 "bison_parser.cpp"
    break;

  case 23:
#line 649 "bison_parser.y"
                          { (yyval.preparable_statement_t) = (yyvsp[0].vacuum_statement_t); }
#line 4455 "bison_parser.cpp"
    break;

  case 24:
#line 659 "bison_parser.y"
                                     {
            (yyval.release_statement_t) = new ReleaseStatement();
            (yyval.release_statement_t)->sub_type_ = CASE0;
            (yyval.release_statement_t)->savepoint_name_ = new Identifier((yyvsp[0].sval), id_savepoint_name);
            free((yyvsp[0].sval));
        }
#line 4466 "bison_parser.cpp"
    break;

  case 25:
#line 665 "bison_parser.y"
                           {
            (yyval.release_statement_t) = new ReleaseStatement();
            (yyval.release_statement_t)->sub_type_ = CASE1;
            (yyval.release_statement_t)->savepoint_name_ = new Identifier((yyvsp[0].sval), id_savepoint_name);
            free((yyvsp[0].sval));
        }
#line 4477 "bison_parser.cpp"
    break;

  case 26:
#line 674 "bison_parser.y"
                         {
            (yyval.pragma_statement_t) = new PragmaStatement();
            (yyval.pragma_statement_t)->sub_type_ = CASE0;
            (yyval.pragma_statement_t)->pragma_key_ = (yyvsp[0].pragma_key_t);
        }
#line 4487 "bison_parser.cpp"
    break;

  case 27:
#line 679 "bison_parser.y"
                                           {
            (yyval.pragma_statement_t) = new PragmaStatement();
            (yyval.pragma_statement_t)->sub_type_ = CASE1;
            (yyval.pragma_statement_t)->pragma_key_ = (yyvsp[-2].pragma_key_t);
            (yyval.pragma_statement_t)->pragma_value_ = (yyvsp[0].pragma_value_t);
    }
#line 4498 "bison_parser.cpp"
    break;

  case 28:
#line 685 "bison_parser.y"
                                               {
            (yyval.pragma_statement_t) = new PragmaStatement();
            (yyval.pragma_statement_t)->sub_type_ = CASE2;
            (yyval.pragma_statement_t)->pragma_key_ = (yyvsp[-3].pragma_key_t);
            (yyval.pragma_statement_t)->pragma_value_ = (yyvsp[-1].pragma_value_t);
    }
#line 4509 "bison_parser.cpp"
    break;

  case 29:
#line 694 "bison_parser.y"
                {(yyval.reindex_statement_t) = new ReindexStatement(); (yyval.reindex_statement_t)->sub_type_ = CASE0;}
#line 4515 "bison_parser.cpp"
    break;

  case 30:
#line 695 "bison_parser.y"
                           {(yyval.reindex_statement_t) = new ReindexStatement(); (yyval.reindex_statement_t)->sub_type_ = CASE1; (yyval.reindex_statement_t)->table_name_ = (yyvsp[0].table_name_t); (yyval.reindex_statement_t)->table_name_->identifier_->id_type_ = id_top_table_name;}
#line 4521 "bison_parser.cpp"
    break;

  case 31:
#line 700 "bison_parser.y"
                {(yyval.analyze_statement_t) = new AnalyzeStatement(); (yyval.analyze_statement_t)->sub_type_ = CASE0;}
#line 4527 "bison_parser.cpp"
    break;

  case 32:
#line 701 "bison_parser.y"
                           {(yyval.analyze_statement_t) = new AnalyzeStatement(); (yyval.analyze_statement_t)->sub_type_ = CASE1; (yyval.analyze_statement_t)->table_name_ = (yyvsp[0].table_name_t); (yyval.analyze_statement_t)->table_name_->identifier_->id_type_ = id_top_table_name;}
#line 4533 "bison_parser.cpp"
    break;

  case 33:
#line 705 "bison_parser.y"
                                      {
            (yyval.attach_statement_t) = new AttachStatement();
            (yyval.attach_statement_t)->sub_type_ = CASE0;
            (yyval.attach_statement_t)->expr_ = (yyvsp[-2].new_expr_t);
            (yyval.attach_statement_t)->schema_name_ = (yyvsp[0].schema_name_t);
        }
#line 4544 "bison_parser.cpp"
    break;

  case 34:
#line 711 "bison_parser.y"
                                               {
            (yyval.attach_statement_t) = new AttachStatement();
            (yyval.attach_statement_t)->sub_type_ = CASE1;
            (yyval.attach_statement_t)->expr_ = (yyvsp[-2].new_expr_t);
            (yyval.attach_statement_t)->schema_name_ = (yyvsp[0].schema_name_t);
        }
#line 4555 "bison_parser.cpp"
    break;

  case 35:
#line 720 "bison_parser.y"
                           {
            (yyval.detach_statement_t) = new DetachStatement();
            (yyval.detach_statement_t)->sub_type_ = CASE0;
            (yyval.detach_statement_t)->schema_name_ = (yyvsp[0].schema_name_t);
        }
#line 4565 "bison_parser.cpp"
    break;

  case 36:
#line 725 "bison_parser.y"
                                   {
            (yyval.detach_statement_t) = new DetachStatement();
            (yyval.detach_statement_t)->sub_type_ = CASE1;
            (yyval.detach_statement_t)->schema_name_ = (yyvsp[0].schema_name_t);
    }
#line 4575 "bison_parser.cpp"
    break;

  case 37:
#line 733 "bison_parser.y"
                    {(yyval.pragma_key_t) = new PragmaKey(); (yyval.pragma_key_t)->sub_type_ = CASE0; (yyval.pragma_key_t)->pragma_name_ = (yyvsp[0].pragma_name_t);}
#line 4581 "bison_parser.cpp"
    break;

  case 38:
#line 734 "bison_parser.y"
                                    { (yyval.pragma_key_t) = new PragmaKey(); (yyval.pragma_key_t)->sub_type_ = CASE1; (yyval.pragma_key_t)->schema_name_ = (yyvsp[-2].schema_name_t); (yyval.pragma_key_t)->pragma_name_ = (yyvsp[0].pragma_name_t);}
#line 4587 "bison_parser.cpp"
    break;

  case 39:
#line 738 "bison_parser.y"
                      {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE0; (yyval.pragma_value_t)->signed_number_ = (yyvsp[0].signed_number_t);}
#line 4593 "bison_parser.cpp"
    break;

  case 40:
#line 739 "bison_parser.y"
                       {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE1; (yyval.pragma_value_t)->string_literal_ = (yyvsp[0].string_literal_t);}
#line 4599 "bison_parser.cpp"
    break;

  case 41:
#line 740 "bison_parser.y"
                   {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE2; (yyval.pragma_value_t)->identifier_ = new Identifier((yyvsp[0].sval), id_pragma_value); free((yyvsp[0].sval));}
#line 4605 "bison_parser.cpp"
    break;

  case 42:
#line 741 "bison_parser.y"
           {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE2; (yyval.pragma_value_t)->identifier_ = new Identifier("ON", id_pragma_value); }
#line 4611 "bison_parser.cpp"
    break;

  case 43:
#line 742 "bison_parser.y"
            {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE2; (yyval.pragma_value_t)->identifier_ = new Identifier("OFF", id_pragma_value); }
#line 4617 "bison_parser.cpp"
    break;

  case 44:
#line 743 "bison_parser.y"
               {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE2; (yyval.pragma_value_t)->identifier_ = new Identifier("DELETE", id_pragma_value); }
#line 4623 "bison_parser.cpp"
    break;

  case 45:
#line 744 "bison_parser.y"
                {(yyval.pragma_value_t) = new PragmaValue(); (yyval.pragma_value_t)->sub_type_ = CASE2; (yyval.pragma_value_t)->identifier_ = new Identifier("DEFAULT", id_pragma_value); }
#line 4629 "bison_parser.cpp"
    break;

  case 46:
#line 748 "bison_parser.y"
                   { (yyval.schema_name_t) = new SchemaName(); (yyval.schema_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_schema_name); free((yyvsp[0].sval)); }
#line 4635 "bison_parser.cpp"
    break;

  case 47:
#line 752 "bison_parser.y"
                   {(yyval.pragma_name_t) = new PragmaName(); (yyval.pragma_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_pragma_name); free((yyvsp[0].sval));}
#line 4641 "bison_parser.cpp"
    break;

  case 48:
#line 756 "bison_parser.y"
                             { (yyval.savepoint_statement_t) = new SavepointStatement(); (yyval.savepoint_statement_t)->savepoint_name_ = new Identifier((yyvsp[0].sval), id_create_savepoint_name); free((yyvsp[0].sval)); }
#line 4647 "bison_parser.cpp"
    break;

  case 49:
#line 760 "bison_parser.y"
                                                  {
            (yyval.rollback_statement_t) = new RollbackStatement();
            (yyval.rollback_statement_t)->opt_transaction_ = (yyvsp[-1].opt_transaction_t);
            (yyval.rollback_statement_t)->opt_to_savepoint_ = (yyvsp[0].opt_to_savepoint_t);
        }
#line 4657 "bison_parser.cpp"
    break;

  case 50:
#line 768 "bison_parser.y"
                    {
            (yyval.opt_transaction_t) = new OptTransaction();
            (yyval.opt_transaction_t)->str_val_ = "TRANSACTION";
        }
#line 4666 "bison_parser.cpp"
    break;

  case 51:
#line 772 "bison_parser.y"
                   {
            (yyval.opt_transaction_t) = new OptTransaction();
            (yyval.opt_transaction_t)->str_val_ = "";
        }
#line 4675 "bison_parser.cpp"
    break;

  case 52:
#line 779 "bison_parser.y"
                      {
            (yyval.opt_to_savepoint_t) = new OptToSavepoint();
            (yyval.opt_to_savepoint_t)->sub_type_ = CASE0;
            (yyval.opt_to_savepoint_t)->savepoint_name_ = new Identifier((yyvsp[0].sval), id_savepoint_name);
            free((yyvsp[0].sval));
        }
#line 4686 "bison_parser.cpp"
    break;

  case 53:
#line 785 "bison_parser.y"
                                {
            (yyval.opt_to_savepoint_t) = new OptToSavepoint();
            (yyval.opt_to_savepoint_t)->sub_type_ = CASE1;
            (yyval.opt_to_savepoint_t)->savepoint_name_ = new Identifier((yyvsp[0].sval), id_savepoint_name);
            free((yyvsp[0].sval));
        }
#line 4697 "bison_parser.cpp"
    break;

  case 54:
#line 791 "bison_parser.y"
                   {
            (yyval.opt_to_savepoint_t) = new OptToSavepoint();
            (yyval.opt_to_savepoint_t)->sub_type_ = CASE2;
        }
#line 4706 "bison_parser.cpp"
    break;

  case 55:
#line 799 "bison_parser.y"
                                             {
            (yyval.vacuum_statement_t) = new VacuumStatement();
            (yyval.vacuum_statement_t)->sub_type_ = CASE0;
            (yyval.vacuum_statement_t)->opt_schema_name_ = (yyvsp[-2].opt_schema_name_t);
            (yyval.vacuum_statement_t)->file_path_ = (yyvsp[0].file_path_t);
        }
#line 4717 "bison_parser.cpp"
    break;

  case 56:
#line 805 "bison_parser.y"
                              {
            (yyval.vacuum_statement_t) = new VacuumStatement();
            (yyval.vacuum_statement_t)->sub_type_ = CASE1;
            (yyval.vacuum_statement_t)->opt_schema_name_ = (yyvsp[0].opt_schema_name_t);
        }
#line 4727 "bison_parser.cpp"
    break;

  case 57:
#line 813 "bison_parser.y"
                    {
            (yyval.opt_schema_name_t) = new OptSchemaName();
            (yyval.opt_schema_name_t)->sub_type_ = CASE0;
            (yyval.opt_schema_name_t)->schema_name_ = (yyvsp[0].schema_name_t);
        }
#line 4737 "bison_parser.cpp"
    break;

  case 58:
#line 818 "bison_parser.y"
                  {
            (yyval.opt_schema_name_t) = new OptSchemaName();
            (yyval.opt_schema_name_t)->sub_type_ = CASE1;
        }
#line 4746 "bison_parser.cpp"
    break;

  case 59:
#line 825 "bison_parser.y"
                              {
            (yyval.begin_statement_t) = new BeginStatement();
            (yyval.begin_statement_t)->sub_type_ = CASE0;
            (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4756 "bison_parser.cpp"
    break;

  case 60:
#line 830 "bison_parser.y"
                                       {
            (yyval.begin_statement_t) = new BeginStatement();
            (yyval.begin_statement_t)->sub_type_ = CASE1;
            (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4766 "bison_parser.cpp"
    break;

  case 61:
#line 835 "bison_parser.y"
                                       {
            (yyval.begin_statement_t) = new BeginStatement();
            (yyval.begin_statement_t)->sub_type_ = CASE2;
            (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4776 "bison_parser.cpp"
    break;

  case 62:
#line 840 "bison_parser.y"
                                        {
            (yyval.begin_statement_t) = new BeginStatement();
            (yyval.begin_statement_t)->sub_type_ = CASE3;
            (yyval.begin_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4786 "bison_parser.cpp"
    break;

  case 63:
#line 848 "bison_parser.y"
                               {
            (yyval.commit_statement_t) = new CommitStatement();
            (yyval.commit_statement_t)->sub_type_ = CASE0;
            (yyval.commit_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4796 "bison_parser.cpp"
    break;

  case 64:
#line 853 "bison_parser.y"
                            {
            (yyval.commit_statement_t) = new CommitStatement();
            (yyval.commit_statement_t)->sub_type_ = CASE1;
            (yyval.commit_statement_t)->opt_transaction_ = (yyvsp[0].opt_transaction_t);
        }
#line 4806 "bison_parser.cpp"
    break;

  case 65:
#line 861 "bison_parser.y"
                               { (yyval.partition_by_t) = new PartitionBy(); (yyval.partition_by_t)->expr_list_ = (yyvsp[0].expr_list_t); }
#line 4812 "bison_parser.cpp"
    break;

  case 66:
#line 864 "bison_parser.y"
                     { (yyval.opt_partition_by_t) = new OptPartitionBy(); (yyval.opt_partition_by_t)->sub_type_ = CASE0; (yyval.opt_partition_by_t)->partition_by_ = (yyvsp[0].partition_by_t); }
#line 4818 "bison_parser.cpp"
    break;

  case 67:
#line 865 "bison_parser.y"
                     { (yyval.opt_partition_by_t) = new OptPartitionBy(); (yyval.opt_partition_by_t)->sub_type_ = CASE1; }
#line 4824 "bison_parser.cpp"
    break;

  case 68:
#line 868 "bison_parser.y"
                      {(yyval.opt_upsert_clause_t) = new OptUpsertClause(); (yyval.opt_upsert_clause_t)->sub_type_ = CASE0; (yyval.opt_upsert_clause_t)->upsert_clause_ = (yyvsp[0].upsert_clause_t);}
#line 4830 "bison_parser.cpp"
    break;

  case 69:
#line 869 "bison_parser.y"
                    {(yyval.opt_upsert_clause_t) = new OptUpsertClause(); (yyval.opt_upsert_clause_t)->sub_type_ = CASE1;}
#line 4836 "bison_parser.cpp"
    break;

  case 70:
#line 872 "bison_parser.y"
                    { (yyval.upsert_clause_t) = new UpsertClause(); (yyval.upsert_clause_t)->v_upsert_item_list_.push_back((yyvsp[0].upsert_item_t)); }
#line 4842 "bison_parser.cpp"
    break;

  case 71:
#line 873 "bison_parser.y"
                                  { (yyvsp[-1].upsert_clause_t)->v_upsert_item_list_.push_back((yyvsp[0].upsert_item_t)); (yyval.upsert_clause_t) = (yyvsp[-1].upsert_clause_t); }
#line 4848 "bison_parser.cpp"
    break;

  case 72:
#line 877 "bison_parser.y"
                                                   {
          (yyval.upsert_item_t) = new UpsertItem();
          (yyval.upsert_item_t)->sub_type_ = CASE0;
          (yyval.upsert_item_t)->opt_conflict_target_ = (yyvsp[-2].opt_conflict_target_t);
        }
#line 4858 "bison_parser.cpp"
    break;

  case 73:
#line 882 "bison_parser.y"
                                                                            {
          (yyval.upsert_item_t) = new UpsertItem();
          (yyval.upsert_item_t)->sub_type_ = CASE1;
          (yyval.upsert_item_t)->opt_conflict_target_ = (yyvsp[-5].opt_conflict_target_t);
          (yyval.upsert_item_t)->assign_list_ = (yyvsp[-1].assign_list_t);
          (yyval.upsert_item_t)->opt_where_ = (yyvsp[0].opt_where_t);
        }
#line 4870 "bison_parser.cpp"
    break;

  case 74:
#line 892 "bison_parser.y"
                        { (yyval.opt_conflict_target_t) = new OptConflictTarget(); (yyval.opt_conflict_target_t)->sub_type_ = CASE0; (yyval.opt_conflict_target_t)->conflict_target_ = (yyvsp[0].conflict_target_t); }
#line 4876 "bison_parser.cpp"
    break;

  case 75:
#line 893 "bison_parser.y"
                    { (yyval.opt_conflict_target_t) = new OptConflictTarget(); (yyval.opt_conflict_target_t)->sub_type_ = CASE1; }
#line 4882 "bison_parser.cpp"
    break;

  case 76:
#line 897 "bison_parser.y"
                                              {
          (yyval.conflict_target_t) = new ConflictTarget();
          (yyval.conflict_target_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
          (yyval.conflict_target_t)->opt_where_ = (yyvsp[0].opt_where_t);
        }
#line 4892 "bison_parser.cpp"
    break;

  case 77:
#line 906 "bison_parser.y"
                       {
            (yyval.indexed_column_list_t) = new IndexedColumnList();
            (yyval.indexed_column_list_t)->v_indexed_column_list_.push_back((yyvsp[0].indexed_column_t));
        }
#line 4901 "bison_parser.cpp"
    break;

  case 78:
#line 910 "bison_parser.y"
                                               {
            (yyvsp[-2].indexed_column_list_t)->v_indexed_column_list_.push_back((yyvsp[0].indexed_column_t));
            (yyval.indexed_column_list_t) = (yyvsp[-2].indexed_column_list_t);
        }
#line 4910 "bison_parser.cpp"
    break;

  case 79:
#line 917 "bison_parser.y"
                                            {
            (yyval.indexed_column_t) = new IndexedColumn();
            (yyval.indexed_column_t)->expr_ = (yyvsp[-2].new_expr_t);
            (yyval.indexed_column_t)->opt_collate_ = (yyvsp[-1].opt_collate_t);
            (yyval.indexed_column_t)->opt_order_type_ = (yyvsp[0].opt_order_type_t);
        }
#line 4921 "bison_parser.cpp"
    break;

  case 80:
#line 926 "bison_parser.y"
                           {
            (yyval.collate_t) = new Collate();
            (yyval.collate_t)->collate_name_ = new Identifier((yyvsp[0].sval), id_collation_name);
            free((yyvsp[0].sval));
        }
#line 4931 "bison_parser.cpp"
    break;

  case 81:
#line 935 "bison_parser.y"
                {
          (yyval.opt_collate_t) = new OptCollate();
          (yyval.opt_collate_t)->sub_type_ = CASE0;
          (yyval.opt_collate_t)->collate_ = (yyvsp[0].collate_t);
        }
#line 4941 "bison_parser.cpp"
    break;

  case 82:
#line 940 "bison_parser.y"
                   {
          (yyval.opt_collate_t) = new OptCollate();
          (yyval.opt_collate_t)->sub_type_ = CASE1;
        }
#line 4950 "bison_parser.cpp"
    break;

  case 83:
#line 948 "bison_parser.y"
                      {
            (yyval.assign_list_t) = new AssignList();
            (yyval.assign_list_t)->v_assign_list_.push_back((yyvsp[0].assign_clause_t));

        }
#line 4960 "bison_parser.cpp"
    break;

  case 84:
#line 953 "bison_parser.y"
                                      {
            (yyvsp[-2].assign_list_t)->v_assign_list_.push_back((yyvsp[0].assign_clause_t));
            (yyval.assign_list_t) = (yyvsp[-2].assign_list_t);
        }
#line 4969 "bison_parser.cpp"
    break;

  case 85:
#line 961 "bison_parser.y"
                    {
            (yyval.opt_order_of_null_t) = new OptOrderOfNull();
            (yyval.opt_order_of_null_t)->str_val_ = "NULLS FIRST";
        }
#line 4978 "bison_parser.cpp"
    break;

  case 86:
#line 965 "bison_parser.y"
                   {
            (yyval.opt_order_of_null_t) = new OptOrderOfNull();
            (yyval.opt_order_of_null_t)->str_val_ = "NULLS LAST";
        }
#line 4987 "bison_parser.cpp"
    break;

  case 87:
#line 969 "bison_parser.y"
        {
            (yyval.opt_order_of_null_t) = new OptOrderOfNull();
            (yyval.opt_order_of_null_t)->str_val_ = "";
        }
#line 4996 "bison_parser.cpp"
    break;

  case 88:
#line 976 "bison_parser.y"
               { (yyval.null_of_expr_t) = new NullOfExpr(); (yyval.null_of_expr_t)->str_val_ = "ISNULL"; }
#line 5002 "bison_parser.cpp"
    break;

  case 89:
#line 977 "bison_parser.y"
                { (yyval.null_of_expr_t) = new NullOfExpr(); (yyval.null_of_expr_t)->str_val_ = "NOTNULL"; }
#line 5008 "bison_parser.cpp"
    break;

  case 90:
#line 978 "bison_parser.y"
                 { (yyval.null_of_expr_t) = new NullOfExpr(); (yyval.null_of_expr_t)->str_val_ = "NOT NULL"; }
#line 5014 "bison_parser.cpp"
    break;

  case 91:
#line 982 "bison_parser.y"
               { (yyval.exists_or_not_t) = new ExistsOrNot(); (yyval.exists_or_not_t)->str_val_ = "EXISTS"; }
#line 5020 "bison_parser.cpp"
    break;

  case 92:
#line 983 "bison_parser.y"
                   { (yyval.exists_or_not_t) = new ExistsOrNot(); (yyval.exists_or_not_t)->str_val_ = "NOT EXISTS"; }
#line 5026 "bison_parser.cpp"
    break;

  case 93:
#line 987 "bison_parser.y"
                                 {
            (yyval.assign_clause_t) = new AssignClause();
            (yyval.assign_clause_t)->sub_type_ = CASE0;
            (yyval.assign_clause_t)->column_name_ = (yyvsp[-2].column_name_t);
            (yyval.assign_clause_t)->expr_ = (yyvsp[0].new_expr_t);
        }
#line 5037 "bison_parser.cpp"
    break;

  case 94:
#line 994 "bison_parser.y"
                                              {
            (yyval.assign_clause_t) = new AssignClause();
            (yyval.assign_clause_t)->sub_type_ = CASE1;
            (yyval.assign_clause_t)->column_name_list_ = (yyvsp[-3].column_name_list_t);
            (yyval.assign_clause_t)->expr_ = (yyvsp[0].new_expr_t);
        }
#line 5048 "bison_parser.cpp"
    break;

  case 95:
#line 1003 "bison_parser.y"
                    {
            (yyval.column_name_list_t) = new ColumnNameList();
            (yyval.column_name_list_t)->v_column_name_list_.push_back((yyvsp[0].column_name_t));
        }
#line 5057 "bison_parser.cpp"
    break;

  case 96:
#line 1007 "bison_parser.y"
                                         {
            (yyvsp[-2].column_name_list_t)->v_column_name_list_.push_back((yyvsp[0].column_name_t));
            (yyval.column_name_list_t) = (yyvsp[-2].column_name_list_t);
        }
#line 5066 "bison_parser.cpp"
    break;

  case 97:
#line 1014 "bison_parser.y"
                       {
            (yyval.file_path_t) = new FilePath();
            (yyval.file_path_t)->str_val_ = (yyvsp[0].string_literal_t)->str_val_;
            delete((yyvsp[0].string_literal_t));
         }
#line 5076 "bison_parser.cpp"
    break;

  case 98:
#line 1027 "bison_parser.y"
                                                    {
          (yyval.alter_statement_t) = new AlterStatement();
          (yyval.alter_statement_t)->sub_type_ = CASE0;
          (yyval.alter_statement_t)->table_name1_ = (yyvsp[-3].table_name_t);
          (yyval.alter_statement_t)->table_name1_->identifier_->id_type_ = id_top_table_name;
          (yyval.alter_statement_t)->table_name2_ = (yyvsp[0].table_name_t);
          (yyval.alter_statement_t)->table_name2_->identifier_->id_type_ = id_create_table_name;
        }
#line 5089 "bison_parser.cpp"
    break;

  case 99:
#line 1035 "bison_parser.y"
                                                                                {
          (yyval.alter_statement_t) = new AlterStatement();
          (yyval.alter_statement_t)->sub_type_ = CASE1;
          (yyval.alter_statement_t)->table_name1_ = (yyvsp[-5].table_name_t);
          (yyval.alter_statement_t)->table_name1_->identifier_->id_type_ = id_top_table_name;
          (yyval.alter_statement_t)->opt_column_ = (yyvsp[-3].opt_column_t);
          (yyval.alter_statement_t)->column_name1_ = (yyvsp[-2].column_name_t);
          (yyval.alter_statement_t)->column_name2_ = (yyvsp[0].column_name_t);
          (yyval.alter_statement_t)->column_name2_->identifier_col_->id_type_ = id_create_column_name;
        }
#line 5104 "bison_parser.cpp"
    break;

  case 100:
#line 1045 "bison_parser.y"
                                                         {
          (yyval.alter_statement_t) = new AlterStatement();
          (yyval.alter_statement_t)->sub_type_ = CASE2;
          (yyval.alter_statement_t)->table_name1_ = (yyvsp[-3].table_name_t);
          (yyval.alter_statement_t)->table_name1_->identifier_->id_type_ = id_top_table_name;
          (yyval.alter_statement_t)->opt_column_ = (yyvsp[-1].opt_column_t);
          (yyval.alter_statement_t)->column_def_ = (yyvsp[0].column_def_t);
        }
#line 5117 "bison_parser.cpp"
    break;

  case 101:
#line 1053 "bison_parser.y"
                                                           {
          (yyval.alter_statement_t) = new AlterStatement();
          (yyval.alter_statement_t)->sub_type_ = CASE3;
          (yyval.alter_statement_t)->table_name1_ = (yyvsp[-3].table_name_t);
          (yyval.alter_statement_t)->table_name1_->identifier_->id_type_ = id_top_table_name;
          (yyval.alter_statement_t)->opt_column_ = (yyvsp[-1].opt_column_t);
          (yyval.alter_statement_t)->column_name1_ = (yyvsp[0].column_name_t);
        }
#line 5130 "bison_parser.cpp"
    break;

  case 102:
#line 1064 "bison_parser.y"
               {
		(yyval.opt_column_t) = new OptColumn();
    (yyval.opt_column_t)->str_val_ = "COLUMN";
	}
#line 5139 "bison_parser.cpp"
    break;

  case 103:
#line 1068 "bison_parser.y"
                   {
		(yyval.opt_column_t) = new OptColumn();
    (yyval.opt_column_t)->str_val_ = "";
	}
#line 5148 "bison_parser.cpp"
    break;

  case 104:
#line 1081 "bison_parser.y"
                                                                              {
          (yyval.create_table_statement_t) = new CreateTableStatement();
          (yyval.create_table_statement_t)->sub_type_ = CASE0;
          (yyval.create_table_statement_t)->opt_tmp_ = NULL; (yyvsp[-5].opt_tmp_t)->deep_delete(); // we do not want TEMP
          (yyval.create_table_statement_t)->opt_if_not_exists_ = (yyvsp[-3].opt_if_not_exists_t);
          (yyvsp[-2].table_name_t)->identifier_->id_type_ = id_create_table_name;
          (yyval.create_table_statement_t)->table_name_ = (yyvsp[-2].table_name_t);
          (yyval.create_table_statement_t)->select_statement_ = (yyvsp[0].select_statement_t);
        }
#line 5162 "bison_parser.cpp"
    break;

  case 105:
#line 1090 "bison_parser.y"
                                                                                                               {
          (yyval.create_table_statement_t) = new CreateTableStatement();
          (yyval.create_table_statement_t)->sub_type_ = CASE1;
          (yyval.create_table_statement_t)->opt_tmp_ = NULL; (yyvsp[-8].opt_tmp_t)->deep_delete(); // we do not want TEMP
          (yyval.create_table_statement_t)->opt_if_not_exists_ = (yyvsp[-6].opt_if_not_exists_t);
          (yyvsp[-5].table_name_t)->identifier_->id_type_ = id_create_table_name;
          (yyval.create_table_statement_t)->table_name_ = (yyvsp[-5].table_name_t);
          (yyval.create_table_statement_t)->column_def_list_ = (yyvsp[-3].column_def_list_t);
          (yyval.create_table_statement_t)->opt_without_rowid_ = (yyvsp[-1].opt_without_rowid_t);
          (yyval.create_table_statement_t)->opt_strict_ = (yyvsp[0].opt_strict_t);
        }
#line 5178 "bison_parser.cpp"
    break;

  case 106:
#line 1101 "bison_parser.y"
                                                                                                                                         {
          (yyval.create_table_statement_t) = new CreateTableStatement();
          (yyval.create_table_statement_t)->sub_type_ = CASE2;
          (yyval.create_table_statement_t)->opt_tmp_ = NULL; (yyvsp[-10].opt_tmp_t)->deep_delete(); // we do not want TEMP
          (yyval.create_table_statement_t)->opt_if_not_exists_ = (yyvsp[-8].opt_if_not_exists_t);
          (yyvsp[-7].table_name_t)->identifier_->id_type_ = id_create_table_name;
          (yyval.create_table_statement_t)->table_name_ = (yyvsp[-7].table_name_t);
          (yyval.create_table_statement_t)->column_def_list_ = (yyvsp[-5].column_def_list_t);
          (yyval.create_table_statement_t)->table_constraint_list_ = (yyvsp[-3].table_constraint_list_t);
          (yyval.create_table_statement_t)->opt_without_rowid_ = (yyvsp[-1].opt_without_rowid_t);
          (yyval.create_table_statement_t)->opt_strict_ = (yyvsp[0].opt_strict_t);
        }
#line 5195 "bison_parser.cpp"
    break;

  case 107:
#line 1116 "bison_parser.y"
                                                                                                   {
            (yyval.create_view_statement_t) = new CreateViewStatement();
            (yyval.create_view_statement_t)->opt_tmp_ = (yyvsp[-6].opt_tmp_t);
            (yyval.create_view_statement_t)->opt_if_not_exists_ = (yyvsp[-4].opt_if_not_exists_t);
            (yyval.create_view_statement_t)->view_name_ = (yyvsp[-3].table_name_t);
            (yyval.create_view_statement_t)->view_name_->identifier_->id_type_ = id_create_table_name;
            (yyval.create_view_statement_t)->opt_column_list_paren_ = (yyvsp[-2].opt_column_list_paren_t);
            (yyval.create_view_statement_t)->select_statement_ = (yyvsp[0].select_statement_t);
            if ((yyval.create_view_statement_t)) {
                auto tmp1 = (yyval.create_view_statement_t)->opt_column_list_paren_;
                if (tmp1) {
                    auto tmp2 = tmp1->column_name_list_;
                    if(tmp2) {
                        for (auto& tmp3 : tmp2->v_column_name_list_) {
                            if (tmp3->identifier_col_) {
                                tmp3->identifier_col_->id_type_ = id_create_column_name;
                            }
                        }
                    }
                }
            }
        }
#line 5222 "bison_parser.cpp"
    break;

  case 108:
#line 1141 "bison_parser.y"
                                                                                                                 {
            (yyval.create_index_statement_t) = new CreateIndexStatement();
            (yyval.create_index_statement_t)->opt_unique_ = (yyvsp[-9].opt_unique_t);
            (yyval.create_index_statement_t)->opt_if_not_exists_ = (yyvsp[-7].opt_if_not_exists_t);
            (yyval.create_index_statement_t)->index_name_ = (yyvsp[-6].index_name_t);
            (yyval.create_index_statement_t)->index_name_->identifier_->id_type_ = id_create_index_name;;
            (yyval.create_index_statement_t)->table_name_ = (yyvsp[-4].table_name_t);
            (yyval.create_index_statement_t)->table_name_->identifier_->id_type_ = id_top_table_name;
            (yyval.create_index_statement_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
            (yyval.create_index_statement_t)->opt_where_ = (yyvsp[0].opt_where_t);
            /* indexed_column_list is defined as id_index_name */
        }
#line 5239 "bison_parser.cpp"
    break;

  case 109:
#line 1156 "bison_parser.y"
                                                                                                                     {
            (yyval.create_virtual_table_statement_t) = new CreateVirtualTableStatement();
            (yyval.create_virtual_table_statement_t)->opt_if_not_exists_ = (yyvsp[-5].opt_if_not_exists_t);
            (yyval.create_virtual_table_statement_t)->table_name_ = (yyvsp[-4].table_name_t);
            (yyval.create_virtual_table_statement_t)->table_name_->identifier_->id_type_ = id_create_table_name;
            (yyval.create_virtual_table_statement_t)->module_name_ = (yyvsp[-2].module_name_t);
            (yyval.create_virtual_table_statement_t)->opt_column_list_paren_ = (yyvsp[-1].opt_column_list_paren_t);
            (yyval.create_virtual_table_statement_t)->opt_without_rowid_ = (yyvsp[0].opt_without_rowid_t);
            if ((yyval.create_virtual_table_statement_t)) {
                auto tmp1 = (yyval.create_virtual_table_statement_t)->opt_column_list_paren_;
                if (tmp1) {
                    auto tmp2 = tmp1->column_name_list_;
                    if(tmp2) {
                        for (auto& tmp3 : tmp2->v_column_name_list_) {
                            if (tmp3->identifier_col_) {
                                if (get_rand_int(100) < 50) {
                                    tmp3->identifier_col_->id_type_ = id_create_column_name;
                                } else {
                                    tmp3->identifier_col_->id_type_ = id_top_column_name;
                                }
                            }
                        }
                    }
                }
            }
        }
#line 5270 "bison_parser.cpp"
    break;

  case 110:
#line 1185 "bison_parser.y"
                                                                                                                                                            {
            (yyval.create_trigger_statement_t) = new CreateTriggerStatement();
            (yyval.create_trigger_statement_t)->opt_tmp_ = (yyvsp[-12].opt_tmp_t);
            (yyval.create_trigger_statement_t)->opt_if_not_exists_ = (yyvsp[-10].opt_if_not_exists_t);
            (yyval.create_trigger_statement_t)->trigger_name_ = (yyvsp[-9].trigger_name_t);
            (yyval.create_trigger_statement_t)->trigger_name_->identifier_->id_type_ = id_create_trigger_name;;
            (yyval.create_trigger_statement_t)->opt_trigger_time_ = (yyvsp[-8].opt_trigger_time_t);
            (yyval.create_trigger_statement_t)->trigger_event_ = (yyvsp[-7].trigger_event_t);
            (yyval.create_trigger_statement_t)->table_name_ = (yyvsp[-5].table_name_t);
            (yyval.create_trigger_statement_t)->table_name_->identifier_->id_type_ = id_top_table_name;
            (yyval.create_trigger_statement_t)->opt_for_each_ = (yyvsp[-4].opt_for_each_t);
            (yyval.create_trigger_statement_t)->opt_when_ = (yyvsp[-3].opt_when_t);
            (yyval.create_trigger_statement_t)->trigger_cmd_list_ = (yyvsp[-1].trigger_cmd_list_t);
        }
#line 5289 "bison_parser.cpp"
    break;

  case 111:
#line 1202 "bison_parser.y"
                               { (yyval.create_statement_t) = (yyvsp[0].create_table_statement_t); }
#line 5295 "bison_parser.cpp"
    break;

  case 112:
#line 1203 "bison_parser.y"
                              { (yyval.create_statement_t) = (yyvsp[0].create_view_statement_t); }
#line 5301 "bison_parser.cpp"
    break;

  case 113:
#line 1204 "bison_parser.y"
                               { (yyval.create_statement_t) = (yyvsp[0].create_index_statement_t); }
#line 5307 "bison_parser.cpp"
    break;

  case 114:
#line 1205 "bison_parser.y"
                                       { (yyval.create_statement_t) = (yyvsp[0].create_virtual_table_statement_t); }
#line 5313 "bison_parser.cpp"
    break;

  case 115:
#line 1206 "bison_parser.y"
                                 { (yyval.create_statement_t) = (yyvsp[0].create_trigger_statement_t); }
#line 5319 "bison_parser.cpp"
    break;

  case 116:
#line 1210 "bison_parser.y"
                      {(yyval.opt_without_rowid_t) = new OptWithoutRowID(); (yyval.opt_without_rowid_t)->str_val_ = "WITHOUT ROWID";}
#line 5325 "bison_parser.cpp"
    break;

  case 117:
#line 1211 "bison_parser.y"
                     {{(yyval.opt_without_rowid_t) = new OptWithoutRowID(); (yyval.opt_without_rowid_t)->str_val_ = "";}}
#line 5331 "bison_parser.cpp"
    break;

  case 118:
#line 1214 "bison_parser.y"
                {(yyval.opt_strict_t) = new OptStrict(); (yyval.opt_strict_t)->str_val_ = "STRICT"; }
#line 5337 "bison_parser.cpp"
    break;

  case 119:
#line 1215 "bison_parser.y"
                    {(yyval.opt_strict_t) = new OptStrict(); (yyval.opt_strict_t)->str_val_ = ", STRICT"; }
#line 5343 "bison_parser.cpp"
    break;

  case 120:
#line 1216 "bison_parser.y"
                     {(yyval.opt_strict_t) = new OptStrict(); (yyval.opt_strict_t)->str_val_ = ""; }
#line 5349 "bison_parser.cpp"
    break;

  case 121:
#line 1219 "bison_parser.y"
               {(yyval.opt_unique_t) = new OptUnique(); (yyval.opt_unique_t)->str_val_ = "UNIQUE";}
#line 5355 "bison_parser.cpp"
    break;

  case 122:
#line 1220 "bison_parser.y"
                  {(yyval.opt_unique_t) = new OptUnique(); (yyval.opt_unique_t)->str_val_ = "";}
#line 5361 "bison_parser.cpp"
    break;

  case 123:
#line 1224 "bison_parser.y"
             {(yyval.opt_tmp_t) = new OptTmp(); (yyval.opt_tmp_t)->str_val_ = "TEMP";}
#line 5367 "bison_parser.cpp"
    break;

  case 124:
#line 1225 "bison_parser.y"
                  {(yyval.opt_tmp_t) = new OptTmp(); (yyval.opt_tmp_t)->str_val_ = "TEMPORARY";}
#line 5373 "bison_parser.cpp"
    break;

  case 125:
#line 1226 "bison_parser.y"
                     {(yyval.opt_tmp_t) = new OptTmp(); (yyval.opt_tmp_t)->str_val_ = "";}
#line 5379 "bison_parser.cpp"
    break;

  case 126:
#line 1230 "bison_parser.y"
               {(yyval.opt_trigger_time_t) = new OptTriggerTime(); (yyval.opt_trigger_time_t)->str_val_ = "BEFORE";}
#line 5385 "bison_parser.cpp"
    break;

  case 127:
#line 1231 "bison_parser.y"
              {(yyval.opt_trigger_time_t) = new OptTriggerTime(); (yyval.opt_trigger_time_t)->str_val_ = "AFTER";}
#line 5391 "bison_parser.cpp"
    break;

  case 128:
#line 1232 "bison_parser.y"
                   {(yyval.opt_trigger_time_t) = new OptTriggerTime(); (yyval.opt_trigger_time_t)->str_val_ = "INSTEAD OF";}
#line 5397 "bison_parser.cpp"
    break;

  case 129:
#line 1233 "bison_parser.y"
                    {(yyval.opt_trigger_time_t) = new OptTriggerTime(); (yyval.opt_trigger_time_t)->str_val_ = "";}
#line 5403 "bison_parser.cpp"
    break;

  case 130:
#line 1237 "bison_parser.y"
               {(yyval.trigger_event_t) = new TriggerEvent(); (yyval.trigger_event_t)->sub_type_ = CASE0;}
#line 5409 "bison_parser.cpp"
    break;

  case 131:
#line 1238 "bison_parser.y"
               {(yyval.trigger_event_t) = new TriggerEvent(); (yyval.trigger_event_t)->sub_type_ = CASE1;}
#line 5415 "bison_parser.cpp"
    break;

  case 132:
#line 1239 "bison_parser.y"
                                  {(yyval.trigger_event_t) = new TriggerEvent(); (yyval.trigger_event_t)->sub_type_ = CASE2; (yyval.trigger_event_t)->opt_of_column_list_ = (yyvsp[0].opt_of_column_list_t);}
#line 5421 "bison_parser.cpp"
    break;

  case 133:
#line 1243 "bison_parser.y"
                            {(yyval.opt_of_column_list_t) = new OptOfColumnList(); (yyval.opt_of_column_list_t)->sub_type_ = CASE0; (yyval.opt_of_column_list_t)->column_name_list_ = (yyvsp[0].column_name_list_t);}
#line 5427 "bison_parser.cpp"
    break;

  case 134:
#line 1244 "bison_parser.y"
                    {(yyval.opt_of_column_list_t) = new OptOfColumnList(); (yyval.opt_of_column_list_t)->sub_type_ = CASE1;}
#line 5433 "bison_parser.cpp"
    break;

  case 135:
#line 1248 "bison_parser.y"
                     {(yyval.opt_for_each_t) = new OptForEach(); (yyval.opt_for_each_t)->str_val_ = "FOR EACH ROW";}
#line 5439 "bison_parser.cpp"
    break;

  case 136:
#line 1249 "bison_parser.y"
                    {(yyval.opt_for_each_t) = new OptForEach(); (yyval.opt_for_each_t)->str_val_ = "";}
#line 5445 "bison_parser.cpp"
    break;

  case 137:
#line 1253 "bison_parser.y"
                      {(yyval.opt_when_t) = new OptWhen(); (yyval.opt_when_t)->sub_type_ = CASE0; (yyval.opt_when_t)->expr_ = (yyvsp[0].new_expr_t);}
#line 5451 "bison_parser.cpp"
    break;

  case 138:
#line 1254 "bison_parser.y"
                    {(yyval.opt_when_t) = new OptWhen(); (yyval.opt_when_t)->sub_type_ = CASE1;}
#line 5457 "bison_parser.cpp"
    break;

  case 139:
#line 1258 "bison_parser.y"
                        {(yyval.trigger_cmd_list_t) = new TriggerCmdList(); (yyval.trigger_cmd_list_t)->v_trigger_cmd_list_.push_back((yyvsp[-1].trigger_cmd_t));}
#line 5463 "bison_parser.cpp"
    break;

  case 140:
#line 1259 "bison_parser.y"
                                         {(yyvsp[-2].trigger_cmd_list_t)->v_trigger_cmd_list_.push_back((yyvsp[-1].trigger_cmd_t)); (yyval.trigger_cmd_list_t) = (yyvsp[-2].trigger_cmd_list_t);}
#line 5469 "bison_parser.cpp"
    break;

  case 141:
#line 1263 "bison_parser.y"
                         {(yyval.trigger_cmd_t) = new TriggerCmd(); (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].select_statement_t);}
#line 5475 "bison_parser.cpp"
    break;

  case 142:
#line 1264 "bison_parser.y"
                         {(yyval.trigger_cmd_t) = new TriggerCmd(); (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].update_statement_t);}
#line 5481 "bison_parser.cpp"
    break;

  case 143:
#line 1265 "bison_parser.y"
                         {(yyval.trigger_cmd_t) = new TriggerCmd(); (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].insert_statement_t);}
#line 5487 "bison_parser.cpp"
    break;

  case 144:
#line 1266 "bison_parser.y"
                         {(yyval.trigger_cmd_t) = new TriggerCmd(); (yyval.trigger_cmd_t)->stmt_ = (yyvsp[0].delete_statement_t);}
#line 5493 "bison_parser.cpp"
    break;

  case 145:
#line 1270 "bison_parser.y"
                   {(yyval.module_name_t) = new ModuleName(); (yyval.module_name_t)->identifier_ = new Identifier((yyvsp[0].sval)); free((yyvsp[0].sval));}
#line 5499 "bison_parser.cpp"
    break;

  case 146:
#line 1274 "bison_parser.y"
            { (yyval.opt_not_t) = new OptNot(); (yyval.opt_not_t)->sub_type_ = CASE0; }
#line 5505 "bison_parser.cpp"
    break;

  case 147:
#line 1275 "bison_parser.y"
                    { (yyval.opt_not_t) = new OptNot(); (yyval.opt_not_t)->sub_type_ = CASE1; }
#line 5511 "bison_parser.cpp"
    break;

  case 148:
#line 1279 "bison_parser.y"
                  { (yyval.opt_recursive_t) = new OptRecursive(); (yyval.opt_recursive_t)->str_val_ = "RECURSIVE"; }
#line 5517 "bison_parser.cpp"
    break;

  case 149:
#line 1280 "bison_parser.y"
                    { (yyval.opt_recursive_t) = new OptRecursive(); (yyval.opt_recursive_t)->str_val_ = ""; }
#line 5523 "bison_parser.cpp"
    break;

  case 150:
#line 1283 "bison_parser.y"
                      { (yyval.opt_if_not_exists_t) = new OptIfNotExists(); (yyval.opt_if_not_exists_t)->str_val_ = "IF NOT EXISTS"; }
#line 5529 "bison_parser.cpp"
    break;

  case 151:
#line 1284 "bison_parser.y"
                    { (yyval.opt_if_not_exists_t) = new OptIfNotExists(); (yyval.opt_if_not_exists_t)->str_val_ = ""; }
#line 5535 "bison_parser.cpp"
    break;

  case 152:
#line 1288 "bison_parser.y"
                   {
            (yyval.column_def_list_t) = new ColumnDefList();
            (yyval.column_def_list_t)->v_column_def_list_.push_back((yyvsp[0].column_def_t));
            }
#line 5544 "bison_parser.cpp"
    break;

  case 153:
#line 1292 "bison_parser.y"
                                       {
            (yyvsp[-2].column_def_list_t)->v_column_def_list_.push_back((yyvsp[0].column_def_t));
            (yyval.column_def_list_t) = (yyvsp[-2].column_def_list_t);
            }
#line 5553 "bison_parser.cpp"
    break;

  case 154:
#line 1299 "bison_parser.y"
                         {
            (yyval.table_constraint_list_t) = new TableConstraintList();
            (yyval.table_constraint_list_t)->v_table_constraint_list_.push_back((yyvsp[0].table_constraint_t));
            }
#line 5562 "bison_parser.cpp"
    break;

  case 155:
#line 1303 "bison_parser.y"
                                               {
            (yyvsp[-1].table_constraint_list_t)->v_table_constraint_list_.push_back((yyvsp[0].table_constraint_t));
            (yyval.table_constraint_list_t) = (yyvsp[-1].table_constraint_list_t);
            }
#line 5571 "bison_parser.cpp"
    break;

  case 156:
#line 1307 "bison_parser.y"
                                                   {
            (yyvsp[-2].table_constraint_list_t)->v_table_constraint_list_.push_back((yyvsp[0].table_constraint_t));
            (yyval.table_constraint_list_t) = (yyvsp[-2].table_constraint_list_t);
            }
#line 5580 "bison_parser.cpp"
    break;

  case 157:
#line 1315 "bison_parser.y"
                                                   {
            (yyval.table_constraint_t) = new TableConstraint();
            (yyval.table_constraint_t)->sub_type_ = CASE0;
            (yyval.table_constraint_t)->opt_constraint_name_ = (yyvsp[-4].opt_constraint_name_t);
            (yyval.table_constraint_t)->expr_ = (yyvsp[-1].new_expr_t);
          }
#line 5591 "bison_parser.cpp"
    break;

  case 158:
#line 1321 "bison_parser.y"
                                                                                        {
            (yyval.table_constraint_t) = new TableConstraint();
            (yyval.table_constraint_t)->sub_type_ = CASE1;
            (yyval.table_constraint_t)->opt_constraint_name_ = (yyvsp[-6].opt_constraint_name_t);
            (yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
            (yyval.table_constraint_t)->opt_conflict_clause_ = (yyvsp[0].opt_conflict_clause_t);
          }
#line 5603 "bison_parser.cpp"
    break;

  case 159:
#line 1328 "bison_parser.y"
                                                                                   {
            (yyval.table_constraint_t) = new TableConstraint();
            (yyval.table_constraint_t)->sub_type_ = CASE2;
            (yyval.table_constraint_t)->opt_constraint_name_ = (yyvsp[-5].opt_constraint_name_t);
            (yyval.table_constraint_t)->indexed_column_list_ = (yyvsp[-2].indexed_column_list_t);
            (yyval.table_constraint_t)->opt_conflict_clause_ = (yyvsp[0].opt_conflict_clause_t);
          }
#line 5615 "bison_parser.cpp"
    break;

  case 160:
#line 1335 "bison_parser.y"
                                                                                    {
            (yyval.table_constraint_t) = new TableConstraint();
            (yyval.table_constraint_t)->sub_type_ = CASE3;
            (yyval.table_constraint_t)->opt_constraint_name_ = (yyvsp[-6].opt_constraint_name_t);
            (yyval.table_constraint_t)->column_name_list_ = (yyvsp[-2].column_name_list_t);
            (yyval.table_constraint_t)->foreign_key_clause_ = (yyvsp[0].foreign_key_clause_t);
        }
#line 5627 "bison_parser.cpp"
    break;

  case 161:
#line 1345 "bison_parser.y"
                                                         {
            (yyval.column_def_t) = new ColumnDef();
            (yyval.column_def_t)->identifier_ = new Identifier((yyvsp[-2].sval), id_create_column_name);
            (yyval.column_def_t)->column_type_ = (yyvsp[-1].column_type_t);
            (yyval.column_def_t)->opt_column_constraintlist_ = (yyvsp[0].opt_column_constraintlist_t);
            free((yyvsp[-2].sval));
        }
#line 5639 "bison_parser.cpp"
    break;

  case 162:
#line 1356 "bison_parser.y"
                              {(yyval.opt_column_constraintlist_t) = new OptColumnConstraintlist(); (yyval.opt_column_constraintlist_t)->sub_type_ = CASE0; (yyval.opt_column_constraintlist_t)->column_constraintlist_ = (yyvsp[0].column_constraintlist_t);}
#line 5645 "bison_parser.cpp"
    break;

  case 163:
#line 1357 "bison_parser.y"
                    {(yyval.opt_column_constraintlist_t) = new OptColumnConstraintlist(); (yyval.opt_column_constraintlist_t)->sub_type_ = CASE1;}
#line 5651 "bison_parser.cpp"
    break;

  case 164:
#line 1361 "bison_parser.y"
                                                {
            (yyvsp[-1].column_constraintlist_t)->v_column_constraint_.push_back((yyvsp[0].column_constraint_t));
            (yyval.column_constraintlist_t) = (yyvsp[-1].column_constraintlist_t);
            }
#line 5660 "bison_parser.cpp"
    break;

  case 165:
#line 1365 "bison_parser.y"
                          {
        (yyval.column_constraintlist_t) = new ColumnConstraintlist();
        (yyval.column_constraintlist_t)->v_column_constraint_.push_back((yyvsp[0].column_constraint_t));
        }
#line 5669 "bison_parser.cpp"
    break;

  case 166:
#line 1373 "bison_parser.y"
                              {
            (yyval.opt_constraint_name_t) = new OptConstraintName();
            (yyval.opt_constraint_name_t)->sub_type_ = CASE0;
            (yyval.opt_constraint_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_table_constraint_name);
            free((yyvsp[0].sval));
          }
#line 5680 "bison_parser.cpp"
    break;

  case 167:
#line 1379 "bison_parser.y"
                    {
            (yyval.opt_constraint_name_t) = new OptConstraintName();
            (yyval.opt_constraint_name_t)->sub_type_ = CASE1;
          }
#line 5689 "bison_parser.cpp"
    break;

  case 168:
#line 1386 "bison_parser.y"
                          { (yyval.opt_deferrable_clause_t) = new OptDeferrableClause(); (yyval.opt_deferrable_clause_t)->sub_type_ = CASE0; (yyval.opt_deferrable_clause_t)->deferrable_clause_ = (yyvsp[0].deferrable_clause_t); }
#line 5695 "bison_parser.cpp"
    break;

  case 169:
#line 1387 "bison_parser.y"
                    { (yyval.opt_deferrable_clause_t) = new OptDeferrableClause(); (yyval.opt_deferrable_clause_t)->sub_type_ = CASE1; }
#line 5701 "bison_parser.cpp"
    break;

  case 170:
#line 1391 "bison_parser.y"
                           { (yyval.deferrable_clause_t) = new DeferrableClause(); (yyval.deferrable_clause_t)->opt_not_ = (yyvsp[-1].opt_not_t); (yyval.deferrable_clause_t)->str_val_ = ""; }
#line 5707 "bison_parser.cpp"
    break;

  case 171:
#line 1392 "bison_parser.y"
                                              { (yyval.deferrable_clause_t) = new DeferrableClause(); (yyval.deferrable_clause_t)->opt_not_ = (yyvsp[-3].opt_not_t); (yyval.deferrable_clause_t)->str_val_ = "INITIALLY DEFERRED"; }
#line 5713 "bison_parser.cpp"
    break;

  case 172:
#line 1393 "bison_parser.y"
                                               { (yyval.deferrable_clause_t) = new DeferrableClause(); (yyval.deferrable_clause_t)->opt_not_ = (yyvsp[-3].opt_not_t); (yyval.deferrable_clause_t)->str_val_ = "INITIALLY IMMEDIATE"; }
#line 5719 "bison_parser.cpp"
    break;

  case 173:
#line 1397 "bison_parser.y"
                            { (yyval.opt_foreign_key_on_list_t) = new OptForeignKeyOnList(); (yyval.opt_foreign_key_on_list_t)->sub_type_ = CASE0; (yyval.opt_foreign_key_on_list_t)->foreign_key_on_list_ = (yyvsp[0].foreign_key_on_list_t); }
#line 5725 "bison_parser.cpp"
    break;

  case 174:
#line 1398 "bison_parser.y"
                    { (yyval.opt_foreign_key_on_list_t) = new OptForeignKeyOnList(); (yyval.opt_foreign_key_on_list_t)->sub_type_ = CASE1; }
#line 5731 "bison_parser.cpp"
    break;

  case 175:
#line 1402 "bison_parser.y"
                       { (yyval.foreign_key_on_list_t) = new ForeignKeyOnList(); (yyval.foreign_key_on_list_t)->v_foreign_key_on_list_.push_back((yyvsp[0].foreign_key_on_t)); }
#line 5737 "bison_parser.cpp"
    break;

  case 176:
#line 1403 "bison_parser.y"
                                           { (yyvsp[-1].foreign_key_on_list_t)->v_foreign_key_on_list_.push_back((yyvsp[0].foreign_key_on_t)); (yyval.foreign_key_on_list_t) = (yyvsp[-1].foreign_key_on_list_t); }
#line 5743 "bison_parser.cpp"
    break;

  case 177:
#line 1407 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON DELETE SET NULL"; }
#line 5749 "bison_parser.cpp"
    break;

  case 178:
#line 1408 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON DELETE SET DEFAULT"; }
#line 5755 "bison_parser.cpp"
    break;

  case 179:
#line 1409 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON DELETE CASCADE"; }
#line 5761 "bison_parser.cpp"
    break;

  case 180:
#line 1410 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON DELETE RESTRICT"; }
#line 5767 "bison_parser.cpp"
    break;

  case 181:
#line 1411 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON DELETE NO ACTION"; }
#line 5773 "bison_parser.cpp"
    break;

  case 182:
#line 1412 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON UPDATE SET NULL"; }
#line 5779 "bison_parser.cpp"
    break;

  case 183:
#line 1413 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON UPDATE SET DEFAULT"; }
#line 5785 "bison_parser.cpp"
    break;

  case 184:
#line 1414 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON UPDATE CASCADE"; }
#line 5791 "bison_parser.cpp"
    break;

  case 185:
#line 1415 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON UPDATE RESTRICT"; }
#line 5797 "bison_parser.cpp"
    break;

  case 186:
#line 1416 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE0; (yyval.foreign_key_on_t)->str_val_ = "ON UPDATE NO ACTION"; }
#line 5803 "bison_parser.cpp"
    break;

  case 187:
#line 1417 "bison_parser.y"
                              { (yyval.foreign_key_on_t) = new ForeignKeyOn(); (yyval.foreign_key_on_t)->sub_type_ = CASE1; (yyval.foreign_key_on_t)->identifier_ = new Identifier((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 5809 "bison_parser.cpp"
    break;

  case 188:
#line 1421 "bison_parser.y"
                                                                                                  {
          (yyval.foreign_key_clause_t) = new ForeignKeyClause();
          (yyval.foreign_key_clause_t)->foreign_table_ = new Identifier((yyvsp[-3].sval)); free((yyvsp[-3].sval));
          (yyval.foreign_key_clause_t)->opt_column_list_paren_ = (yyvsp[-2].opt_column_list_paren_t);
          (yyval.foreign_key_clause_t)->opt_foreign_key_on_list_ = (yyvsp[-1].opt_foreign_key_on_list_t);
          (yyval.foreign_key_clause_t)->opt_deferrable_clause_ = (yyvsp[0].opt_deferrable_clause_t);
        }
#line 5821 "bison_parser.cpp"
    break;

  case 189:
#line 1431 "bison_parser.y"
                                                                                       {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE0;
          (yyval.column_constraint_t)->opt_constraint_name_ = (yyvsp[-5].opt_constraint_name_t);
          (yyval.column_constraint_t)->opt_order_type_ = (yyvsp[-2].opt_order_type_t);
          (yyval.column_constraint_t)->opt_conflict_clause_ = (yyvsp[-1].opt_conflict_clause_t);
          (yyval.column_constraint_t)->opt_autoinc_ = (yyvsp[0].opt_autoinc_t);
        }
#line 5834 "bison_parser.cpp"
    break;

  case 190:
#line 1439 "bison_parser.y"
                                                             {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE1;
          (yyval.column_constraint_t)->opt_constraint_name_ = (yyvsp[-3].opt_constraint_name_t);
          (yyval.column_constraint_t)->opt_not_ = (yyvsp[-2].opt_not_t);
          (yyval.column_constraint_t)->opt_conflict_clause_ = (yyvsp[0].opt_conflict_clause_t);
        }
#line 5846 "bison_parser.cpp"
    break;

  case 191:
#line 1446 "bison_parser.y"
                                                       {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE2;
          (yyval.column_constraint_t)->opt_constraint_name_ = (yyvsp[-2].opt_constraint_name_t);
          (yyval.column_constraint_t)->opt_conflict_clause_ = (yyvsp[0].opt_conflict_clause_t);
        }
#line 5857 "bison_parser.cpp"
    break;

  case 192:
#line 1452 "bison_parser.y"
                                                   {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE3;
          (yyval.column_constraint_t)->opt_constraint_name_ = (yyvsp[-4].opt_constraint_name_t);
          (yyval.column_constraint_t)->expr_ = (yyvsp[-1].new_expr_t);
        }
#line 5868 "bison_parser.cpp"
    break;

  case 193:
#line 1458 "bison_parser.y"
                                 {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE4;
          (yyval.column_constraint_t)->expr_ = (yyvsp[-1].new_expr_t);
        }
#line 5878 "bison_parser.cpp"
    break;

  case 194:
#line 1463 "bison_parser.y"
                        {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE5;
          (yyval.column_constraint_t)->literal_ = (yyvsp[0].literal_t);
        }
#line 5888 "bison_parser.cpp"
    break;

  case 195:
#line 1468 "bison_parser.y"
                              {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE6;
          (yyval.column_constraint_t)->signed_number_ = (yyvsp[0].signed_number_t);
        }
#line 5898 "bison_parser.cpp"
    break;

  case 196:
#line 1473 "bison_parser.y"
                {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE7;
          (yyval.column_constraint_t)->collate_ = (yyvsp[0].collate_t);
        }
#line 5908 "bison_parser.cpp"
    break;

  case 197:
#line 1478 "bison_parser.y"
                                               {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE8;
          (yyval.column_constraint_t)->opt_constraint_name_ = (yyvsp[-1].opt_constraint_name_t);
          (yyval.column_constraint_t)->foreign_key_clause_ = (yyvsp[0].foreign_key_clause_t);
        }
#line 5919 "bison_parser.cpp"
    break;

  case 198:
#line 1484 "bison_parser.y"
                                                                {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE9;
          (yyval.column_constraint_t)->expr_ = (yyvsp[-2].new_expr_t);
          (yyval.column_constraint_t)->opt_stored_virtual_ = (yyvsp[0].opt_stored_virtual_t);
        }
#line 5930 "bison_parser.cpp"
    break;

  case 199:
#line 1490 "bison_parser.y"
                                               {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE10;
          (yyval.column_constraint_t)->expr_ = (yyvsp[-2].new_expr_t);
          (yyval.column_constraint_t)->opt_stored_virtual_ = (yyvsp[0].opt_stored_virtual_t);
        }
#line 5941 "bison_parser.cpp"
    break;

  case 200:
#line 1496 "bison_parser.y"
                         {
          (yyval.column_constraint_t) = new ColumnConstraint();
          (yyval.column_constraint_t)->sub_type_ = CASE11;
    }
#line 5950 "bison_parser.cpp"
    break;

  case 201:
#line 1503 "bison_parser.y"
               { (yyval.opt_stored_virtual_t) = new OptStoredVirtual(); (yyval.opt_stored_virtual_t)->str_val_ = "STORED"; }
#line 5956 "bison_parser.cpp"
    break;

  case 202:
#line 1504 "bison_parser.y"
                 { (yyval.opt_stored_virtual_t) = new OptStoredVirtual(); (yyval.opt_stored_virtual_t)->str_val_ = "VIRTUAL"; }
#line 5962 "bison_parser.cpp"
    break;

  case 203:
#line 1505 "bison_parser.y"
                    { (yyval.opt_stored_virtual_t) = new OptStoredVirtual(); (yyval.opt_stored_virtual_t)->str_val_ = ""; }
#line 5968 "bison_parser.cpp"
    break;

  case 204:
#line 1510 "bison_parser.y"
                                 {(yyval.opt_conflict_clause_t) = new OptConflictClause(); (yyval.opt_conflict_clause_t)->sub_type_ = CASE0; (yyval.opt_conflict_clause_t)->resolve_type_ = (yyvsp[0].resolve_type_t);}
#line 5974 "bison_parser.cpp"
    break;

  case 205:
#line 1511 "bison_parser.y"
                    {(yyval.opt_conflict_clause_t) = new OptConflictClause(); (yyval.opt_conflict_clause_t)->sub_type_ = CASE1;}
#line 5980 "bison_parser.cpp"
    break;

  case 206:
#line 1516 "bison_parser.y"
              {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = "ABORT";}
#line 5986 "bison_parser.cpp"
    break;

  case 207:
#line 1517 "bison_parser.y"
             {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = "FAIL";}
#line 5992 "bison_parser.cpp"
    break;

  case 208:
#line 1518 "bison_parser.y"
               {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = "IGNORE";}
#line 5998 "bison_parser.cpp"
    break;

  case 209:
#line 1519 "bison_parser.y"
                {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = "REPLACE";}
#line 6004 "bison_parser.cpp"
    break;

  case 210:
#line 1520 "bison_parser.y"
                 {(yyval.resolve_type_t) = new ResolveType(); (yyval.resolve_type_t)->str_val_ = "ROLLBACK";}
#line 6010 "bison_parser.cpp"
    break;

  case 211:
#line 1526 "bison_parser.y"
                 {(yyval.opt_autoinc_t) = new OptAutoinc(); (yyval.opt_autoinc_t)->str_val_ = "AUTOINCR";}
#line 6016 "bison_parser.cpp"
    break;

  case 212:
#line 1527 "bison_parser.y"
                      {(yyval.opt_autoinc_t) = new OptAutoinc(); (yyval.opt_autoinc_t)->str_val_ = "AUTOINCREMENT";}
#line 6022 "bison_parser.cpp"
    break;

  case 213:
#line 1528 "bison_parser.y"
                    {(yyval.opt_autoinc_t) = new OptAutoinc(); (yyval.opt_autoinc_t)->str_val_ = "";}
#line 6028 "bison_parser.cpp"
    break;

  case 214:
#line 1533 "bison_parser.y"
               { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("INT"); }
#line 6034 "bison_parser.cpp"
    break;

  case 215:
#line 1534 "bison_parser.y"
             { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("INT2"); }
#line 6040 "bison_parser.cpp"
    break;

  case 216:
#line 1535 "bison_parser.y"
             { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("INT8"); }
#line 6046 "bison_parser.cpp"
    break;

  case 217:
#line 1536 "bison_parser.y"
                { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("INTEGER"); }
#line 6052 "bison_parser.cpp"
    break;

  case 218:
#line 1537 "bison_parser.y"
                { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("TINYINT"); }
#line 6058 "bison_parser.cpp"
    break;

  case 219:
#line 1538 "bison_parser.y"
                 { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("SMALLINT"); }
#line 6064 "bison_parser.cpp"
    break;

  case 220:
#line 1539 "bison_parser.y"
                  { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("MEDIUMINT"); }
#line 6070 "bison_parser.cpp"
    break;

  case 221:
#line 1540 "bison_parser.y"
               { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("BIGINT"); }
#line 6076 "bison_parser.cpp"
    break;

  case 222:
#line 1541 "bison_parser.y"
                         { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("UNSIGNED BIG INT"); }
#line 6082 "bison_parser.cpp"
    break;

  case 223:
#line 1542 "bison_parser.y"
             { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("LONG"); }
#line 6088 "bison_parser.cpp"
    break;

  case 224:
#line 1543 "bison_parser.y"
              { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("FLOAT"); }
#line 6094 "bison_parser.cpp"
    break;

  case 225:
#line 1544 "bison_parser.y"
               { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("DOUBLE"); }
#line 6100 "bison_parser.cpp"
    break;

  case 226:
#line 1545 "bison_parser.y"
                         { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("DOUBLE PRECISION"); }
#line 6106 "bison_parser.cpp"
    break;

  case 227:
#line 1546 "bison_parser.y"
                            { (yyval.column_type_t) = new ColumnType();
            (yyval.column_type_t)->str_val_ = string("CHAR(") + to_string((yyvsp[-1].ival)) + ")";
            }
#line 6114 "bison_parser.cpp"
    break;

  case 228:
#line 1549 "bison_parser.y"
                                 { (yyval.column_type_t) = new ColumnType();
            (yyval.column_type_t)->str_val_ = string("CHARACTER(") + to_string((yyvsp[-1].ival)) + ")";
            }
#line 6122 "bison_parser.cpp"
    break;

  case 229:
#line 1552 "bison_parser.y"
                               {
            (yyval.column_type_t) = new ColumnType();
            (yyval.column_type_t)->str_val_ = string("VARCHAR(") + to_string((yyvsp[-1].ival)) + ")";
            }
#line 6131 "bison_parser.cpp"
    break;

  case 230:
#line 1556 "bison_parser.y"
                                         {
            (yyval.column_type_t) = new ColumnType();
            (yyval.column_type_t)->str_val_ = string("VARYING CHARACTER(") + to_string((yyvsp[-1].ival)) + ")";
            }
#line 6140 "bison_parser.cpp"
    break;

  case 231:
#line 1560 "bison_parser.y"
                             { (yyval.column_type_t) = new ColumnType();
            (yyval.column_type_t)->str_val_ = string("NCHAR(") + to_string((yyvsp[-1].ival)) + ")";
            }
#line 6148 "bison_parser.cpp"
    break;

  case 232:
#line 1563 "bison_parser.y"
                                        { (yyval.column_type_t) = new ColumnType();
            (yyval.column_type_t)->str_val_ = string("NATIVE CHARACTER(") + to_string((yyvsp[-1].ival)) + ")";
            }
#line 6156 "bison_parser.cpp"
    break;

  case 233:
#line 1566 "bison_parser.y"
                                { (yyval.column_type_t) = new ColumnType();
            (yyval.column_type_t)->str_val_ = string("NVARCHAR(") + to_string((yyvsp[-1].ival)) + ")";
            }
#line 6164 "bison_parser.cpp"
    break;

  case 234:
#line 1569 "bison_parser.y"
             { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("TEXT"); }
#line 6170 "bison_parser.cpp"
    break;

  case 235:
#line 1570 "bison_parser.y"
             { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("CLOB"); }
#line 6176 "bison_parser.cpp"
    break;

  case 236:
#line 1571 "bison_parser.y"
             { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("BLOB"); }
#line 6182 "bison_parser.cpp"
    break;

  case 237:
#line 1572 "bison_parser.y"
             { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("REAL"); }
#line 6188 "bison_parser.cpp"
    break;

  case 238:
#line 1573 "bison_parser.y"
                { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("NUMERIC"); }
#line 6194 "bison_parser.cpp"
    break;

  case 239:
#line 1574 "bison_parser.y"
                { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("NUM"); }
#line 6200 "bison_parser.cpp"
    break;

  case 240:
#line 1575 "bison_parser.y"
             { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("BOOL"); }
#line 6206 "bison_parser.cpp"
    break;

  case 241:
#line 1576 "bison_parser.y"
                { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("BOOLEAN"); }
#line 6212 "bison_parser.cpp"
    break;

  case 242:
#line 1577 "bison_parser.y"
                                          {
                (yyval.column_type_t) = new ColumnType();
                (yyval.column_type_t)->str_val_ = string("DECIMAL(") + to_string((yyvsp[-3].ival)) + "," + to_string((yyvsp[-1].ival)) + ")";
            }
#line 6221 "bison_parser.cpp"
    break;

  case 243:
#line 1581 "bison_parser.y"
             { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("DATE"); }
#line 6227 "bison_parser.cpp"
    break;

  case 244:
#line 1582 "bison_parser.y"
                 { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("DATETIME"); }
#line 6233 "bison_parser.cpp"
    break;

  case 245:
#line 1583 "bison_parser.y"
                     {(yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("STRING"); }
#line 6239 "bison_parser.cpp"
    break;

  case 246:
#line 1584 "bison_parser.y"
             {(yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string("ANY"); }
#line 6245 "bison_parser.cpp"
    break;

  case 247:
#line 1585 "bison_parser.y"
                   { (yyval.column_type_t) = new ColumnType(); (yyval.column_type_t)->str_val_ = string(""); }
#line 6251 "bison_parser.cpp"
    break;

  case 248:
#line 1595 "bison_parser.y"
                                            {
            (yyval.drop_table_statement_t) = new DropTableStatement();
            (yyval.drop_table_statement_t)->opt_if_exists_ = (yyvsp[-1].opt_if_exists_t);
            (yyval.drop_table_statement_t)->table_name_ = (yyvsp[0].table_name_t);
            (yyval.drop_table_statement_t)->table_name_->identifier_->id_type_ = id_top_table_name;
        }
#line 6262 "bison_parser.cpp"
    break;

  case 249:
#line 1604 "bison_parser.y"
                                            {
            (yyval.drop_index_statement_t) = new DropIndexStatement();
            (yyval.drop_index_statement_t)->opt_if_exists_ = (yyvsp[-1].opt_if_exists_t);
            (yyval.drop_index_statement_t)->index_name_ = (yyvsp[0].index_name_t);
        }
#line 6272 "bison_parser.cpp"
    break;

  case 250:
#line 1612 "bison_parser.y"
                                           {
            (yyval.drop_view_statement_t) = new DropViewStatement();
            (yyval.drop_view_statement_t)->opt_if_exists_ = (yyvsp[-1].opt_if_exists_t);
            (yyval.drop_view_statement_t)->view_name_ = (yyvsp[0].table_name_t);
            (yyval.drop_view_statement_t)->view_name_->identifier_->id_type_ = id_top_table_name;
        }
#line 6283 "bison_parser.cpp"
    break;

  case 251:
#line 1621 "bison_parser.y"
                                                {
            (yyval.drop_trigger_statement_t) = new DropTriggerStatement();
            (yyval.drop_trigger_statement_t)->opt_if_exists_ = (yyvsp[-1].opt_if_exists_t);
            (yyval.drop_trigger_statement_t)->trigger_name_ = (yyvsp[0].trigger_name_t);
        }
#line 6293 "bison_parser.cpp"
    break;

  case 252:
#line 1629 "bison_parser.y"
                             { (yyval.drop_statement_t) = (yyvsp[0].drop_table_statement_t); }
#line 6299 "bison_parser.cpp"
    break;

  case 253:
#line 1630 "bison_parser.y"
                             { (yyval.drop_statement_t) = (yyvsp[0].drop_index_statement_t); }
#line 6305 "bison_parser.cpp"
    break;

  case 254:
#line 1631 "bison_parser.y"
                             { (yyval.drop_statement_t) = (yyvsp[0].drop_view_statement_t); }
#line 6311 "bison_parser.cpp"
    break;

  case 255:
#line 1632 "bison_parser.y"
                               { (yyval.drop_statement_t) = (yyvsp[0].drop_trigger_statement_t); }
#line 6317 "bison_parser.cpp"
    break;

  case 256:
#line 1636 "bison_parser.y"
                    { (yyval.opt_if_exists_t) = new OptIfExists(); (yyval.opt_if_exists_t)->str_val_ = "IF EXISTS"; }
#line 6323 "bison_parser.cpp"
    break;

  case 257:
#line 1637 "bison_parser.y"
                    { (yyval.opt_if_exists_t) = new OptIfExists(); (yyval.opt_if_exists_t)->str_val_ = ""; }
#line 6329 "bison_parser.cpp"
    break;

  case 258:
#line 1646 "bison_parser.y"
                                                                                        {
            (yyval.delete_statement_t) = new DeleteStatement();
            (yyval.delete_statement_t)->opt_with_clause_ = (yyvsp[-5].opt_with_clause_t);
            (yyval.delete_statement_t)->qualified_table_name_ = (yyvsp[-2].qualified_table_name_t);
            (yyval.delete_statement_t)->opt_where_ = (yyvsp[-1].opt_where_t);
            (yyval.delete_statement_t)->opt_returning_clause_ = (yyvsp[0].opt_returning_clause_t);
        }
#line 6341 "bison_parser.cpp"
    break;

  case 259:
#line 1661 "bison_parser.y"
                                                                                                                          {
            (yyval.insert_statement_t) = new InsertStatement();
            (yyval.insert_statement_t)->sub_type_ = CASE0;
            (yyval.insert_statement_t)->opt_with_clause_ = (yyvsp[-6].opt_with_clause_t);
            (yyval.insert_statement_t)->insert_type_ = (yyvsp[-5].insert_type_t);
            (yyval.insert_statement_t)->table_name_ = (yyvsp[-4].table_name_t);
            (yyval.insert_statement_t)->table_name_->identifier_->id_type_ = id_top_table_name;
            (yyval.insert_statement_t)->opt_table_alias_as_ = (yyvsp[-3].opt_table_alias_as_t);
            (yyval.insert_statement_t)->opt_column_list_paren_ = (yyvsp[-2].opt_column_list_paren_t);
            (yyval.insert_statement_t)->insert_value_= (yyvsp[-1].insert_value_t);
            (yyval.insert_statement_t)->opt_returning_clause_ = (yyvsp[0].opt_returning_clause_t);
        }
#line 6358 "bison_parser.cpp"
    break;

  case 260:
#line 1676 "bison_parser.y"
                                                     {
            (yyval.insert_value_t) = new InsertValue();
            (yyval.insert_value_t)->sub_type_ = CASE0;
            (yyval.insert_value_t)->expr_list_paren_list_ = (yyvsp[-1].expr_list_paren_list_t);
            (yyval.insert_value_t)->opt_upsert_clause_ = (yyvsp[0].opt_upsert_clause_t);
        }
#line 6369 "bison_parser.cpp"
    break;

  case 261:
#line 1682 "bison_parser.y"
                                          {
            (yyval.insert_value_t) = new InsertValue();
            (yyval.insert_value_t)->sub_type_ = CASE1;
            (yyval.insert_value_t)->select_statement_ = (yyvsp[-1].select_statement_t);
            (yyval.insert_value_t)->opt_upsert_clause_ = (yyvsp[0].opt_upsert_clause_t);
        }
#line 6380 "bison_parser.cpp"
    break;

  case 262:
#line 1688 "bison_parser.y"
                       {
            (yyval.insert_value_t) = new InsertValue();
            (yyval.insert_value_t)->sub_type_ = CASE2;
        }
#line 6389 "bison_parser.cpp"
    break;

  case 263:
#line 1696 "bison_parser.y"
               { (yyval.update_type_t) = new UpdateType(); (yyval.update_type_t)->sub_type_ = CASE0; (yyval.update_type_t)->str_val_ = "UPDATE"; }
#line 6395 "bison_parser.cpp"
    break;

  case 264:
#line 1697 "bison_parser.y"
                               {(yyval.update_type_t) = new UpdateType(); (yyval.update_type_t)->sub_type_ = CASE1; (yyval.update_type_t)->resolve_type_ = (yyvsp[0].resolve_type_t);}
#line 6401 "bison_parser.cpp"
    break;

  case 265:
#line 1701 "bison_parser.y"
                    { (yyval.insert_type_t) = new InsertType(); (yyval.insert_type_t)->sub_type_ = CASE0; (yyval.insert_type_t)->str_val_ = "INSERT INTO"; }
#line 6407 "bison_parser.cpp"
    break;

  case 266:
#line 1702 "bison_parser.y"
                     {(yyval.insert_type_t) = new InsertType(); (yyval.insert_type_t)->sub_type_ = CASE0; (yyval.insert_type_t)->str_val_  = "REPLACE INTO";}
#line 6413 "bison_parser.cpp"
    break;

  case 267:
#line 1703 "bison_parser.y"
                                    {(yyval.insert_type_t) = new InsertType(); (yyval.insert_type_t)->sub_type_ = CASE1; (yyval.insert_type_t)->resolve_type_ = (yyvsp[-1].resolve_type_t);}
#line 6419 "bison_parser.cpp"
    break;

  case 268:
#line 1707 "bison_parser.y"
                                 { (yyval.opt_column_list_paren_t) = new OptColumnListParen(); (yyval.opt_column_list_paren_t)->sub_type_ = CASE0; (yyval.opt_column_list_paren_t)->column_name_list_ = (yyvsp[-1].column_name_list_t); }
#line 6425 "bison_parser.cpp"
    break;

  case 269:
#line 1708 "bison_parser.y"
                    { (yyval.opt_column_list_paren_t) = new OptColumnListParen(); (yyval.opt_column_list_paren_t)->sub_type_ = CASE1; }
#line 6431 "bison_parser.cpp"
    break;

  case 270:
#line 1717 "bison_parser.y"
                                                                                                                           {
        (yyval.update_statement_t) = new UpdateStatement();
        (yyval.update_statement_t)->opt_with_clause_ = (yyvsp[-7].opt_with_clause_t);
        (yyval.update_statement_t)->update_type_ = (yyvsp[-6].update_type_t);
        (yyval.update_statement_t)->qualified_table_name_ = (yyvsp[-5].qualified_table_name_t);
        (yyval.update_statement_t)->update_clause_list_ = (yyvsp[-3].update_clause_list_t);
        (yyval.update_statement_t)->opt_from_clause_ = (yyvsp[-2].opt_from_clause_t);
        (yyval.update_statement_t)->opt_where_ = (yyvsp[-1].opt_where_t);
        (yyval.update_statement_t)->opt_returning_clause_ = (yyvsp[0].opt_returning_clause_t);
    }
#line 6446 "bison_parser.cpp"
    break;

  case 271:
#line 1730 "bison_parser.y"
                      {
            (yyval.update_clause_list_t) = new UpdateClauseList();
            (yyval.update_clause_list_t)->v_update_clause_list_.push_back((yyvsp[0].update_clause_t));
            }
#line 6455 "bison_parser.cpp"
    break;

  case 272:
#line 1734 "bison_parser.y"
                                             {
        (yyvsp[-2].update_clause_list_t)->v_update_clause_list_.push_back((yyvsp[0].update_clause_t));
        (yyval.update_clause_list_t) = (yyvsp[-2].update_clause_list_t); }
#line 6463 "bison_parser.cpp"
    break;

  case 273:
#line 1740 "bison_parser.y"
                                     {
            (yyval.update_clause_t) = new UpdateClause();
            (yyval.update_clause_t)->sub_type_ = CASE0;
            (yyval.update_clause_t)->column_name_ = (yyvsp[-2].column_name_t);
            (yyval.update_clause_t)->expr_ = (yyvsp[0].new_expr_t);
        }
#line 6474 "bison_parser.cpp"
    break;

  case 274:
#line 1746 "bison_parser.y"
                                              {
            (yyval.update_clause_t) = new UpdateClause();
            (yyval.update_clause_t)->sub_type_ = CASE1;
            (yyval.update_clause_t)->column_name_list_ = (yyvsp[-3].column_name_list_t);
            (yyval.update_clause_t)->expr_ = (yyvsp[0].new_expr_t);
        }
#line 6485 "bison_parser.cpp"
    break;

  case 275:
#line 1760 "bison_parser.y"
                                                             {
          (yyval.select_statement_t) = new SelectStatement();
          (yyval.select_statement_t)->opt_with_clause_ = (yyvsp[-3].opt_with_clause_t);
          (yyval.select_statement_t)->select_core_list_ = (yyvsp[-2].select_core_list_t);
          (yyval.select_statement_t)->opt_order_ = (yyvsp[-1].opt_order_t);
          //$$->opt_limit_ = $4;
          (yyvsp[0].opt_limit_t)->deep_delete(); // we do not want LIMIT
        }
#line 6498 "bison_parser.cpp"
    break;

  case 276:
#line 1771 "bison_parser.y"
                    { (yyval.select_core_list_t) = new SelectCoreList(); (yyval.select_core_list_t)->v_select_core_list_.push_back((yyvsp[0].select_core_t)); }
#line 6504 "bison_parser.cpp"
    break;

  case 277:
#line 1772 "bison_parser.y"
                                                  {
          (yyvsp[-2].select_core_list_t)->v_select_core_list_.push_back((yyvsp[0].select_core_t));
          (yyvsp[-2].select_core_list_t)->v_set_operator_list_.push_back((yyvsp[-1].set_operator_t));
          (yyval.select_core_list_t) = (yyvsp[-2].select_core_list_t);
        }
#line 6514 "bison_parser.cpp"
    break;

  case 278:
#line 1780 "bison_parser.y"
              {(yyval.set_operator_t) = new SetOperator(); (yyval.set_operator_t)->str_val_ = "UNION";}
#line 6520 "bison_parser.cpp"
    break;

  case 279:
#line 1781 "bison_parser.y"
                  {(yyval.set_operator_t) = new SetOperator(); (yyval.set_operator_t)->str_val_ = "UNION ALL";}
#line 6526 "bison_parser.cpp"
    break;

  case 280:
#line 1782 "bison_parser.y"
                  {(yyval.set_operator_t) = new SetOperator(); (yyval.set_operator_t)->str_val_ = "INTERSECT";}
#line 6532 "bison_parser.cpp"
    break;

  case 281:
#line 1783 "bison_parser.y"
                {(yyval.set_operator_t) = new SetOperator(); (yyval.set_operator_t)->str_val_ = "EXCEPT";}
#line 6538 "bison_parser.cpp"
    break;

  case 282:
#line 1787 "bison_parser.y"
                                                                                                     {
          (yyval.select_core_t) = new SelectCore();
          (yyval.select_core_t)->sub_type_ = CASE0;
          (yyval.select_core_t)->opt_distinct_ = (yyvsp[-5].opt_distinct_t);
          (yyval.select_core_t)->result_column_list_ = (yyvsp[-4].result_column_list_t);
          (yyval.select_core_t)->opt_from_clause_ = (yyvsp[-3].opt_from_clause_t);
          (yyval.select_core_t)->opt_where_ = (yyvsp[-2].opt_where_t);
          (yyval.select_core_t)->opt_group_ = (yyvsp[-1].opt_group_t);
          (yyval.select_core_t)->opt_window_clause_ = (yyvsp[0].opt_window_clause_t);
        }
#line 6553 "bison_parser.cpp"
    break;

  case 283:
#line 1797 "bison_parser.y"
                                    {
          (yyval.select_core_t) = new SelectCore();
          (yyval.select_core_t)->sub_type_ = CASE1;
          (yyval.select_core_t)->expr_list_paren_list_ = (yyvsp[0].expr_list_paren_list_t);
        }
#line 6563 "bison_parser.cpp"
    break;

  case 284:
#line 1805 "bison_parser.y"
                      { (yyval.opt_window_clause_t) = new OptWindowClause(); (yyval.opt_window_clause_t)->sub_type_ = CASE0; (yyval.opt_window_clause_t)->window_clause_ = (yyvsp[0].window_clause_t); }
#line 6569 "bison_parser.cpp"
    break;

  case 285:
#line 1806 "bison_parser.y"
                    { (yyval.opt_window_clause_t) = new OptWindowClause(); (yyval.opt_window_clause_t)->sub_type_ = CASE1; }
#line 6575 "bison_parser.cpp"
    break;

  case 286:
#line 1810 "bison_parser.y"
                               {(yyval.window_clause_t) = new WindowClause(); (yyval.window_clause_t)->windowdefn_list_ = (yyvsp[0].window_defn_list_t);}
#line 6581 "bison_parser.cpp"
    break;

  case 287:
#line 1814 "bison_parser.y"
                   {(yyval.window_defn_list_t) = new WindowDefnList(); (yyval.window_defn_list_t)->v_windowdefn_list_.push_back((yyvsp[0].window_defn_t));}
#line 6587 "bison_parser.cpp"
    break;

  case 288:
#line 1815 "bison_parser.y"
                                       {(yyvsp[-2].window_defn_list_t)->v_windowdefn_list_.push_back((yyvsp[0].window_defn_t)); (yyval.window_defn_list_t) = (yyvsp[-2].window_defn_list_t);}
#line 6593 "bison_parser.cpp"
    break;

  case 289:
#line 1819 "bison_parser.y"
                                           {
          (yyval.window_defn_t) = new WindowDefn();
          (yyvsp[-4].window_name_t)->identifier_->id_type_ = id_create_window_name;
          (yyval.window_defn_t)->window_name_ = (yyvsp[-4].window_name_t);
          (yyval.window_defn_t)->window_body_ = (yyvsp[-1].window_body_t);
        }
#line 6604 "bison_parser.cpp"
    break;

  case 290:
#line 1828 "bison_parser.y"
                                                                  {
            (yyval.window_body_t) = new WindowBody();
            (yyval.window_body_t)->sub_type_ = CASE0;
            (yyval.window_body_t)->opt_base_window_name_ = (yyvsp[-3].opt_base_window_name_t);
            (yyval.window_body_t)->opt_partition_by_ = (yyvsp[-2].opt_partition_by_t);
            (yyval.window_body_t)->opt_order_ = (yyvsp[-1].opt_order_t);
            (yyval.window_body_t)->opt_frame_ = (yyvsp[0].opt_frame_t);
        }
#line 6617 "bison_parser.cpp"
    break;

  case 291:
#line 1839 "bison_parser.y"
                   {(yyval.opt_base_window_name_t) = new OptBaseWindowName(); (yyval.opt_base_window_name_t)->sub_type_ = CASE0; (yyval.opt_base_window_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_base_window_name); free((yyvsp[0].sval));}
#line 6623 "bison_parser.cpp"
    break;

  case 292:
#line 1840 "bison_parser.y"
                  {(yyval.opt_base_window_name_t) = new OptBaseWindowName(); (yyval.opt_base_window_name_t)->sub_type_ = CASE1;}
#line 6629 "bison_parser.cpp"
    break;

  case 293:
#line 1844 "bison_parser.y"
                   { (yyval.window_name_t) = new WindowName(); (yyval.window_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_window_name); free((yyvsp[0].sval)); }
#line 6635 "bison_parser.cpp"
    break;

  case 294:
#line 1847 "bison_parser.y"
                                                    {
            (yyval.opt_frame_t) = new OptFrame();
            (yyval.opt_frame_t)->sub_type_ = CASE0;
            (yyval.opt_frame_t)->range_or_rows_ = (yyvsp[-2].range_or_rows_t);
            (yyval.opt_frame_t)->frame_bound_ = (yyvsp[-1].frame_bound_t);
            (yyval.opt_frame_t)->opt_frame_exclude_ = (yyvsp[0].opt_frame_exclude_t);
        }
#line 6647 "bison_parser.cpp"
    break;

  case 295:
#line 1854 "bison_parser.y"
                                                                                   {
            (yyval.opt_frame_t) = new OptFrame();
            (yyval.opt_frame_t)->sub_type_ = CASE1;
            (yyval.opt_frame_t)->range_or_rows_ = (yyvsp[-5].range_or_rows_t);
            (yyval.opt_frame_t)->frame_bound_s_ = (yyvsp[-3].frame_bound_s_t);
            (yyval.opt_frame_t)->frame_bound_e_ = (yyvsp[-1].frame_bound_e_t);
            (yyval.opt_frame_t)->opt_frame_exclude_ = (yyvsp[0].opt_frame_exclude_t);
        }
#line 6660 "bison_parser.cpp"
    break;

  case 296:
#line 1862 "bison_parser.y"
                    {(yyval.opt_frame_t) = new OptFrame(); (yyval.opt_frame_t)->sub_type_ = CASE2;}
#line 6666 "bison_parser.cpp"
    break;

  case 297:
#line 1866 "bison_parser.y"
                { (yyval.range_or_rows_t) = new RangeOrRows(); (yyval.range_or_rows_t)->str_val_ = "RANGE";  }
#line 6672 "bison_parser.cpp"
    break;

  case 298:
#line 1867 "bison_parser.y"
                { (yyval.range_or_rows_t) = new RangeOrRows(); (yyval.range_or_rows_t)->str_val_ = "ROWS";   }
#line 6678 "bison_parser.cpp"
    break;

  case 299:
#line 1868 "bison_parser.y"
                { (yyval.range_or_rows_t) = new RangeOrRows(); (yyval.range_or_rows_t)->str_val_ = "GROUPS"; }
#line 6684 "bison_parser.cpp"
    break;

  case 300:
#line 1872 "bison_parser.y"
                            { (yyval.frame_bound_s_t) = new FrameBoundS(); (yyval.frame_bound_s_t)->sub_type_ = CASE0; (yyval.frame_bound_s_t)->str_val_ = "UNBOUNDED PRECEDING"; }
#line 6690 "bison_parser.cpp"
    break;

  case 301:
#line 1873 "bison_parser.y"
                    { (yyval.frame_bound_s_t) = new FrameBoundS(); (yyval.frame_bound_s_t)->sub_type_ = CASE0; (yyval.frame_bound_s_t)->str_val_ = "CURRENT ROW"; }
#line 6696 "bison_parser.cpp"
    break;

  case 302:
#line 1874 "bison_parser.y"
                           { (yyval.frame_bound_s_t) = new FrameBoundS(); (yyval.frame_bound_s_t)->sub_type_ = CASE1; (yyval.frame_bound_s_t)->str_val_ = "PRECEDING"; (yyval.frame_bound_s_t)->expr_ = (yyvsp[-1].new_expr_t); }
#line 6702 "bison_parser.cpp"
    break;

  case 303:
#line 1875 "bison_parser.y"
                           { (yyval.frame_bound_s_t) = new FrameBoundS(); (yyval.frame_bound_s_t)->sub_type_ = CASE1; (yyval.frame_bound_s_t)->str_val_ = "FOLLOWING"; (yyval.frame_bound_s_t)->expr_ = (yyvsp[-1].new_expr_t); }
#line 6708 "bison_parser.cpp"
    break;

  case 304:
#line 1879 "bison_parser.y"
                            { (yyval.frame_bound_e_t) = new FrameBoundE(); (yyval.frame_bound_e_t)->sub_type_ = CASE0; (yyval.frame_bound_e_t)->str_val_ = "UNBOUNDED FOLLOWING"; }
#line 6714 "bison_parser.cpp"
    break;

  case 305:
#line 1880 "bison_parser.y"
                    { (yyval.frame_bound_e_t) = new FrameBoundE(); (yyval.frame_bound_e_t)->sub_type_ = CASE0; (yyval.frame_bound_e_t)->str_val_ = "CURRENT ROW"; }
#line 6720 "bison_parser.cpp"
    break;

  case 306:
#line 1881 "bison_parser.y"
                           { (yyval.frame_bound_e_t) = new FrameBoundE(); (yyval.frame_bound_e_t)->sub_type_ = CASE1; (yyval.frame_bound_e_t)->str_val_ = "PRECEDING"; (yyval.frame_bound_e_t)->expr_ = (yyvsp[-1].new_expr_t); }
#line 6726 "bison_parser.cpp"
    break;

  case 307:
#line 1882 "bison_parser.y"
                           { (yyval.frame_bound_e_t) = new FrameBoundE(); (yyval.frame_bound_e_t)->sub_type_ = CASE1; (yyval.frame_bound_e_t)->str_val_ = "FOLLOWING"; (yyval.frame_bound_e_t)->expr_ = (yyvsp[-1].new_expr_t); }
#line 6732 "bison_parser.cpp"
    break;

  case 308:
#line 1886 "bison_parser.y"
                            { (yyval.frame_bound_t) = new FrameBound(); (yyval.frame_bound_t)->sub_type_ = CASE0; (yyval.frame_bound_t)->str_val_ = "UNBOUNDED PRECEDING"; }
#line 6738 "bison_parser.cpp"
    break;

  case 309:
#line 1887 "bison_parser.y"
                    {(yyval.frame_bound_t) = new FrameBound(); (yyval.frame_bound_t)->sub_type_ = CASE0; (yyval.frame_bound_t)->str_val_ = "CURRENT ROW"; }
#line 6744 "bison_parser.cpp"
    break;

  case 310:
#line 1888 "bison_parser.y"
                           {(yyval.frame_bound_t) = new FrameBound(); (yyval.frame_bound_t)->sub_type_ = CASE1; (yyval.frame_bound_t)->str_val_ = "PRECEDING"; (yyval.frame_bound_t)->expr_ = (yyvsp[-1].new_expr_t);}
#line 6750 "bison_parser.cpp"
    break;

  case 311:
#line 1892 "bison_parser.y"
                            { (yyval.frame_exclude_t) = new FrameExclude(); (yyval.frame_exclude_t)->str_val_ = "EXCLUDE NO OTHERS"; }
#line 6756 "bison_parser.cpp"
    break;

  case 312:
#line 1893 "bison_parser.y"
                            { (yyval.frame_exclude_t) = new FrameExclude(); (yyval.frame_exclude_t)->str_val_ = "EXCLUDE CURRENT ROW"; }
#line 6762 "bison_parser.cpp"
    break;

  case 313:
#line 1894 "bison_parser.y"
                            { (yyval.frame_exclude_t) = new FrameExclude(); (yyval.frame_exclude_t)->str_val_ = "EXCLUDE GROUP"; }
#line 6768 "bison_parser.cpp"
    break;

  case 314:
#line 1895 "bison_parser.y"
                            { (yyval.frame_exclude_t) = new FrameExclude(); (yyval.frame_exclude_t)->str_val_ = "EXCLUDE TIES"; }
#line 6774 "bison_parser.cpp"
    break;

  case 315:
#line 1899 "bison_parser.y"
                      { (yyval.opt_frame_exclude_t) = new OptFrameExclude(); (yyval.opt_frame_exclude_t)->sub_type_ = CASE0; (yyval.opt_frame_exclude_t)->frame_exclude_ = (yyvsp[0].frame_exclude_t); }
#line 6780 "bison_parser.cpp"
    break;

  case 316:
#line 1900 "bison_parser.y"
                      { (yyval.opt_frame_exclude_t) = new OptFrameExclude(); (yyval.opt_frame_exclude_t)->sub_type_ = CASE1; }
#line 6786 "bison_parser.cpp"
    break;

  case 317:
#line 1904 "bison_parser.y"
                 { (yyval.opt_distinct_t) = new OptDistinct();  (yyval.opt_distinct_t)->str_val_ = "DISTINCT";}
#line 6792 "bison_parser.cpp"
    break;

  case 318:
#line 1905 "bison_parser.y"
            { (yyval.opt_distinct_t) = new OptDistinct();  (yyval.opt_distinct_t)->str_val_ = "ALL";}
#line 6798 "bison_parser.cpp"
    break;

  case 319:
#line 1906 "bison_parser.y"
                    { (yyval.opt_distinct_t) = new OptDistinct();  (yyval.opt_distinct_t)->str_val_ = "";}
#line 6804 "bison_parser.cpp"
    break;

  case 320:
#line 1910 "bison_parser.y"
                      { (yyval.result_column_list_t) = new ResultColumnList(); (yyval.result_column_list_t)->v_result_column_list_.push_back((yyvsp[0].result_column_t)); }
#line 6810 "bison_parser.cpp"
    break;

  case 321:
#line 1911 "bison_parser.y"
                                             {
          (yyvsp[-2].result_column_list_t)->v_result_column_list_.push_back((yyvsp[0].result_column_t));
          (yyval.result_column_list_t) = (yyvsp[-2].result_column_list_t);
        }
#line 6819 "bison_parser.cpp"
    break;

  case 322:
#line 1917 "bison_parser.y"
                                        { (yyval.opt_returning_clause_t) = new OptReturningClause(); (yyval.opt_returning_clause_t)->sub_type_ = CASE0; (yyval.opt_returning_clause_t)->returning_column_list_ = (yyvsp[0].result_column_list_t); }
#line 6825 "bison_parser.cpp"
    break;

  case 323:
#line 1918 "bison_parser.y"
                    { (yyval.opt_returning_clause_t) = new OptReturningClause(); (yyval.opt_returning_clause_t)->sub_type_ = CASE1; }
#line 6831 "bison_parser.cpp"
    break;

  case 324:
#line 1922 "bison_parser.y"
                         { (yyval.result_column_list_t) = new ResultColumnList(); (yyval.result_column_list_t)->v_result_column_list_.push_back((yyvsp[0].result_column_t)); }
#line 6837 "bison_parser.cpp"
    break;

  case 325:
#line 1923 "bison_parser.y"
                                                {
          (yyvsp[-2].result_column_list_t)->v_result_column_list_.push_back((yyvsp[0].result_column_t));
          (yyval.result_column_list_t) = (yyvsp[-2].result_column_list_t);
        }
#line 6846 "bison_parser.cpp"
    break;

  case 326:
#line 1929 "bison_parser.y"
                                  { (yyval.result_column_t) = new ResultColumn(); (yyval.result_column_t)->sub_type_ = CASE0; (yyval.result_column_t)->expr_ = (yyvsp[-1].new_expr_t); (yyval.result_column_t)->opt_column_alias_ = (yyvsp[0].opt_column_alias_t); }
#line 6852 "bison_parser.cpp"
    break;

  case 327:
#line 1930 "bison_parser.y"
            { (yyval.result_column_t) = new ResultColumn(); (yyval.result_column_t)->sub_type_ = CASE1; }
#line 6858 "bison_parser.cpp"
    break;

  case 328:
#line 1931 "bison_parser.y"
                           { (yyval.result_column_t) = new ResultColumn(); (yyval.result_column_t)->sub_type_ = CASE2; (yyval.result_column_t)->table_name_ = (yyvsp[-2].table_name_t); }
#line 6864 "bison_parser.cpp"
    break;

  case 329:
#line 1935 "bison_parser.y"
                                  { (yyval.result_column_t) = new ResultColumn(); (yyval.result_column_t)->sub_type_ = CASE0; (yyval.result_column_t)->expr_ = (yyvsp[-1].new_expr_t); (yyval.result_column_t)->opt_column_alias_ = (yyvsp[0].opt_column_alias_t); }
#line 6870 "bison_parser.cpp"
    break;

  case 330:
#line 1936 "bison_parser.y"
            { (yyval.result_column_t) = new ResultColumn(); (yyval.result_column_t)->sub_type_ = CASE1; }
#line 6876 "bison_parser.cpp"
    break;

  case 331:
#line 1941 "bison_parser.y"
                                      { (yyval.opt_from_clause_t) = new OptFromClause(); (yyval.opt_from_clause_t)->sub_type_ = CASE0; (yyval.opt_from_clause_t)->from_clause_ = (yyvsp[-1].from_clause_t); (yyval.opt_from_clause_t)->opt_column_alias_ = (yyvsp[0].opt_column_alias_t);}
#line 6882 "bison_parser.cpp"
    break;

  case 332:
#line 1942 "bison_parser.y"
                     { (yyval.opt_from_clause_t) = new OptFromClause(); (yyval.opt_from_clause_t)->sub_type_ = CASE1;}
#line 6888 "bison_parser.cpp"
    break;

  case 333:
#line 1946 "bison_parser.y"
                         { (yyval.from_clause_t) = new FromClause(); (yyval.from_clause_t)->sub_type_ = CASE0; (yyval.from_clause_t)->join_clause_ = (yyvsp[0].join_clause_t); }
#line 6894 "bison_parser.cpp"
    break;

  case 334:
#line 1947 "bison_parser.y"
                                    { (yyval.from_clause_t) = new FromClause(); (yyval.from_clause_t)->sub_type_ = CASE1; (yyval.from_clause_t)->table_or_subquery_list_ = (yyvsp[0].table_or_subquery_list_t); }
#line 6900 "bison_parser.cpp"
    break;

  case 335:
#line 1951 "bison_parser.y"
                   { (yyval.opt_where_t) = new OptWhere(); (yyval.opt_where_t)->sub_type_ = CASE0; (yyval.opt_where_t)->where_expr_ = (yyvsp[0].where_expr_t); }
#line 6906 "bison_parser.cpp"
    break;

  case 336:
#line 1952 "bison_parser.y"
                    { (yyval.opt_where_t) = new OptWhere(); (yyval.opt_where_t)->sub_type_ = CASE1;}
#line 6912 "bison_parser.cpp"
    break;

  case 337:
#line 1956 "bison_parser.y"
                  { (yyval.opt_else_expr_t) = new OptElseExpr(); (yyval.opt_else_expr_t)->sub_type_ = CASE0; (yyval.opt_else_expr_t)->else_expr_ = (yyvsp[0].else_expr_t); }
#line 6918 "bison_parser.cpp"
    break;

  case 338:
#line 1957 "bison_parser.y"
                      { (yyval.opt_else_expr_t) = new OptElseExpr(); (yyval.opt_else_expr_t)->sub_type_ = CASE1; }
#line 6924 "bison_parser.cpp"
    break;

  case 339:
#line 1961 "bison_parser.y"
                    { (yyval.opt_escape_expr_t) = new OptEscapeExpr(); (yyval.opt_escape_expr_t)->sub_type_ = CASE0; (yyval.opt_escape_expr_t)->escape_expr_ = (yyvsp[0].escape_expr_t); }
#line 6930 "bison_parser.cpp"
    break;

  case 340:
#line 1962 "bison_parser.y"
                      { (yyval.opt_escape_expr_t) = new OptEscapeExpr(); (yyval.opt_escape_expr_t)->sub_type_ = CASE1; }
#line 6936 "bison_parser.cpp"
    break;

  case 341:
#line 1966 "bison_parser.y"
                                      {
            (yyval.opt_group_t) = new OptGroup();
            (yyval.opt_group_t)->sub_type_ = CASE0;
            (yyval.opt_group_t)->expr_list_ = (yyvsp[-1].expr_list_t);
            (yyval.opt_group_t)->opt_having_ = (yyvsp[0].opt_having_t);
        }
#line 6947 "bison_parser.cpp"
    break;

  case 342:
#line 1972 "bison_parser.y"
                    { (yyval.opt_group_t) = new OptGroup(); (yyval.opt_group_t)->sub_type_ = CASE1;}
#line 6953 "bison_parser.cpp"
    break;

  case 343:
#line 1976 "bison_parser.y"
                        { (yyval.opt_having_t) = new OptHaving(); (yyval.opt_having_t)->sub_type_ = CASE0; (yyval.opt_having_t)->expr_ = (yyvsp[0].new_expr_t); }
#line 6959 "bison_parser.cpp"
    break;

  case 344:
#line 1977 "bison_parser.y"
                    { (yyval.opt_having_t) = new OptHaving(); (yyval.opt_having_t)->sub_type_ = CASE1;}
#line 6965 "bison_parser.cpp"
    break;

  case 345:
#line 1980 "bison_parser.y"
                            { (yyval.opt_order_t) = new OptOrder(); (yyval.opt_order_t)->sub_type_ = CASE0; (yyval.opt_order_t)->order_list_ = (yyvsp[0].order_list_t); }
#line 6971 "bison_parser.cpp"
    break;

  case 346:
#line 1981 "bison_parser.y"
                    {  (yyval.opt_order_t) = new OptOrder(); (yyval.opt_order_t)->sub_type_ = CASE1;}
#line 6977 "bison_parser.cpp"
    break;

  case 347:
#line 1985 "bison_parser.y"
                   { (yyval.order_list_t) = new OrderList(); (yyval.order_list_t)->v_order_term_.push_back((yyvsp[0].order_term_t)); }
#line 6983 "bison_parser.cpp"
    break;

  case 348:
#line 1986 "bison_parser.y"
                                  { (yyvsp[-2].order_list_t)->v_order_term_.push_back((yyvsp[0].order_term_t)); (yyval.order_list_t) = (yyvsp[-2].order_list_t); }
#line 6989 "bison_parser.cpp"
    break;

  case 349:
#line 1990 "bison_parser.y"
                                                             {
          (yyval.order_term_t) = new OrderTerm();
          (yyval.order_term_t)->expr_ = (yyvsp[-3].new_expr_t);
          (yyval.order_term_t)->opt_collate_ = (yyvsp[-2].opt_collate_t);
          (yyval.order_term_t)->opt_order_type_ = (yyvsp[-1].opt_order_type_t);
          (yyval.order_term_t)->opt_order_of_null_ = (yyvsp[0].opt_order_of_null_t);
        }
#line 7001 "bison_parser.cpp"
    break;

  case 350:
#line 2001 "bison_parser.y"
            { (yyval.opt_order_type_t) = new OptOrderType(); (yyval.opt_order_type_t)->str_val_ = "ASC"; }
#line 7007 "bison_parser.cpp"
    break;

  case 351:
#line 2002 "bison_parser.y"
             { (yyval.opt_order_type_t) = new OptOrderType(); (yyval.opt_order_type_t)->str_val_ = "DESC"; }
#line 7013 "bison_parser.cpp"
    break;

  case 352:
#line 2003 "bison_parser.y"
                    { (yyval.opt_order_type_t) = new OptOrderType(); (yyval.opt_order_type_t)->str_val_ = ""; }
#line 7019 "bison_parser.cpp"
    break;

  case 353:
#line 2007 "bison_parser.y"
                       { (yyval.opt_limit_t) = new OptLimit(); (yyval.opt_limit_t)->sub_type_ = CASE0; (yyval.opt_limit_t)->expr1_ = (yyvsp[0].new_expr_t);}
#line 7025 "bison_parser.cpp"
    break;

  case 354:
#line 2008 "bison_parser.y"
                                       { (yyval.opt_limit_t) = new OptLimit(); (yyval.opt_limit_t)->sub_type_ = CASE1; (yyval.opt_limit_t)->expr1_ = (yyvsp[-2].new_expr_t); (yyval.opt_limit_t)->expr2_ = (yyvsp[0].new_expr_t); }
#line 7031 "bison_parser.cpp"
    break;

  case 355:
#line 2009 "bison_parser.y"
                                    { (yyval.opt_limit_t) = new OptLimit(); (yyval.opt_limit_t)->sub_type_ = CASE2; (yyval.opt_limit_t)->expr1_ = (yyvsp[-2].new_expr_t); (yyval.opt_limit_t)->expr2_ = (yyvsp[0].new_expr_t); }
#line 7037 "bison_parser.cpp"
    break;

  case 356:
#line 2010 "bison_parser.y"
                    { (yyval.opt_limit_t) = new OptLimit(); (yyval.opt_limit_t)->sub_type_ = CASE3; }
#line 7043 "bison_parser.cpp"
    break;

  case 357:
#line 2018 "bison_parser.y"
                        { (yyval.expr_list_paren_list_t) = new ExprListParenList(); (yyval.expr_list_paren_list_t)->v_expr_list_paren_list_.push_back((yyvsp[0].expr_list_paren_t)); }
#line 7049 "bison_parser.cpp"
    break;

  case 358:
#line 2019 "bison_parser.y"
                                                 { (yyvsp[-2].expr_list_paren_list_t)->v_expr_list_paren_list_.push_back((yyvsp[0].expr_list_paren_t)); (yyval.expr_list_paren_list_t) = (yyvsp[-2].expr_list_paren_list_t); }
#line 7055 "bison_parser.cpp"
    break;

  case 359:
#line 2023 "bison_parser.y"
                          { (yyval.expr_list_paren_t) = new ExprListParen(); (yyval.expr_list_paren_t)->expr_list_ = (yyvsp[-1].expr_list_t); }
#line 7061 "bison_parser.cpp"
    break;

  case 360:
#line 2026 "bison_parser.y"
                 {
          (yyval.expr_list_t) = new ExprList();
          (yyval.expr_list_t)->v_expr_list_.push_back((yyvsp[0].new_expr_t));
        }
#line 7070 "bison_parser.cpp"
    break;

  case 361:
#line 2030 "bison_parser.y"
                               {
          (yyvsp[-2].expr_list_t)->v_expr_list_.push_back((yyvsp[0].new_expr_t));
          (yyval.expr_list_t) = (yyvsp[-2].expr_list_t);
        }
#line 7079 "bison_parser.cpp"
    break;

  case 362:
#line 2037 "bison_parser.y"
                   {
            (yyval.function_name_t) = new FunctionName();
            (yyval.function_name_t)->identifier_ = new Identifier((yyvsp[0].sval));
            free((yyvsp[0].sval));
        }
#line 7089 "bison_parser.cpp"
    break;

  case 363:
#line 2045 "bison_parser.y"
                               { (yyval.function_args_t) = new FunctionArgs(); (yyval.function_args_t)->sub_type_ = CASE0; (yyval.function_args_t)->opt_distinct_ = (yyvsp[-1].opt_distinct_t); (yyval.function_args_t)->expr_list_ = (yyvsp[0].expr_list_t); }
#line 7095 "bison_parser.cpp"
    break;

  case 364:
#line 2046 "bison_parser.y"
            { (yyval.function_args_t) = new FunctionArgs(); (yyval.function_args_t)->sub_type_ = CASE1; (yyval.function_args_t)->str_val_ = string("*"); }
#line 7101 "bison_parser.cpp"
    break;

  case 365:
#line 2047 "bison_parser.y"
                    { (yyval.function_args_t) = new FunctionArgs(); (yyval.function_args_t)->sub_type_ = CASE1; (yyval.function_args_t)->str_val_ = string(""); }
#line 7107 "bison_parser.cpp"
    break;

  case 366:
#line 2050 "bison_parser.y"
                {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE0;
          (yyval.new_expr_t)->literal_ = (yyvsp[0].literal_t);
        }
#line 7117 "bison_parser.cpp"
    break;

  case 367:
#line 2056 "bison_parser.y"
                    {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE1;
          (yyval.new_expr_t)->column_name_ = (yyvsp[0].column_name_t);
        }
#line 7127 "bison_parser.cpp"
    break;

  case 368:
#line 2061 "bison_parser.y"
                          {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE2;
          (yyval.new_expr_t)->unary_op_ = (yyvsp[-1].unary_op_t);
          (yyval.new_expr_t)->new_expr1_ = (yyvsp[0].new_expr_t);
        }
#line 7138 "bison_parser.cpp"
    break;

  case 369:
#line 2067 "bison_parser.y"
                                    {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE3;
          (yyval.new_expr_t)->new_expr1_ = (yyvsp[-2].new_expr_t);
          (yyval.new_expr_t)->binary_op_ = (yyvsp[-1].binary_op_t);
          (yyval.new_expr_t)->new_expr2_ = (yyvsp[0].new_expr_t);
        }
#line 7150 "bison_parser.cpp"
    break;

  case 370:
#line 2074 "bison_parser.y"
                                                                              {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE4;
          (yyval.new_expr_t)->function_name_ = (yyvsp[-5].function_name_t);
          (yyval.new_expr_t)->function_args_ = (yyvsp[-3].function_args_t);
          (yyval.new_expr_t)->opt_filter_clause_ = (yyvsp[-1].opt_filter_clause_t);
          (yyval.new_expr_t)->opt_over_clause_ = (yyvsp[0].opt_over_clause_t);
        }
#line 7163 "bison_parser.cpp"
    break;

  case 371:
#line 2082 "bison_parser.y"
                          {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE5;
          (yyval.new_expr_t)->expr_list_ = (yyvsp[-1].expr_list_t);
        }
#line 7173 "bison_parser.cpp"
    break;

  case 372:
#line 2087 "bison_parser.y"
                                                   {
		      (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE6;
		      (yyval.new_expr_t)->new_expr1_ = (yyvsp[-3].new_expr_t);
          (yyval.new_expr_t)->column_type_ = (yyvsp[-1].column_type_t);
	      }
#line 7184 "bison_parser.cpp"
    break;

  case 373:
#line 2093 "bison_parser.y"
                         {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE7;
          (yyval.new_expr_t)->new_expr1_ = (yyvsp[-1].new_expr_t);
          (yyval.new_expr_t)->collate_ = (yyvsp[0].collate_t);
        }
#line 7195 "bison_parser.cpp"
    break;

  case 374:
#line 2099 "bison_parser.y"
                                                              {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE8;
          (yyval.new_expr_t)->new_expr1_ = (yyvsp[-4].new_expr_t);
          (yyval.new_expr_t)->opt_not_ = (yyvsp[-3].opt_not_t);
          (yyval.new_expr_t)->binary_op_ = (yyvsp[-2].binary_op_t);
          (yyval.new_expr_t)->new_expr2_ = (yyvsp[-1].new_expr_t);
          (yyval.new_expr_t)->opt_escape_expr_ = (yyvsp[0].opt_escape_expr_t);
        }
#line 7209 "bison_parser.cpp"
    break;

  case 375:
#line 2108 "bison_parser.y"
                              {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE9;
          (yyval.new_expr_t)->new_expr1_ = (yyvsp[-1].new_expr_t);
          (yyval.new_expr_t)->null_of_expr_ = (yyvsp[0].null_of_expr_t);
        }
#line 7220 "bison_parser.cpp"
    break;

  case 376:
#line 2116 "bison_parser.y"
                                                          {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE10;
          (yyval.new_expr_t)->new_expr1_ = (yyvsp[-5].new_expr_t);
          (yyval.new_expr_t)->opt_not_ = (yyvsp[-4].opt_not_t);
          (yyval.new_expr_t)->new_expr2_ = (yyvsp[-2].new_expr_t);
          (yyval.new_expr_t)->new_expr3_ = (yyvsp[0].new_expr_t);
        }
#line 7233 "bison_parser.cpp"
    break;

  case 377:
#line 2124 "bison_parser.y"
                                         {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE11;
          (yyval.new_expr_t)->new_expr1_ = (yyvsp[-3].new_expr_t);
          (yyval.new_expr_t)->opt_not_ = (yyvsp[-2].opt_not_t);
          (yyval.new_expr_t)->binary_op_ = (yyvsp[-1].binary_op_t);
          (yyval.new_expr_t)->in_target_ = (yyvsp[0].in_target_t);
        }
#line 7246 "bison_parser.cpp"
    break;

  case 378:
#line 2132 "bison_parser.y"
                                               {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE12;
          (yyval.new_expr_t)->exists_or_not_ = (yyvsp[-3].exists_or_not_t);
          (yyval.new_expr_t)->select_statement_ = (yyvsp[-1].select_statement_t);
        }
#line 7257 "bison_parser.cpp"
    break;

  case 379:
#line 2138 "bison_parser.y"
                                                            {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE13;
          (yyval.new_expr_t)->opt_expr_ = (yyvsp[-3].opt_expr_t);
          (yyval.new_expr_t)->case_condition_list_ = (yyvsp[-2].case_condition_list_t);
          (yyval.new_expr_t)->opt_else_expr_ = (yyvsp[-1].opt_else_expr_t);
        }
#line 7269 "bison_parser.cpp"
    break;

  case 380:
#line 2145 "bison_parser.y"
                       {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE14;
          (yyval.new_expr_t)->raise_function_ = (yyvsp[0].raise_function_t);
          }
#line 7279 "bison_parser.cpp"
    break;

  case 381:
#line 2150 "bison_parser.y"
                                 {
          (yyval.new_expr_t) = new NewExpr();
          (yyval.new_expr_t)->sub_type_ = CASE15;
          (yyval.new_expr_t)->select_statement_ = (yyvsp[-1].select_statement_t);
        }
#line 7289 "bison_parser.cpp"
    break;

  case 382:
#line 2158 "bison_parser.y"
            { (yyval.unary_op_t) = new UnaryOp(); (yyval.unary_op_t)->str_val_ = "-"; }
#line 7295 "bison_parser.cpp"
    break;

  case 383:
#line 2159 "bison_parser.y"
            { (yyval.unary_op_t) = new UnaryOp(); (yyval.unary_op_t)->str_val_ = "+"; }
#line 7301 "bison_parser.cpp"
    break;

  case 384:
#line 2160 "bison_parser.y"
            { (yyval.unary_op_t) = new UnaryOp(); (yyval.unary_op_t)->str_val_ = "NOT"; }
#line 7307 "bison_parser.cpp"
    break;

  case 385:
#line 2161 "bison_parser.y"
            { (yyval.unary_op_t) = new UnaryOp(); (yyval.unary_op_t)->str_val_ = "~"; }
#line 7313 "bison_parser.cpp"
    break;

  case 386:
#line 2165 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "||"; }
#line 7319 "bison_parser.cpp"
    break;

  case 387:
#line 2166 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "*"; }
#line 7325 "bison_parser.cpp"
    break;

  case 388:
#line 2167 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "/"; }
#line 7331 "bison_parser.cpp"
    break;

  case 389:
#line 2168 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "%"; }
#line 7337 "bison_parser.cpp"
    break;

  case 390:
#line 2169 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "+"; }
#line 7343 "bison_parser.cpp"
    break;

  case 391:
#line 2170 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "-"; }
#line 7349 "bison_parser.cpp"
    break;

  case 392:
#line 2171 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "<<"; }
#line 7355 "bison_parser.cpp"
    break;

  case 393:
#line 2172 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = ">>"; }
#line 7361 "bison_parser.cpp"
    break;

  case 394:
#line 2173 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "&"; }
#line 7367 "bison_parser.cpp"
    break;

  case 395:
#line 2174 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "|"; }
#line 7373 "bison_parser.cpp"
    break;

  case 396:
#line 2175 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "<"; }
#line 7379 "bison_parser.cpp"
    break;

  case 397:
#line 2176 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "<="; }
#line 7385 "bison_parser.cpp"
    break;

  case 398:
#line 2177 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = ">"; }
#line 7391 "bison_parser.cpp"
    break;

  case 399:
#line 2178 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = ">="; }
#line 7397 "bison_parser.cpp"
    break;

  case 400:
#line 2179 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "="; }
#line 7403 "bison_parser.cpp"
    break;

  case 401:
#line 2180 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "=="; }
#line 7409 "bison_parser.cpp"
    break;

  case 402:
#line 2181 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "!="; }
#line 7415 "bison_parser.cpp"
    break;

  case 403:
#line 2182 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "IS"; }
#line 7421 "bison_parser.cpp"
    break;

  case 404:
#line 2185 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "AND"; }
#line 7427 "bison_parser.cpp"
    break;

  case 405:
#line 2186 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "OR"; }
#line 7433 "bison_parser.cpp"
    break;

  case 406:
#line 2190 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "IN"; }
#line 7439 "bison_parser.cpp"
    break;

  case 407:
#line 2194 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "LIKE"; }
#line 7445 "bison_parser.cpp"
    break;

  case 408:
#line 2195 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "GLOB"; }
#line 7451 "bison_parser.cpp"
    break;

  case 409:
#line 2196 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "MATCH"; }
#line 7457 "bison_parser.cpp"
    break;

  case 410:
#line 2197 "bison_parser.y"
                  { (yyval.binary_op_t) = new BinaryOp(); (yyval.binary_op_t)->str_val_ = "REGEXP"; }
#line 7463 "bison_parser.cpp"
    break;

  case 411:
#line 2201 "bison_parser.y"
                  { (yyval.in_target_t) = new InTarget(); (yyval.in_target_t)->sub_type_ = CASE0; }
#line 7469 "bison_parser.cpp"
    break;

  case 412:
#line 2202 "bison_parser.y"
                                 {
          (yyval.in_target_t) = new InTarget();
          (yyval.in_target_t)->sub_type_ = CASE1;
          (yyval.in_target_t)->select_statement_ = (yyvsp[-1].select_statement_t);
        }
#line 7479 "bison_parser.cpp"
    break;

  case 413:
#line 2207 "bison_parser.y"
                          {
          (yyval.in_target_t) = new InTarget();
          (yyval.in_target_t)->sub_type_ = CASE2;
          (yyval.in_target_t)->expr_list_ = (yyvsp[-1].expr_list_t);
        }
#line 7489 "bison_parser.cpp"
    break;

  case 414:
#line 2212 "bison_parser.y"
                   {
          (yyval.in_target_t) = new InTarget();
          (yyval.in_target_t)->sub_type_ = CASE3;
          (yyval.in_target_t)->table_name_ = (yyvsp[0].table_name_t);
        }
#line 7499 "bison_parser.cpp"
    break;

  case 415:
#line 2222 "bison_parser.y"
                             { (yyval.raise_function_t) = new RaiseFunction(); (yyval.raise_function_t)->sub_type_ = CASE0; }
#line 7505 "bison_parser.cpp"
    break;

  case 416:
#line 2223 "bison_parser.y"
                                          {
          (yyval.raise_function_t) = new RaiseFunction();
          (yyval.raise_function_t)->sub_type_ = CASE1;
          (yyval.raise_function_t)->to_raise_ = "RAISE ( ROLLBACK, ";
          (yyval.raise_function_t)->error_msg_ = new Identifier((yyvsp[-1].sval));
          free((yyvsp[-1].sval));
        }
#line 7517 "bison_parser.cpp"
    break;

  case 417:
#line 2230 "bison_parser.y"
                                       {
          (yyval.raise_function_t) = new RaiseFunction();
          (yyval.raise_function_t)->sub_type_ = CASE1;
          (yyval.raise_function_t)->to_raise_ = "RAISE ( ABORT, ";
          (yyval.raise_function_t)->error_msg_ = new Identifier((yyvsp[-1].sval));
          free((yyvsp[-1].sval));
        }
#line 7529 "bison_parser.cpp"
    break;

  case 418:
#line 2237 "bison_parser.y"
                                      {
          (yyval.raise_function_t)->sub_type_ = CASE1;
          (yyval.raise_function_t)->to_raise_ = "RAISE ( FAIL, ";
          (yyval.raise_function_t)->error_msg_ = new Identifier((yyvsp[-1].sval));
          free((yyvsp[-1].sval));
        }
#line 7540 "bison_parser.cpp"
    break;

  case 419:
#line 2246 "bison_parser.y"
                 { (yyval.opt_expr_t) = new OptExpr(); (yyval.opt_expr_t)->sub_type_ = CASE0; (yyval.opt_expr_t)->expr_ = (yyvsp[0].new_expr_t); }
#line 7546 "bison_parser.cpp"
    break;

  case 420:
#line 2247 "bison_parser.y"
                    { (yyval.opt_expr_t) = new OptExpr(); (yyval.opt_expr_t)->sub_type_ = CASE1; }
#line 7552 "bison_parser.cpp"
    break;

  case 421:
#line 2251 "bison_parser.y"
                                    { (yyval.case_condition_t) = new CaseCondition(); (yyval.case_condition_t)->when_expr_ = (yyvsp[-2].new_expr_t); (yyval.case_condition_t)->then_expr_ = (yyvsp[0].new_expr_t); }
#line 7558 "bison_parser.cpp"
    break;

  case 422:
#line 2255 "bison_parser.y"
                       { (yyval.case_condition_list_t) = new CaseConditionList(); (yyval.case_condition_list_t)->v_case_condition_list_.push_back((yyvsp[0].case_condition_t)); }
#line 7564 "bison_parser.cpp"
    break;

  case 423:
#line 2256 "bison_parser.y"
                                           { (yyvsp[-1].case_condition_list_t)->v_case_condition_list_.push_back((yyvsp[0].case_condition_t)); (yyval.case_condition_list_t) = (yyvsp[-1].case_condition_list_t); }
#line 7570 "bison_parser.cpp"
    break;

  case 424:
#line 2260 "bison_parser.y"
                         { (yyval.opt_over_clause_t) = new OptOverClause(); (yyval.opt_over_clause_t)->sub_type_ = CASE0; (yyval.opt_over_clause_t)->window_name_ = (yyvsp[0].window_name_t); }
#line 7576 "bison_parser.cpp"
    break;

  case 425:
#line 2261 "bison_parser.y"
                                 {
          (yyval.opt_over_clause_t) = new OptOverClause();
          (yyval.opt_over_clause_t)->sub_type_ = CASE1;
          (yyval.opt_over_clause_t)->window_body_ = (yyvsp[-1].window_body_t);
        }
#line 7586 "bison_parser.cpp"
    break;

  case 426:
#line 2266 "bison_parser.y"
                    {(yyval.opt_over_clause_t) = new OptOverClause(); (yyval.opt_over_clause_t)->sub_type_ = CASE2;}
#line 7592 "bison_parser.cpp"
    break;

  case 427:
#line 2270 "bison_parser.y"
                                  {(yyval.filter_clause_t) = new FilterClause(); (yyval.filter_clause_t)->where_expr_ = (yyvsp[-1].where_expr_t);}
#line 7598 "bison_parser.cpp"
    break;

  case 428:
#line 2273 "bison_parser.y"
                      { (yyval.opt_filter_clause_t) = new OptFilterClause(); (yyval.opt_filter_clause_t)->sub_type_ = CASE0; (yyval.opt_filter_clause_t)->filter_clause_ = (yyvsp[0].filter_clause_t); }
#line 7604 "bison_parser.cpp"
    break;

  case 429:
#line 2274 "bison_parser.y"
                    {(yyval.opt_filter_clause_t) = new OptFilterClause(); (yyval.opt_filter_clause_t)->sub_type_ = CASE1;}
#line 7610 "bison_parser.cpp"
    break;

  case 430:
#line 2278 "bison_parser.y"
                   {
          (yyval.column_name_t) = new ColumnName();
          (yyval.column_name_t)->sub_type_ = CASE0;
          (yyval.column_name_t)->identifier_col_ = new Identifier((yyvsp[0].sval), id_column_name);
          free((yyvsp[0].sval));
        }
#line 7621 "bison_parser.cpp"
    break;

  case 431:
#line 2284 "bison_parser.y"
              {
          (yyval.column_name_t) = new ColumnName();
          (yyval.column_name_t)->sub_type_ = CASE0;
          (yyval.column_name_t)->identifier_col_ = new Identifier(string("ROWID"), id_column_name);
        }
#line 7631 "bison_parser.cpp"
    break;

  case 432:
#line 2289 "bison_parser.y"
                                  {
          (yyval.column_name_t) = new ColumnName();
          (yyval.column_name_t)->sub_type_ = CASE0;
          //$$->identifier_tbl_ = new Identifier($1, id_table_name);
          (yyval.column_name_t)->identifier_col_ = new Identifier((yyvsp[0].sval), id_column_name);
          free((yyvsp[-2].sval));
          free((yyvsp[0].sval));
        }
#line 7644 "bison_parser.cpp"
    break;

  case 433:
#line 2297 "bison_parser.y"
                             {
          (yyval.column_name_t) = new ColumnName();
          (yyval.column_name_t)->sub_type_ = CASE0;
          //$$->identifier_tbl_ = new Identifier($1, id_table_name);
          (yyval.column_name_t)->identifier_col_ = new Identifier(string("ROWID"), id_column_name);
          free((yyvsp[-2].sval));
        }
#line 7656 "bison_parser.cpp"
    break;

  case 434:
#line 2307 "bison_parser.y"
                        { (yyval.column_name_t)=(yyvsp[0].column_name_t); }
#line 7662 "bison_parser.cpp"
    break;

  case 435:
#line 2308 "bison_parser.y"
            {
          (yyval.column_name_t) = new ColumnName();
          (yyval.column_name_t)->sub_type_ = CASE2;
        }
#line 7671 "bison_parser.cpp"
    break;

  case 436:
#line 2312 "bison_parser.y"
                           {
          (yyval.column_name_t) = new ColumnName();
          (yyval.column_name_t)->sub_type_ = CASE3;
          (yyval.column_name_t)->identifier_tbl_ = new Identifier((yyvsp[-2].sval), id_table_name);
          free((yyvsp[-2].sval));
        }
#line 7682 "bison_parser.cpp"
    break;

  case 437:
#line 2321 "bison_parser.y"
                        { (yyval.literal_t) = (yyvsp[0].numeric_literal_t); }
#line 7688 "bison_parser.cpp"
    break;

  case 438:
#line 2322 "bison_parser.y"
                        { (yyval.literal_t) = (yyvsp[0].string_literal_t); }
#line 7694 "bison_parser.cpp"
    break;

  case 439:
#line 2323 "bison_parser.y"
                        { (yyval.literal_t) = (yyvsp[0].blob_literal_t); }
#line 7700 "bison_parser.cpp"
    break;

  case 440:
#line 2324 "bison_parser.y"
                        { (yyval.literal_t) = (yyvsp[0].null_literal_t); }
#line 7706 "bison_parser.cpp"
    break;

  case 441:
#line 2325 "bison_parser.y"
                        { (yyval.literal_t) = (yyvsp[0].param_expr_t); }
#line 7712 "bison_parser.cpp"
    break;

  case 442:
#line 2329 "bison_parser.y"
               { (yyval.string_literal_t) = new StringLiteral(); (yyval.string_literal_t)->str_val_ = (yyvsp[0].sval); free((yyvsp[0].sval));}
#line 7718 "bison_parser.cpp"
    break;

  case 443:
#line 2333 "bison_parser.y"
                            { (yyval.signed_number_t) = new SignedNumber(); (yyval.signed_number_t)->str_sign_ = ""; (yyval.signed_number_t)->numeric_literal_ = (yyvsp[0].numeric_literal_t); }
#line 7724 "bison_parser.cpp"
    break;

  case 444:
#line 2334 "bison_parser.y"
                            { (yyval.signed_number_t) = new SignedNumber(); (yyval.signed_number_t)->str_sign_ = "+"; (yyval.signed_number_t)->numeric_literal_ = (yyvsp[0].numeric_literal_t); }
#line 7730 "bison_parser.cpp"
    break;

  case 445:
#line 2335 "bison_parser.y"
                            { (yyval.signed_number_t) = new SignedNumber(); (yyval.signed_number_t)->str_sign_ = "-"; (yyval.signed_number_t)->numeric_literal_ = (yyvsp[0].numeric_literal_t); }
#line 7736 "bison_parser.cpp"
    break;

  case 446:
#line 2339 "bison_parser.y"
                 { (yyval.numeric_literal_t) = new NumericLiteral(); (yyval.numeric_literal_t)->value_ = std::to_string((yyvsp[0].fval)); }
#line 7742 "bison_parser.cpp"
    break;

  case 447:
#line 2340 "bison_parser.y"
               { (yyval.numeric_literal_t) = new NumericLiteral(); (yyval.numeric_literal_t)->value_ = std::to_string((yyvsp[0].ival)); }
#line 7748 "bison_parser.cpp"
    break;

  case 448:
#line 2341 "bison_parser.y"
               { (yyval.numeric_literal_t) = new NumericLiteral(); (yyval.numeric_literal_t)->value_ = (yyvsp[0].sval); free((yyvsp[0].sval)); }
#line 7754 "bison_parser.cpp"
    break;

  case 449:
#line 2342 "bison_parser.y"
               { (yyval.numeric_literal_t) = new NumericLiteral(); (yyval.numeric_literal_t)->value_ = (yyvsp[0].sval); free((yyvsp[0].sval)); }
#line 7760 "bison_parser.cpp"
    break;

  case 450:
#line 2343 "bison_parser.y"
             { (yyval.numeric_literal_t) = new NumericLiteral(); (yyval.numeric_literal_t)->value_ = string("TRUE"); }
#line 7766 "bison_parser.cpp"
    break;

  case 451:
#line 2344 "bison_parser.y"
              { (yyval.numeric_literal_t) = new NumericLiteral(); (yyval.numeric_literal_t)->value_ = string("FALSE"); }
#line 7772 "bison_parser.cpp"
    break;

  case 452:
#line 2345 "bison_parser.y"
                     { (yyval.numeric_literal_t) = new NumericLiteral(); (yyval.numeric_literal_t)->value_ = string("CURRENT_TIME"); }
#line 7778 "bison_parser.cpp"
    break;

  case 453:
#line 2346 "bison_parser.y"
                     { (yyval.numeric_literal_t) = new NumericLiteral(); (yyval.numeric_literal_t)->value_ = string("CURRENT_DATE"); }
#line 7784 "bison_parser.cpp"
    break;

  case 454:
#line 2347 "bison_parser.y"
                          { (yyval.numeric_literal_t) = new NumericLiteral(); (yyval.numeric_literal_t)->value_ = string("CURRENT_TIMESTAMP"); }
#line 7790 "bison_parser.cpp"
    break;

  case 455:
#line 2351 "bison_parser.y"
             { (yyval.null_literal_t) = new NullLiteral(); }
#line 7796 "bison_parser.cpp"
    break;

  case 456:
#line 2355 "bison_parser.y"
                   { (yyval.blob_literal_t) = new BlobLiteral(); (yyval.blob_literal_t)->str_val_ = string((yyvsp[0].sval)); free((yyvsp[0].sval)); }
#line 7802 "bison_parser.cpp"
    break;

  case 457:
#line 2358 "bison_parser.y"
            {
            (yyval.param_expr_t) = new ParamExpr();
        }
#line 7810 "bison_parser.cpp"
    break;

  case 458:
#line 2369 "bison_parser.y"
                              {(yyval.opt_index_t) = new OptIndex(); (yyval.opt_index_t)->sub_type_ = CASE0; (yyval.opt_index_t)->index_name_ = new Identifier((yyvsp[0].sval), id_index_name); free((yyvsp[0].sval)); }
#line 7816 "bison_parser.cpp"
    break;

  case 459:
#line 2370 "bison_parser.y"
                    {(yyval.opt_index_t) = new OptIndex(); (yyval.opt_index_t)->sub_type_ = CASE1; }
#line 7822 "bison_parser.cpp"
    break;

  case 460:
#line 2371 "bison_parser.y"
                  {(yyval.opt_index_t) = new OptIndex(); (yyval.opt_index_t)->sub_type_ = CASE2; }
#line 7828 "bison_parser.cpp"
    break;

  case 461:
#line 2375 "bison_parser.y"
                    { (yyval.on_expr_t) = new OnExpr(); (yyval.on_expr_t)->expr_ = (yyvsp[0].new_expr_t); }
#line 7834 "bison_parser.cpp"
    break;

  case 462:
#line 2379 "bison_parser.y"
                      { (yyval.else_expr_t) = new ElseExpr(); (yyval.else_expr_t)->expr_ = (yyvsp[0].new_expr_t); }
#line 7840 "bison_parser.cpp"
    break;

  case 463:
#line 2382 "bison_parser.y"
                       { (yyval.where_expr_t) = new WhereExpr(); (yyval.where_expr_t)->expr_ = (yyvsp[0].new_expr_t); }
#line 7846 "bison_parser.cpp"
    break;

  case 464:
#line 2386 "bison_parser.y"
                        { (yyval.escape_expr_t) = new EscapeExpr(); (yyval.escape_expr_t)->expr_ = (yyvsp[0].new_expr_t); }
#line 7852 "bison_parser.cpp"
    break;

  case 465:
#line 2390 "bison_parser.y"
                                                {
          (yyval.qualified_table_name_t) = new QualifiedTableName();
          (yyvsp[-2].table_name_t)->identifier_->id_type_ = id_top_table_name;
          (yyval.qualified_table_name_t)->table_name_ = (yyvsp[-2].table_name_t);
          (yyval.qualified_table_name_t)->opt_table_alias_as_ = (yyvsp[-1].opt_table_alias_as_t);
          (yyval.qualified_table_name_t)->opt_index_ = (yyvsp[0].opt_index_t);
        }
#line 7864 "bison_parser.cpp"
    break;

  case 466:
#line 2399 "bison_parser.y"
                   {
          (yyval.trigger_name_t) = new TriggerName();
          (yyval.trigger_name_t)->sub_type_ = CASE0;
          (yyval.trigger_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_trigger_name);
          free((yyvsp[0].sval));
        }
#line 7875 "bison_parser.cpp"
    break;

  case 467:
#line 2405 "bison_parser.y"
                                  {
          (yyval.trigger_name_t) = new TriggerName();
          (yyval.trigger_name_t)->sub_type_ = CASE1;
          (yyval.trigger_name_t)->database_id_ = new Identifier((yyvsp[-2].sval),id_database_name);
          (yyval.trigger_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_trigger_name);
          free((yyvsp[-2].sval));
          free((yyvsp[0].sval));
        }
#line 7888 "bison_parser.cpp"
    break;

  case 468:
#line 2417 "bison_parser.y"
                   {
          (yyval.index_name_t) = new IndexName();
          (yyval.index_name_t)->sub_type_ = CASE0;
          (yyval.index_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_index_name);
          free((yyvsp[0].sval));
        }
#line 7899 "bison_parser.cpp"
    break;

  case 469:
#line 2423 "bison_parser.y"
                                  {
          (yyval.index_name_t) = new IndexName();
          (yyval.index_name_t)->sub_type_ = CASE1;
          (yyval.index_name_t)->database_id_ = new Identifier((yyvsp[-2].sval),id_database_name);
          (yyval.index_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_index_name);
          free((yyvsp[-2].sval));
          free((yyvsp[0].sval));
        }
#line 7912 "bison_parser.cpp"
    break;

  case 470:
#line 2434 "bison_parser.y"
                   {
          (yyval.table_name_t) = new TableName();
          (yyval.table_name_t)->sub_type_ = CASE0;
          (yyval.table_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_table_name);
          free((yyvsp[0].sval));
        }
#line 7923 "bison_parser.cpp"
    break;

  case 471:
#line 2440 "bison_parser.y"
                                  {
          (yyval.table_name_t) = new TableName();
          (yyval.table_name_t)->sub_type_ = CASE1;
          (yyval.table_name_t)->database_id_ = new Identifier((yyvsp[-2].sval),id_database_name);
          (yyval.table_name_t)->identifier_ = new Identifier((yyvsp[0].sval), id_table_name);
          free((yyvsp[-2].sval));
          free((yyvsp[0].sval));
        }
#line 7936 "bison_parser.cpp"
    break;

  case 472:
#line 2451 "bison_parser.y"
                   {
          (yyval.table_alias_t) = new TableAlias();
          (yyval.table_alias_t)->sub_type_ = CASE0;
          (yyval.table_alias_t)->alias_id_ = new Identifier((yyvsp[0].sval), id_table_alias_name);
          free((yyvsp[0].sval));
        }
#line 7947 "bison_parser.cpp"
    break;

  case 473:
#line 2460 "bison_parser.y"
                    { (yyval.opt_table_alias_t) = new OptTableAlias(); (yyval.opt_table_alias_t)->sub_type_ = CASE0; (yyval.opt_table_alias_t)->table_alias_ = (yyvsp[0].table_alias_t); (yyval.opt_table_alias_t)->is_existed_ = true; }
#line 7953 "bison_parser.cpp"
    break;

  case 474:
#line 2461 "bison_parser.y"
                       { (yyval.opt_table_alias_t) = new OptTableAlias(); (yyval.opt_table_alias_t)->sub_type_ = CASE1; (yyval.opt_table_alias_t)->table_alias_ = (yyvsp[0].table_alias_t); (yyval.opt_table_alias_t)->is_existed_ = true; }
#line 7959 "bison_parser.cpp"
    break;

  case 475:
#line 2462 "bison_parser.y"
                    { (yyval.opt_table_alias_t) = new OptTableAlias(); (yyval.opt_table_alias_t)->sub_type_ = CASE2; (yyval.opt_table_alias_t)->is_existed_ = false; }
#line 7965 "bison_parser.cpp"
    break;

  case 476:
#line 2466 "bison_parser.y"
                       { (yyval.opt_table_alias_as_t) = new OptTableAliasAs(); (yyval.opt_table_alias_as_t)->sub_type_ = CASE0; (yyval.opt_table_alias_as_t)->table_alias_ = (yyvsp[0].table_alias_t); }
#line 7971 "bison_parser.cpp"
    break;

  case 477:
#line 2467 "bison_parser.y"
                    { (yyval.opt_table_alias_as_t) = new OptTableAliasAs(); (yyval.opt_table_alias_as_t)->sub_type_ = CASE1; }
#line 7977 "bison_parser.cpp"
    break;

  case 478:
#line 2472 "bison_parser.y"
                   {
          (yyval.column_alias_t) = new ColumnAlias();
          (yyval.column_alias_t)->sub_type_ = CASE0;
          (yyval.column_alias_t)->alias_id_ = new Identifier((yyvsp[0].sval), id_column_alias_name);
          free((yyvsp[0].sval));
        }
#line 7988 "bison_parser.cpp"
    break;

  case 479:
#line 2478 "bison_parser.y"
                      {
          (yyval.column_alias_t) = new ColumnAlias();
          (yyval.column_alias_t)->sub_type_ = CASE1;
          (yyval.column_alias_t)->alias_id_ = new Identifier((yyvsp[0].sval), id_column_alias_name);
          free((yyvsp[0].sval));
        }
#line 7999 "bison_parser.cpp"
    break;

  case 480:
#line 2487 "bison_parser.y"
                      { (yyval.opt_column_alias_t) = new OptColumnAlias(); (yyval.opt_column_alias_t)->sub_type_ = CASE0; (yyval.opt_column_alias_t)->column_alias_ = (yyvsp[0].column_alias_t); }
#line 8005 "bison_parser.cpp"
    break;

  case 481:
#line 2488 "bison_parser.y"
                     { (yyval.opt_column_alias_t) = new OptColumnAlias(); (yyval.opt_column_alias_t)->sub_type_ = CASE1; }
#line 8011 "bison_parser.cpp"
    break;

  case 482:
#line 2496 "bison_parser.y"
                    { (yyval.opt_with_clause_t) = new OptWithClause(); (yyval.opt_with_clause_t)->sub_type_ = CASE0; (yyval.opt_with_clause_t)->with_clause_=(yyvsp[0].with_clause_t);}
#line 8017 "bison_parser.cpp"
    break;

  case 483:
#line 2497 "bison_parser.y"
                    { (yyval.opt_with_clause_t) = new OptWithClause(); (yyval.opt_with_clause_t)->sub_type_ = CASE1; }
#line 8023 "bison_parser.cpp"
    break;

  case 484:
#line 2501 "bison_parser.y"
                                                  {
          (yyval.with_clause_t) = new WithClause();
          (yyval.with_clause_t)->opt_recursive_ = (yyvsp[-1].opt_recursive_t);
          (yyval.with_clause_t)->common_table_expr_list_ = (yyvsp[0].common_table_expr_list_t);

          if ((yyval.with_clause_t)) {
                auto tmp1 = (yyval.with_clause_t)->common_table_expr_list_;
                if (tmp1) {
                    for (auto tmp2 : tmp1->v_common_table_expr_list_) {  // common_table_expr_
                        auto tmp3 = tmp2->table_name_;
                        if (tmp3) {
                            auto tmp_iden_ = tmp3->identifier_;
                            if (tmp_iden_) {
                                if(get_rand_int(100) < 50) {
                                    tmp_iden_->id_type_ = id_create_table_name_with_tmp;
                                } else {
                                    tmp_iden_->id_type_ = id_top_table_name;
                                }
                            }
                        }
                        auto tmp4 = tmp2 -> opt_column_list_paren_;
                        if (tmp4) {
                            auto tmp5 = tmp4->column_name_list_;
                            if (tmp5) {
                                for (auto tmp6 : tmp5->v_column_name_list_) {  // column_name_
                                    if (tmp6->identifier_col_) {
                                        if (get_rand_int(100) < 80) {
                                            tmp6->sub_type_ = CASE0; // Enforce identifier_col_ only. Do not add identifier_tbl_ or '.'
                                            tmp6->identifier_col_->id_type_ = id_create_column_name_with_tmp;
                                        } else {
                                            tmp6->sub_type_ = CASE0; // Enforce identifier_col_ only. Do not add identifier_tbl_ or '.'
                                            tmp6->identifier_col_->id_type_ = id_top_column_name;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
          }
        }
#line 8069 "bison_parser.cpp"
    break;

  case 485:
#line 2545 "bison_parser.y"
                          {
          (yyval.common_table_expr_list_t) = new CommonTableExprList();
          (yyval.common_table_expr_list_t)->v_common_table_expr_list_.push_back((yyvsp[0].common_table_expr_t));
        }
#line 8078 "bison_parser.cpp"
    break;

  case 486:
#line 2549 "bison_parser.y"
                                                     {
          (yyvsp[-2].common_table_expr_list_t)->v_common_table_expr_list_.push_back((yyvsp[0].common_table_expr_t));
          (yyval.common_table_expr_list_t) = (yyvsp[-2].common_table_expr_list_t);
        }
#line 8087 "bison_parser.cpp"
    break;

  case 487:
#line 2556 "bison_parser.y"
                                                                     {
          (yyval.common_table_expr_t) = new CommonTableExpr();
          (yyval.common_table_expr_t)->sub_type_ = CASE0;
          (yyval.common_table_expr_t)->table_name_ = (yyvsp[-5].table_name_t);
          (yyval.common_table_expr_t)->opt_column_list_paren_ = (yyvsp[-4].opt_column_list_paren_t);
          (yyval.common_table_expr_t)->select_statement_ = (yyvsp[-1].select_statement_t);
        }
#line 8099 "bison_parser.cpp"
    break;

  case 488:
#line 2570 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = ","; }
#line 8105 "bison_parser.cpp"
    break;

  case 489:
#line 2571 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "JOIN"; }
#line 8111 "bison_parser.cpp"
    break;

  case 490:
#line 2572 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "LEFT JOIN"; }
#line 8117 "bison_parser.cpp"
    break;

  case 491:
#line 2573 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "LEFT OUTER JOIN"; }
#line 8123 "bison_parser.cpp"
    break;

  case 492:
#line 2574 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "INNER JOIN"; }
#line 8129 "bison_parser.cpp"
    break;

  case 493:
#line 2575 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "CROSS JOIN"; }
#line 8135 "bison_parser.cpp"
    break;

  case 494:
#line 2576 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "NATURAL JOIN"; }
#line 8141 "bison_parser.cpp"
    break;

  case 495:
#line 2577 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "NATURAL LEFT JOIN"; }
#line 8147 "bison_parser.cpp"
    break;

  case 496:
#line 2578 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "NATURAL LEFT OUTER JOIN"; }
#line 8153 "bison_parser.cpp"
    break;

  case 497:
#line 2579 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "NATURAL INNER JOIN"; }
#line 8159 "bison_parser.cpp"
    break;

  case 498:
#line 2580 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "NATURAL CROSS JOIN"; }
#line 8165 "bison_parser.cpp"
    break;

  case 499:
#line 2581 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "RIGHT JOIN"; }
#line 8171 "bison_parser.cpp"
    break;

  case 500:
#line 2582 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "RIGHT OUTER JOIN"; }
#line 8177 "bison_parser.cpp"
    break;

  case 501:
#line 2583 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "NATURAL RIGHT JOIN"; }
#line 8183 "bison_parser.cpp"
    break;

  case 502:
#line 2584 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "NATURAL RIGHT OUTER JOIN"; }
#line 8189 "bison_parser.cpp"
    break;

  case 503:
#line 2585 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "FULL JOIN"; }
#line 8195 "bison_parser.cpp"
    break;

  case 504:
#line 2586 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "FULL OUTER JOIN"; }
#line 8201 "bison_parser.cpp"
    break;

  case 505:
#line 2587 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "NATURAL FULL JOIN"; }
#line 8207 "bison_parser.cpp"
    break;

  case 506:
#line 2588 "bison_parser.y"
                                { (yyval.join_op_t) = new JoinOp(); (yyval.join_op_t)->str_val_ = "NATURAL FULL OUTER JOIN"; }
#line 8213 "bison_parser.cpp"
    break;

  case 507:
#line 2592 "bison_parser.y"
                 { (yyval.join_constraint_t) = new JoinConstraint(); (yyval.join_constraint_t)->sub_type_ = CASE0; (yyval.join_constraint_t)->on_expr_ = (yyvsp[0].on_expr_t); }
#line 8219 "bison_parser.cpp"
    break;

  case 508:
#line 2593 "bison_parser.y"
                                       { (yyval.join_constraint_t) = new JoinConstraint(); (yyval.join_constraint_t)->sub_type_ = CASE1; (yyval.join_constraint_t)->column_name_list_ = (yyvsp[-1].column_name_list_t); }
#line 8225 "bison_parser.cpp"
    break;

  case 509:
#line 2594 "bison_parser.y"
                    { (yyval.join_constraint_t) = new JoinConstraint(); (yyval.join_constraint_t)->sub_type_ = CASE2; }
#line 8231 "bison_parser.cpp"
    break;

  case 510:
#line 2598 "bison_parser.y"
                                                  {
          (yyval.join_suffix_t) = new JoinSuffix();
          (yyval.join_suffix_t)->join_op_ = (yyvsp[-2].join_op_t);
          (yyval.join_suffix_t)->table_or_subquery_ = (yyvsp[-1].table_or_subquery_t);
          (yyval.join_suffix_t)->join_constraint_ = (yyvsp[0].join_constraint_t);
        }
#line 8242 "bison_parser.cpp"
    break;

  case 511:
#line 2607 "bison_parser.y"
                    { (yyval.join_suffix_list_t) = new JoinSuffixList(); (yyval.join_suffix_list_t)->v_join_suffix_list_.push_back((yyvsp[0].join_suffix_t)); }
#line 8248 "bison_parser.cpp"
    break;

  case 512:
#line 2608 "bison_parser.y"
                                     { (yyvsp[-1].join_suffix_list_t)->v_join_suffix_list_.push_back((yyvsp[0].join_suffix_t)); (yyval.join_suffix_list_t) = (yyvsp[-1].join_suffix_list_t); }
#line 8254 "bison_parser.cpp"
    break;

  case 513:
#line 2612 "bison_parser.y"
                          { (yyval.join_clause_t) = new JoinClause(); (yyval.join_clause_t)->sub_type_ = CASE0; (yyval.join_clause_t)->table_or_subquery_ = (yyvsp[0].table_or_subquery_t); }
#line 8260 "bison_parser.cpp"
    break;

  case 514:
#line 2613 "bison_parser.y"
                                           {
          (yyval.join_clause_t) = new JoinClause();
          (yyval.join_clause_t)->sub_type_ = CASE1;
          (yyval.join_clause_t)->table_or_subquery_ = (yyvsp[-1].table_or_subquery_t);
          (yyval.join_clause_t)->join_suffix_list_ = (yyvsp[0].join_suffix_list_t);
        }
#line 8271 "bison_parser.cpp"
    break;

  case 515:
#line 2623 "bison_parser.y"
                          { (yyval.table_or_subquery_list_t) = new TableOrSubqueryList(); (yyval.table_or_subquery_list_t)->v_table_or_subquery_list_.push_back((yyvsp[0].table_or_subquery_t)); }
#line 8277 "bison_parser.cpp"
    break;

  case 516:
#line 2624 "bison_parser.y"
                                                     { (yyvsp[-2].table_or_subquery_list_t)->v_table_or_subquery_list_.push_back((yyvsp[0].table_or_subquery_t)); (yyval.table_or_subquery_list_t) = (yyvsp[-2].table_or_subquery_list_t); }
#line 8283 "bison_parser.cpp"
    break;

  case 517:
#line 2627 "bison_parser.y"
                                                 {
          (yyval.table_or_subquery_t) = new TableOrSubquery();
          (yyval.table_or_subquery_t)->sub_type_ = CASE0;
          (yyval.table_or_subquery_t)->select_statement_ = (yyvsp[-2].select_statement_t);
          (yyval.table_or_subquery_t)->opt_table_alias_ = (yyvsp[0].opt_table_alias_t);
        }
#line 8294 "bison_parser.cpp"
    break;

  case 518:
#line 2633 "bison_parser.y"
                                       {
          (yyval.table_or_subquery_t) = new TableOrSubquery();
          (yyval.table_or_subquery_t)->sub_type_ = CASE1;
          (yyval.table_or_subquery_t)->table_or_subquery_list_ = (yyvsp[-1].table_or_subquery_list_t);
        }
#line 8304 "bison_parser.cpp"
    break;

  case 519:
#line 2638 "bison_parser.y"
                                             {
          (yyval.table_or_subquery_t) = new TableOrSubquery();
          (yyval.table_or_subquery_t)->sub_type_ = CASE2;
          (yyvsp[-2].table_name_t)->identifier_->id_type_ = id_top_table_name;
          (yyval.table_or_subquery_t)->table_name_ = (yyvsp[-2].table_name_t);
          (yyval.table_or_subquery_t)->opt_table_alias_ = (yyvsp[-1].opt_table_alias_t);
          (yyval.table_or_subquery_t)->opt_index_ = (yyvsp[0].opt_index_t);
        }
#line 8317 "bison_parser.cpp"
    break;

  case 520:
#line 2646 "bison_parser.y"
                            {
          (yyval.table_or_subquery_t) = new TableOrSubquery();
          (yyval.table_or_subquery_t)->sub_type_ = CASE3;
          (yyval.table_or_subquery_t)->join_clause_ = (yyvsp[-1].join_clause_t);
        }
#line 8327 "bison_parser.cpp"
    break;

  case 521:
#line 2659 "bison_parser.y"
                          {(yyval.opt_semicolon_t) = new OptSemicolon(); (yyval.opt_semicolon_t)->str_val_ = ";"; (yyval.opt_semicolon_t)->opt_semicolon_ = (yyvsp[0].opt_semicolon_t);}
#line 8333 "bison_parser.cpp"
    break;

  case 522:
#line 2660 "bison_parser.y"
                   {(yyval.opt_semicolon_t) = new OptSemicolon(); (yyval.opt_semicolon_t)->str_val_ = "";}
#line 8339 "bison_parser.cpp"
    break;


#line 8343 "bison_parser.cpp"

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
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, result, scanner);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp, result, scanner);
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
#line 2664 "bison_parser.y"

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
