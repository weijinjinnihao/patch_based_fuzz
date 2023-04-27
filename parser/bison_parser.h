/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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

#line 82 "bison_parser.h"

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

#line 546 "bison_parser.h"

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
