// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
extern "C" {
#include "mbcomb/Include/permutation.h"
}

using namespace Rcpp;

// [[Rcpp::export]]
SEXP next_permutation(SEXP x){
    IntegerVector y(clone(x));
    unsigned int result=0;
    result = MBnext_permutation((unsigned int *) y.begin(), y.size());
    if (result){
        return y;
    }else return R_NilValue;
}