Efficient Iterator for Permutations and Combinations
===

[![Build Status](https://travis-ci.org/randy3k/iterpc.svg?branch=master)](https://travis-ci.org/randy3k/iterpc)

Description: This package helps in 

  1. generating permutations and combinations with or without replacement; 
  2. with distinct items or non-distinct items (multiset); 
  3. calculating number of combinations or permutations in various situations. 

For the generation part, all generated sequences are in lexicographical order (AKA, dictionary order). The algorithms to generate permutations and combinations are memory efficient, only previous sequence is required to generate next sequence. These iteratively algorithms enable users to process all sequences without putting all results in the memory at the same time.  The algorithms are written in C and hence are very computational efficient. 

Credit
===
I have to thanks [Martin Broadhurst](http://www.martinbroadhurst.com) and [Alistair Israel](http://alistairisrael.wordpress.com) for their algorithms. In my own opinion, [this](http://alistairisrael.wordpress.com/2009/09/22/simple-efficient-pnk-algorithm/) may be the best algorithm to generate k-permutation.

Installation
===
I don't have time to release it to CRAN yet, I will certainly do it in the future. Meanwhile, if you want to install `iterpc`, you can use
`devtools`:

```
library(devtools)
install_github("randy3k/iterpc")
```

Examples
===


#### 1) all combinations of drawing 2 items from {1, 2, 3}
```
> I = iterpc(5, 2)
> getall(I)
      [,1] [,2]
 [1,]    1    2
 [2,]    1    3
 [3,]    1    4
 [4,]    1    5
 [5,]    2    3
 [6,]    2    4
 [7,]    2    5
 [8,]    3    4
 [9,]    3    5
[10,]    4    5

```

#### 2) continuing 1), get combination by combination
```
> I = iterpc(5, 2)
> getnext(I)
[1] 1 2
> getnext(I)
[1] 1 3
> getnext(I,2)
     [,1] [,2]
[1,]    1    4
[2,]    1    5
```

#### 3) all permutations of {1, 2, 3}
```
> I = iterpc(3, ordered = TRUE)
> getall(I)
     [,1] [,2] [,3]
[1,]    1    2    3
[2,]    1    3    2
[3,]    2    1    3
[4,]    2    3    1
[5,]    3    1    2
[6,]    3    2    1
```


#### 4) permutations of multiset
Most package avaible with give 4!=24 permutations for the below example. `iterpc` also works well with labels.

```
> I = iterpc(c("a","a","b","c"), ordered = TRUE)
> getall(I)
      [,1] [,2] [,3] [,4]
 [1,] "a"  "a"  "b"  "c" 
 [2,] "a"  "a"  "c"  "b" 
 [3,] "a"  "b"  "a"  "c" 
 [4,] "a"  "b"  "c"  "a" 
 [5,] "a"  "c"  "a"  "b" 
 [6,] "a"  "c"  "b"  "a" 
 [7,] "b"  "a"  "a"  "c" 
 [8,] "b"  "a"  "c"  "a" 
 [9,] "b"  "c"  "a"  "a" 
[10,] "c"  "a"  "a"  "b" 
[11,] "c"  "a"  "b"  "a" 
[12,] "c"  "b"  "a"  "a"
```

#### 5) combinations with replacement

```
> I = iterpc(c("a","a","b","c"), 3, replace=TRUE)
> getall(I)
      [,1] [,2] [,3]
 [1,] "a"  "a"  "a" 
 [2,] "a"  "a"  "b" 
 [3,] "a"  "a"  "c" 
 [4,] "a"  "b"  "b" 
 [5,] "a"  "b"  "c" 
 [6,] "a"  "c"  "c" 
 [7,] "b"  "b"  "b" 
 [8,] "b"  "b"  "c" 
 [9,] "b"  "c"  "c" 
[10,] "c"  "c"  "c"
```

