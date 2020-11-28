#ifndef ZSQL_FEATURES_H
#define ZSQL_FEATURES_H
// zsql options
/**
  This part defines option flags for zsql_options in lex
*/
#define ZSQL_OPTION_USE_CURSOR_FETCH    (1ULL << 0)
#define ZSQL_OPTION_PUMP_EXPORT_JCSV    (1ULL << 1)
#define ZSQL_OPTION_END    (1ULL << 64) // ATTENTION ! This is END !!!

// oracle options
/**
 * This part defines option flags for oracle_options in lex
 */
// oracle_options: create or replace view_or_trigger_or_sp_or_event
#define ORA_CREATE_OR_REPLACE (1ULL << 0)
// oracle_options: merge option of merge into
// also used in merge_option of Sql_cmd_merge and Query_result_merge
#define ORA_MERGE_INTO_WITH_UPDATE  (1ULL << 1)
#define ORA_MERGE_INTO_WITH_INSERT  (1ULL << 2)
#define ORA_OPTION_END    (1ULL << 64) // ATTENTION ! This is END !!!

// ZSQL feature: transaction tsn, and lock wait snapshot
#define HAVE_ZSQL_TSN_AND_LOCK_WAIT

// ZSQL feature: copy table
#define HAVE_ZSQL_COPY_TABLE

// ZSQL feature: lock wait depth limitation
#define HAVE_ZSQL_LOCK_DEPTH_LIMIT

// ZSQL feature: connect engine
#define HAVE_ZSQL_CONNECT_ENGINE

// ZSQL feature: compatible with Oracle
#define HAVE_ZSQL_ORACLE_COMPATIBILITY

// ZSQL feature: error report on big temp-table
#define HAVE_ZSQL_TEMPTABLE

// ZSQL feature: full join
#define HAVE_ZSQL_FULL_JOIN

// ZSQL feature: distrubte mvcc on DB
#define HAVE_ZSQL_DISTRIBUTE_MVCC

// ZSQL feature: VARCHAR2
#define HAVE_ORACLE_VARCHAR2

// ZSQL feature: start with connect by
#define HAVE_ZSQL_START_WITH_CONNECT_BY

// ZSQL feature: MINUS
#define HAVE_ZSQL_MINUS

// ZSQL feature: range (substr())
#define HAVE_ZSQL_RANGE_STR

// ZSQL feature: insert all
#define HAVE_ZSQL_INSERT_ALL

// ZSQL feature: to_date
#define HAVE_ZSQL_TO_DATE

// ZSQL feature: sysdate
#define HAVE_ZSQL_SYSDATE

// ZSQL feature: ASYMMETRIC_ENCRYPT
#define HAVE_ZSQL_ASYMMETRIC_ENCRYPT

// ZSQL feature: gdb_format
#define HAVE_ZSQL_GDB_FORMAT

// ZSQL feature: merge into
#define HAVE_ZSQL_MERGE_INTO

#endif // ZSQL_FEATURES_H
