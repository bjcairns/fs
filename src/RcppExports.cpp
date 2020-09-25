// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mkdir_
void mkdir_(CharacterVector path, unsigned short mode);
RcppExport SEXP _fs_mkdir_(SEXP pathSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type mode(modeSEXP);
    mkdir_(path, mode);
    return R_NilValue;
END_RCPP
}
// rmdir_
void rmdir_(CharacterVector path);
RcppExport SEXP _fs_rmdir_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rmdir_(path);
    return R_NilValue;
END_RCPP
}
// dir_map_
List dir_map_(CharacterVector path, Function fun, bool all, IntegerVector type, int recurse, bool fail);
RcppExport SEXP _fs_dir_map_(SEXP pathSEXP, SEXP funSEXP, SEXP allSEXP, SEXP typeSEXP, SEXP recurseSEXP, SEXP failSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< Function >::type fun(funSEXP);
    Rcpp::traits::input_parameter< bool >::type all(allSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type type(typeSEXP);
    Rcpp::traits::input_parameter< int >::type recurse(recurseSEXP);
    Rcpp::traits::input_parameter< bool >::type fail(failSEXP);
    rcpp_result_gen = Rcpp::wrap(dir_map_(path, fun, all, type, recurse, fail));
    return rcpp_result_gen;
END_RCPP
}
// move_
void move_(CharacterVector path, CharacterVector new_path);
RcppExport SEXP _fs_move_(SEXP pathSEXP, SEXP new_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type new_path(new_pathSEXP);
    move_(path, new_path);
    return R_NilValue;
END_RCPP
}
// create_
void create_(CharacterVector path, unsigned short mode);
RcppExport SEXP _fs_create_(SEXP pathSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type mode(modeSEXP);
    create_(path, mode);
    return R_NilValue;
END_RCPP
}
// stat_
List stat_(CharacterVector path, bool fail);
RcppExport SEXP _fs_stat_(SEXP pathSEXP, SEXP failSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type fail(failSEXP);
    rcpp_result_gen = Rcpp::wrap(stat_(path, fail));
    return rcpp_result_gen;
END_RCPP
}
// access_
LogicalVector access_(CharacterVector path, int mode);
RcppExport SEXP _fs_access_(SEXP pathSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(access_(path, mode));
    return rcpp_result_gen;
END_RCPP
}
// chmod_
void chmod_(CharacterVector path, IntegerVector mode);
RcppExport SEXP _fs_chmod_(SEXP pathSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type mode(modeSEXP);
    chmod_(path, mode);
    return R_NilValue;
END_RCPP
}
// unlink_
void unlink_(CharacterVector path);
RcppExport SEXP _fs_unlink_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    unlink_(path);
    return R_NilValue;
END_RCPP
}
// copyfile_
void copyfile_(CharacterVector path, CharacterVector new_path, bool overwrite);
RcppExport SEXP _fs_copyfile_(SEXP pathSEXP, SEXP new_pathSEXP, SEXP overwriteSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type new_path(new_pathSEXP);
    Rcpp::traits::input_parameter< bool >::type overwrite(overwriteSEXP);
    copyfile_(path, new_path, overwrite);
    return R_NilValue;
END_RCPP
}
// chown_
void chown_(CharacterVector path, int uid, int gid);
RcppExport SEXP _fs_chown_(SEXP pathSEXP, SEXP uidSEXP, SEXP gidSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< int >::type uid(uidSEXP);
    Rcpp::traits::input_parameter< int >::type gid(gidSEXP);
    chown_(path, uid, gid);
    return R_NilValue;
END_RCPP
}
// touch_
void touch_(CharacterVector path, double atime, double mtime);
RcppExport SEXP _fs_touch_(SEXP pathSEXP, SEXP atimeSEXP, SEXP mtimeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< double >::type atime(atimeSEXP);
    Rcpp::traits::input_parameter< double >::type mtime(mtimeSEXP);
    touch_(path, atime, mtime);
    return R_NilValue;
END_RCPP
}
// cleanup_
void cleanup_();
RcppExport SEXP _fs_cleanup_() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    cleanup_();
    return R_NilValue;
END_RCPP
}
// getmode_
unsigned short getmode_(const char* mode_str, unsigned short mode);
RcppExport SEXP _fs_getmode_(SEXP mode_strSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type mode_str(mode_strSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(getmode_(mode_str, mode));
    return rcpp_result_gen;
END_RCPP
}
// strmode_
std::string strmode_(unsigned short mode);
RcppExport SEXP _fs_strmode_(SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned short >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(strmode_(mode));
    return rcpp_result_gen;
END_RCPP
}
// file_code_
std::string file_code_(std::string path, unsigned short mode);
RcppExport SEXP _fs_file_code_(SEXP pathSEXP, SEXP modeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type path(pathSEXP);
    Rcpp::traits::input_parameter< unsigned short >::type mode(modeSEXP);
    rcpp_result_gen = Rcpp::wrap(file_code_(path, mode));
    return rcpp_result_gen;
END_RCPP
}
// getpwnam_
IntegerVector getpwnam_(CharacterVector name);
RcppExport SEXP _fs_getpwnam_(SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(getpwnam_(name));
    return rcpp_result_gen;
END_RCPP
}
// getgrnam_
IntegerVector getgrnam_(CharacterVector name);
RcppExport SEXP _fs_getgrnam_(SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(getgrnam_(name));
    return rcpp_result_gen;
END_RCPP
}
// groups_
List groups_();
RcppExport SEXP _fs_groups_() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(groups_());
    return rcpp_result_gen;
END_RCPP
}
// users_
List users_();
RcppExport SEXP _fs_users_() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(users_());
    return rcpp_result_gen;
END_RCPP
}
// link_create_hard_
void link_create_hard_(CharacterVector path, CharacterVector new_path);
RcppExport SEXP _fs_link_create_hard_(SEXP pathSEXP, SEXP new_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type new_path(new_pathSEXP);
    link_create_hard_(path, new_path);
    return R_NilValue;
END_RCPP
}
// link_create_symbolic_
void link_create_symbolic_(CharacterVector path, CharacterVector new_path);
RcppExport SEXP _fs_link_create_symbolic_(SEXP pathSEXP, SEXP new_pathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type new_path(new_pathSEXP);
    link_create_symbolic_(path, new_path);
    return R_NilValue;
END_RCPP
}
// readlink_
CharacterVector readlink_(CharacterVector path);
RcppExport SEXP _fs_readlink_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(readlink_(path));
    return rcpp_result_gen;
END_RCPP
}
// realize_
CharacterVector realize_(CharacterVector path);
RcppExport SEXP _fs_realize_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(realize_(path));
    return rcpp_result_gen;
END_RCPP
}
// path_
CharacterVector path_(List paths, const char* ext);
RcppExport SEXP _fs_path_(SEXP pathsSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type paths(pathsSEXP);
    Rcpp::traits::input_parameter< const char* >::type ext(extSEXP);
    rcpp_result_gen = Rcpp::wrap(path_(paths, ext));
    return rcpp_result_gen;
END_RCPP
}
// expand_
CharacterVector expand_(CharacterVector path, bool windows);
RcppExport SEXP _fs_expand_(SEXP pathSEXP, SEXP windowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    Rcpp::traits::input_parameter< bool >::type windows(windowsSEXP);
    rcpp_result_gen = Rcpp::wrap(expand_(path, windows));
    return rcpp_result_gen;
END_RCPP
}
// tidy_
CharacterVector tidy_(CharacterVector path);
RcppExport SEXP _fs_tidy_(SEXP pathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type path(pathSEXP);
    rcpp_result_gen = Rcpp::wrap(tidy_(path));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fs_mkdir_", (DL_FUNC) &_fs_mkdir_, 2},
    {"_fs_rmdir_", (DL_FUNC) &_fs_rmdir_, 1},
    {"_fs_dir_map_", (DL_FUNC) &_fs_dir_map_, 6},
    {"_fs_move_", (DL_FUNC) &_fs_move_, 2},
    {"_fs_create_", (DL_FUNC) &_fs_create_, 2},
    {"_fs_stat_", (DL_FUNC) &_fs_stat_, 2},
    {"_fs_access_", (DL_FUNC) &_fs_access_, 2},
    {"_fs_chmod_", (DL_FUNC) &_fs_chmod_, 2},
    {"_fs_unlink_", (DL_FUNC) &_fs_unlink_, 1},
    {"_fs_copyfile_", (DL_FUNC) &_fs_copyfile_, 3},
    {"_fs_chown_", (DL_FUNC) &_fs_chown_, 3},
    {"_fs_touch_", (DL_FUNC) &_fs_touch_, 3},
    {"_fs_cleanup_", (DL_FUNC) &_fs_cleanup_, 0},
    {"_fs_getmode_", (DL_FUNC) &_fs_getmode_, 2},
    {"_fs_strmode_", (DL_FUNC) &_fs_strmode_, 1},
    {"_fs_file_code_", (DL_FUNC) &_fs_file_code_, 2},
    {"_fs_getpwnam_", (DL_FUNC) &_fs_getpwnam_, 1},
    {"_fs_getgrnam_", (DL_FUNC) &_fs_getgrnam_, 1},
    {"_fs_groups_", (DL_FUNC) &_fs_groups_, 0},
    {"_fs_users_", (DL_FUNC) &_fs_users_, 0},
    {"_fs_link_create_hard_", (DL_FUNC) &_fs_link_create_hard_, 2},
    {"_fs_link_create_symbolic_", (DL_FUNC) &_fs_link_create_symbolic_, 2},
    {"_fs_readlink_", (DL_FUNC) &_fs_readlink_, 1},
    {"_fs_realize_", (DL_FUNC) &_fs_realize_, 1},
    {"_fs_path_", (DL_FUNC) &_fs_path_, 2},
    {"_fs_expand_", (DL_FUNC) &_fs_expand_, 2},
    {"_fs_tidy_", (DL_FUNC) &_fs_tidy_, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_fs(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
