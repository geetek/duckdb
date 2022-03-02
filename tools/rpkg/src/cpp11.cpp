// Generated by cpp11: do not edit by hand
// clang-format off

#include "duckdb_types.hpp"
#include "cpp11/declarations.hpp"
#include <R_ext/Visibility.h>

// connection.cpp
duckdb::conn_eptr_t rapi_connect(duckdb::db_eptr_t db);
extern "C" SEXP _duckdb_rapi_connect(SEXP db) {
  BEGIN_CPP11
    return cpp11::as_sexp(rapi_connect(cpp11::as_cpp<cpp11::decay_t<duckdb::db_eptr_t>>(db)));
  END_CPP11
}
// connection.cpp
void rapi_disconnect(duckdb::conn_eptr_t conn);
extern "C" SEXP _duckdb_rapi_disconnect(SEXP conn) {
  BEGIN_CPP11
    rapi_disconnect(cpp11::as_cpp<cpp11::decay_t<duckdb::conn_eptr_t>>(conn));
    return R_NilValue;
  END_CPP11
}
// database.cpp
duckdb::db_eptr_t rapi_startup(std::string dbdir, bool readonly, cpp11::list configsexp);
extern "C" SEXP _duckdb_rapi_startup(SEXP dbdir, SEXP readonly, SEXP configsexp) {
  BEGIN_CPP11
    return cpp11::as_sexp(rapi_startup(cpp11::as_cpp<cpp11::decay_t<std::string>>(dbdir), cpp11::as_cpp<cpp11::decay_t<bool>>(readonly), cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(configsexp)));
  END_CPP11
}
// database.cpp
void rapi_shutdown(duckdb::db_eptr_t dbsexp);
extern "C" SEXP _duckdb_rapi_shutdown(SEXP dbsexp) {
  BEGIN_CPP11
    rapi_shutdown(cpp11::as_cpp<cpp11::decay_t<duckdb::db_eptr_t>>(dbsexp));
    return R_NilValue;
  END_CPP11
}
// register.cpp
void rapi_register_df(duckdb::conn_eptr_t conn, std::string name, cpp11::data_frame value);
extern "C" SEXP _duckdb_rapi_register_df(SEXP conn, SEXP name, SEXP value) {
  BEGIN_CPP11
    rapi_register_df(cpp11::as_cpp<cpp11::decay_t<duckdb::conn_eptr_t>>(conn), cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<cpp11::data_frame>>(value));
    return R_NilValue;
  END_CPP11
}
// register.cpp
void rapi_unregister_df(duckdb::conn_eptr_t conn, std::string name);
extern "C" SEXP _duckdb_rapi_unregister_df(SEXP conn, SEXP name) {
  BEGIN_CPP11
    rapi_unregister_df(cpp11::as_cpp<cpp11::decay_t<duckdb::conn_eptr_t>>(conn), cpp11::as_cpp<cpp11::decay_t<std::string>>(name));
    return R_NilValue;
  END_CPP11
}
// register.cpp
void rapi_register_arrow(duckdb::conn_eptr_t conn, std::string name, cpp11::list export_funs, cpp11::sexp valuesexp);
extern "C" SEXP _duckdb_rapi_register_arrow(SEXP conn, SEXP name, SEXP export_funs, SEXP valuesexp) {
  BEGIN_CPP11
    rapi_register_arrow(cpp11::as_cpp<cpp11::decay_t<duckdb::conn_eptr_t>>(conn), cpp11::as_cpp<cpp11::decay_t<std::string>>(name), cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(export_funs), cpp11::as_cpp<cpp11::decay_t<cpp11::sexp>>(valuesexp));
    return R_NilValue;
  END_CPP11
}
// register.cpp
void rapi_unregister_arrow(duckdb::conn_eptr_t conn, std::string name);
extern "C" SEXP _duckdb_rapi_unregister_arrow(SEXP conn, SEXP name) {
  BEGIN_CPP11
    rapi_unregister_arrow(cpp11::as_cpp<cpp11::decay_t<duckdb::conn_eptr_t>>(conn), cpp11::as_cpp<cpp11::decay_t<std::string>>(name));
    return R_NilValue;
  END_CPP11
}
// statement.cpp
void rapi_release(duckdb::stmt_eptr_t stmt);
extern "C" SEXP _duckdb_rapi_release(SEXP stmt) {
  BEGIN_CPP11
    rapi_release(cpp11::as_cpp<cpp11::decay_t<duckdb::stmt_eptr_t>>(stmt));
    return R_NilValue;
  END_CPP11
}
// statement.cpp
cpp11::list rapi_prepare(duckdb::conn_eptr_t conn, std::string query);
extern "C" SEXP _duckdb_rapi_prepare(SEXP conn, SEXP query) {
  BEGIN_CPP11
    return cpp11::as_sexp(rapi_prepare(cpp11::as_cpp<cpp11::decay_t<duckdb::conn_eptr_t>>(conn), cpp11::as_cpp<cpp11::decay_t<std::string>>(query)));
  END_CPP11
}
// statement.cpp
cpp11::list rapi_bind(duckdb::stmt_eptr_t stmt, cpp11::list params, bool arrow);
extern "C" SEXP _duckdb_rapi_bind(SEXP stmt, SEXP params, SEXP arrow) {
  BEGIN_CPP11
    return cpp11::as_sexp(rapi_bind(cpp11::as_cpp<cpp11::decay_t<duckdb::stmt_eptr_t>>(stmt), cpp11::as_cpp<cpp11::decay_t<cpp11::list>>(params), cpp11::as_cpp<cpp11::decay_t<bool>>(arrow)));
  END_CPP11
}
// statement.cpp
SEXP rapi_execute_arrow(duckdb::rqry_eptr_t qry_res, bool stream, int vec_per_chunk, bool return_table);
extern "C" SEXP _duckdb_rapi_execute_arrow(SEXP qry_res, SEXP stream, SEXP vec_per_chunk, SEXP return_table) {
  BEGIN_CPP11
    return cpp11::as_sexp(rapi_execute_arrow(cpp11::as_cpp<cpp11::decay_t<duckdb::rqry_eptr_t>>(qry_res), cpp11::as_cpp<cpp11::decay_t<bool>>(stream), cpp11::as_cpp<cpp11::decay_t<int>>(vec_per_chunk), cpp11::as_cpp<cpp11::decay_t<bool>>(return_table)));
  END_CPP11
}
// statement.cpp
SEXP rapi_record_batch(duckdb::rqry_eptr_t qry_res, int approx_batch_size);
extern "C" SEXP _duckdb_rapi_record_batch(SEXP qry_res, SEXP approx_batch_size) {
  BEGIN_CPP11
    return cpp11::as_sexp(rapi_record_batch(cpp11::as_cpp<cpp11::decay_t<duckdb::rqry_eptr_t>>(qry_res), cpp11::as_cpp<cpp11::decay_t<int>>(approx_batch_size)));
  END_CPP11
}
// statement.cpp
SEXP rapi_execute(duckdb::stmt_eptr_t stmt, bool arrow);
extern "C" SEXP _duckdb_rapi_execute(SEXP stmt, SEXP arrow) {
  BEGIN_CPP11
    return cpp11::as_sexp(rapi_execute(cpp11::as_cpp<cpp11::decay_t<duckdb::stmt_eptr_t>>(stmt), cpp11::as_cpp<cpp11::decay_t<bool>>(arrow)));
  END_CPP11
}
// utils.cpp
cpp11::r_string rapi_ptr_to_str(SEXP extptr);
extern "C" SEXP _duckdb_rapi_ptr_to_str(SEXP extptr) {
  BEGIN_CPP11
    return cpp11::as_sexp(rapi_ptr_to_str(cpp11::as_cpp<cpp11::decay_t<SEXP>>(extptr)));
  END_CPP11
}

extern "C" {
static const R_CallMethodDef CallEntries[] = {
    {"_duckdb_rapi_bind",             (DL_FUNC) &_duckdb_rapi_bind,             3},
    {"_duckdb_rapi_connect",          (DL_FUNC) &_duckdb_rapi_connect,          1},
    {"_duckdb_rapi_disconnect",       (DL_FUNC) &_duckdb_rapi_disconnect,       1},
    {"_duckdb_rapi_execute",          (DL_FUNC) &_duckdb_rapi_execute,          2},
    {"_duckdb_rapi_execute_arrow",    (DL_FUNC) &_duckdb_rapi_execute_arrow,    4},
    {"_duckdb_rapi_prepare",          (DL_FUNC) &_duckdb_rapi_prepare,          2},
    {"_duckdb_rapi_ptr_to_str",       (DL_FUNC) &_duckdb_rapi_ptr_to_str,       1},
    {"_duckdb_rapi_record_batch",     (DL_FUNC) &_duckdb_rapi_record_batch,     2},
    {"_duckdb_rapi_register_arrow",   (DL_FUNC) &_duckdb_rapi_register_arrow,   4},
    {"_duckdb_rapi_register_df",      (DL_FUNC) &_duckdb_rapi_register_df,      3},
    {"_duckdb_rapi_release",          (DL_FUNC) &_duckdb_rapi_release,          1},
    {"_duckdb_rapi_shutdown",         (DL_FUNC) &_duckdb_rapi_shutdown,         1},
    {"_duckdb_rapi_startup",          (DL_FUNC) &_duckdb_rapi_startup,          3},
    {"_duckdb_rapi_unregister_arrow", (DL_FUNC) &_duckdb_rapi_unregister_arrow, 2},
    {"_duckdb_rapi_unregister_df",    (DL_FUNC) &_duckdb_rapi_unregister_df,    2},
    {NULL, NULL, 0}
};
}

void AltrepString_Initialize(DllInfo* dll);

extern "C" attribute_visible void R_init_duckdb(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  AltrepString_Initialize(dll);
  R_forceSymbols(dll, TRUE);
}