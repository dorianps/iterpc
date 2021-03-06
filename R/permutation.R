#' @export
getnext.perm <- function(I, d=1L, drop=TRUE){
    if (d * I$r > .Machine$integer.max) stop("d is too large.")
    if (I$status > 0){
        I$status <- -1L
        return(NULL)
    }
    if (I$replace){
        if (I$status == -1L) {
            I$index <- rep(0L, I$r)
        }
        P <- next_permutations_replace(I, d)
    }else{
        if (I$status == -1L) {
            if (I$is.multiset){
                # add 0L to blame lazy evaluation
                I$index <- I$multiset + 0L
            }else{
                I$index <- (1:I$n) - 1L
            }
        }
        if (I$n == I$r){
            P <- next_permutations(I, d)
        }else{
            P <- next_k_permutations(I, d)
        }
    }
    if (is.null(P)){
        I$status <- -1L
        return(NULL)
    }else if (I$status > 0){
        P <- P[1:I$status, , drop = FALSE]
        d <- I$status
    }
    if (is.null(I$labels)){
        if (drop || d > 1){
            return(P)
        }else{
            return(matrix(P, nrow = 1))
        }
    }else{
        if (I$r == 1){
            return(matrix(I$labels[P], ncol = 1))
        }else if (drop && d == 1) {
            return(I$labels[P])
        }else if (d == 1){
            return(matrix(I$labels[P], nrow = 1))
        }else{
            return(matrix(I$labels[P], ncol = I$r))
        }
    }
}

#' @export
#' @method getlength perm
getlength.perm <- function(I, bigz=FALSE){
    if (I$replace){
        out <- I$unique_n^I$r
    }else{
        if (I$n == I$r){
            if (I$is.multiset){
                out <- multichoose(I$f, TRUE)
            }else{
                out <- factorial(I$n)
            }
        }else{
            if (I$is.multiset){
                out <- np_multiset(I$f, I$r, TRUE)
            }else{
                out <- prod(I$n:(I$n - I$r + 1))
            }
        }
    }
    convert_z(out, bigz)
}
