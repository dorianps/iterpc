// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// next_combinations
SEXP next_combinations(IntegerVector x, unsigned int n, unsigned long d, unsigned long index);
RcppExport SEXP iterpc_next_combinations(SEXP xSEXP, SEXP nSEXP, SEXP dSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type d(dSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type index(indexSEXP );
        SEXP __result = next_combinations(x, n, d, index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// next_multiset_combinations
SEXP next_multiset_combinations(IntegerVector multiset, IntegerVector x, unsigned long d, unsigned long index);
RcppExport SEXP iterpc_next_multiset_combinations(SEXP multisetSEXP, SEXP xSEXP, SEXP dSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type multiset(multisetSEXP );
        Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type d(dSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type index(indexSEXP );
        SEXP __result = next_multiset_combinations(multiset, x, d, index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// next_combinations_replace
SEXP next_combinations_replace(IntegerVector x, unsigned int n, unsigned long d, unsigned long index);
RcppExport SEXP iterpc_next_combinations_replace(SEXP xSEXP, SEXP nSEXP, SEXP dSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type d(dSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type index(indexSEXP );
        SEXP __result = next_combinations_replace(x, n, d, index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// multichoose
unsigned long multichoose(SEXP n);
RcppExport SEXP iterpc_multichoose(SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< SEXP >::type n(nSEXP );
        unsigned long __result = multichoose(n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// next_permutations
SEXP next_permutations(IntegerVector x, unsigned long d, unsigned long index);
RcppExport SEXP iterpc_next_permutations(SEXP xSEXP, SEXP dSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type d(dSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type index(indexSEXP );
        SEXP __result = next_permutations(x, d, index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// next_k_permutations
SEXP next_k_permutations(IntegerVector x, unsigned int r, unsigned long d, unsigned long index);
RcppExport SEXP iterpc_next_k_permutations(SEXP xSEXP, SEXP rSEXP, SEXP dSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< unsigned int >::type r(rSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type d(dSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type index(indexSEXP );
        SEXP __result = next_k_permutations(x, r, d, index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// next_permutations_replace
SEXP next_permutations_replace(IntegerVector x, unsigned int n, unsigned long d, unsigned long index);
RcppExport SEXP iterpc_next_permutations_replace(SEXP xSEXP, SEXP nSEXP, SEXP dSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP );
        Rcpp::traits::input_parameter< unsigned int >::type n(nSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type d(dSEXP );
        Rcpp::traits::input_parameter< unsigned long >::type index(indexSEXP );
        SEXP __result = next_permutations_replace(x, n, d, index);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
