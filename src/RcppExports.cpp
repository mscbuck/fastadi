// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// AdaptiveInitialize
Rcpp::List AdaptiveInitialize(const arma::sp_mat& M, const int r);
RcppExport SEXP _fastadi_AdaptiveInitialize(SEXP MSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::sp_mat& >::type M(MSEXP);
    Rcpp::traits::input_parameter< const int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(AdaptiveInitialize(M, r));
    return rcpp_result_gen;
END_RCPP
}
// ax_citation_impl
arma::vec ax_citation_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& x);
RcppExport SEXP _fastadi_ax_citation_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(ax_citation_impl(U, d, V, x));
    return rcpp_result_gen;
END_RCPP
}
// atx_citation_impl
arma::vec atx_citation_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& x);
RcppExport SEXP _fastadi_atx_citation_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(atx_citation_impl(U, d, V, x));
    return rcpp_result_gen;
END_RCPP
}
// p_omega_f_norm_ut_impl
double p_omega_f_norm_ut_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& row, const arma::vec& col);
RcppExport SEXP _fastadi_p_omega_f_norm_ut_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP rowSEXP, SEXP colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type row(rowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type col(colSEXP);
    rcpp_result_gen = Rcpp::wrap(p_omega_f_norm_ut_impl(U, d, V, row, col));
    return rcpp_result_gen;
END_RCPP
}
// p_omega_f_norm_ut_stable_impl
double p_omega_f_norm_ut_stable_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& row, const arma::vec& col);
RcppExport SEXP _fastadi_p_omega_f_norm_ut_stable_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP rowSEXP, SEXP colSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type row(rowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type col(colSEXP);
    rcpp_result_gen = Rcpp::wrap(p_omega_f_norm_ut_stable_impl(U, d, V, row, col));
    return rcpp_result_gen;
END_RCPP
}
// p_omega_ztx_impl
arma::vec p_omega_ztx_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& row, const arma::vec& col, const arma::vec& x);
RcppExport SEXP _fastadi_p_omega_ztx_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type row(rowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type col(colSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(p_omega_ztx_impl(U, d, V, row, col, x));
    return rcpp_result_gen;
END_RCPP
}
// p_omega_zx_impl
arma::vec p_omega_zx_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& row, const arma::vec& col, const arma::vec& x);
RcppExport SEXP _fastadi_p_omega_zx_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type row(rowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type col(colSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(p_omega_zx_impl(U, d, V, row, col, x));
    return rcpp_result_gen;
END_RCPP
}
// p_u_tilde_ztx_impl
arma::vec p_u_tilde_ztx_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& row, const arma::vec& col, const arma::vec& x);
RcppExport SEXP _fastadi_p_u_tilde_ztx_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type row(rowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type col(colSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(p_u_tilde_ztx_impl(U, d, V, row, col, x));
    return rcpp_result_gen;
END_RCPP
}
// p_u_tilde_zx_impl
arma::vec p_u_tilde_zx_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& row, const arma::vec& col, const arma::vec& x);
RcppExport SEXP _fastadi_p_u_tilde_zx_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type row(rowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type col(colSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(p_u_tilde_zx_impl(U, d, V, row, col, x));
    return rcpp_result_gen;
END_RCPP
}
// p_u_ztx_impl
arma::vec p_u_ztx_impl(const arma::mat& U, const arma::vec& d, const arma::mat& V, const arma::vec& x);
RcppExport SEXP _fastadi_p_u_ztx_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(p_u_ztx_impl(U, d, V, x));
    return rcpp_result_gen;
END_RCPP
}
// p_u_zx_impl
arma::vec p_u_zx_impl(const arma::mat& U, const arma::vec& d, const arma::mat& V, const arma::vec& x);
RcppExport SEXP _fastadi_p_u_zx_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(p_u_zx_impl(U, d, V, x));
    return rcpp_result_gen;
END_RCPP
}
// relative_f_norm_change_impl
double relative_f_norm_change_impl(const arma::mat& new_U, const arma::rowvec& new_d, const arma::mat& new_V, const arma::mat& U, const arma::rowvec& d, const arma::mat& V);
RcppExport SEXP _fastadi_relative_f_norm_change_impl(SEXP new_USEXP, SEXP new_dSEXP, SEXP new_VSEXP, SEXP USEXP, SEXP dSEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type new_U(new_USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type new_d(new_dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type new_V(new_VSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(relative_f_norm_change_impl(new_U, new_d, new_V, U, d, V));
    return rcpp_result_gen;
END_RCPP
}
// svd_frob_inner_prod_impl
double svd_frob_inner_prod_impl(const arma::mat& new_U, const arma::rowvec& new_d, const arma::mat& new_V, const arma::mat& U, const arma::rowvec& d, const arma::mat& V);
RcppExport SEXP _fastadi_svd_frob_inner_prod_impl(SEXP new_USEXP, SEXP new_dSEXP, SEXP new_VSEXP, SEXP USEXP, SEXP dSEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type new_U(new_USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type new_d(new_dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type new_V(new_VSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(svd_frob_inner_prod_impl(new_U, new_d, new_V, U, d, V));
    return rcpp_result_gen;
END_RCPP
}
// svd_frob_inner_prod_stable_impl
double svd_frob_inner_prod_stable_impl(arma::mat& new_U, arma::rowvec& new_d, arma::mat& new_V, arma::mat& U, arma::rowvec& d, arma::mat& V);
RcppExport SEXP _fastadi_svd_frob_inner_prod_stable_impl(SEXP new_USEXP, SEXP new_dSEXP, SEXP new_VSEXP, SEXP USEXP, SEXP dSEXP, SEXP VSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type new_U(new_USEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type new_d(new_dSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type new_V(new_VSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type V(VSEXP);
    rcpp_result_gen = Rcpp::wrap(svd_frob_inner_prod_stable_impl(new_U, new_d, new_V, U, d, V));
    return rcpp_result_gen;
END_RCPP
}
// masked_svd_times_x_impl
arma::vec masked_svd_times_x_impl(const arma::mat& U, const arma::rowvec& d, const arma::mat& V, const arma::vec& row, const arma::vec& col, const arma::vec& x);
RcppExport SEXP _fastadi_masked_svd_times_x_impl(SEXP USEXP, SEXP dSEXP, SEXP VSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type U(USEXP);
    Rcpp::traits::input_parameter< const arma::rowvec& >::type d(dSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type V(VSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type row(rowSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type col(colSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(masked_svd_times_x_impl(U, d, V, row, col, x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastadi_AdaptiveInitialize", (DL_FUNC) &_fastadi_AdaptiveInitialize, 2},
    {"_fastadi_ax_citation_impl", (DL_FUNC) &_fastadi_ax_citation_impl, 4},
    {"_fastadi_atx_citation_impl", (DL_FUNC) &_fastadi_atx_citation_impl, 4},
    {"_fastadi_p_omega_f_norm_ut_impl", (DL_FUNC) &_fastadi_p_omega_f_norm_ut_impl, 5},
    {"_fastadi_p_omega_f_norm_ut_stable_impl", (DL_FUNC) &_fastadi_p_omega_f_norm_ut_stable_impl, 5},
    {"_fastadi_p_omega_ztx_impl", (DL_FUNC) &_fastadi_p_omega_ztx_impl, 6},
    {"_fastadi_p_omega_zx_impl", (DL_FUNC) &_fastadi_p_omega_zx_impl, 6},
    {"_fastadi_p_u_tilde_ztx_impl", (DL_FUNC) &_fastadi_p_u_tilde_ztx_impl, 6},
    {"_fastadi_p_u_tilde_zx_impl", (DL_FUNC) &_fastadi_p_u_tilde_zx_impl, 6},
    {"_fastadi_p_u_ztx_impl", (DL_FUNC) &_fastadi_p_u_ztx_impl, 4},
    {"_fastadi_p_u_zx_impl", (DL_FUNC) &_fastadi_p_u_zx_impl, 4},
    {"_fastadi_relative_f_norm_change_impl", (DL_FUNC) &_fastadi_relative_f_norm_change_impl, 6},
    {"_fastadi_svd_frob_inner_prod_impl", (DL_FUNC) &_fastadi_svd_frob_inner_prod_impl, 6},
    {"_fastadi_svd_frob_inner_prod_stable_impl", (DL_FUNC) &_fastadi_svd_frob_inner_prod_stable_impl, 6},
    {"_fastadi_masked_svd_times_x_impl", (DL_FUNC) &_fastadi_masked_svd_times_x_impl, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastadi(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
