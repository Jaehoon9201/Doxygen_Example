
#include <math.h>
#if !defined(__APPLE__)
#include <malloc.h>
#endif
#include <stdlib.h>
#include <stdio.h>
#include "lmdif.c"


extern int DATA_NUM;
extern int PARA_NUM;
/// @brief  Number of data to be used for testing optimization
int DATA_NUM = 0;
int PARA_NUM = 0;


extern double dy[];
extern double x_org[];
extern double x_changed[];
extern double x[];
double ey[0];
double fvecs[0];
double test;

/// @brief It is assigned to 'ftol' and 'xtol'. 
/// @note  It should be reset considering your machine performance(i.e., precision)
double tols         = 1.49012E-8;
int infoes          = 1;
int nfevs           = 0;
double results      = 0;

/// @brief dpmpar[0] :  machine precision(=machine epsilon) 
/// @brief dpmpar[1] , dpmpar[2] :  machine expression range
/// @note  It should be set considering your machine.
double dpmpar[]     = { 2.220446049250313e-16,
                        2.225073858507201e-308,
                        1.79769313486231e+308  };

/// @brief  It calculates the difference with true values and step-by-step optimized outputs.
/// @details  'fvecs' is step-by-step difference.
/// @param         m : Number of parameters
/// @param         n : Number of data
/// @param         x : Parameters of the model-based friction model.
/// @param         fvecs : 'Dfferences' which are used for calculating magnitude of step-by-step optimization.
/// @param         info : It is offered from MINPACK algorithm. It alarms a process condition.
void residual(int m, int n, double *x, double *fvecs, int *info ){


}
int main() {


/** 
  reference : https://heasarc.gsfc.nasa.gov/ftools/caldb/help/HDmpfit.html
 
  reference : https://www.math.utah.edu/software/minpack/minpack/lmdif1.html
 
  1. Parameters.

    Parameters designated as input parameters must be specified on
    entry to LMDIF1 and are not changed on exit, while parameters
    designated as output parameters need not be specified on entry
    and are set to appropriate values on exit from LMDIF1.

    FCN is the name of the user-supplied subroutine which calculates
    the functions.  FCN must be declared in an EXTERNAL statement
    in the user calling program, and should be written as follows.

    SUBROUTINE FCN(M,N,X,FVEC,IFLAG)
    INTEGER M,N,IFLAG
    DOUBLE PRECISION X(N),FVEC(M)

    CALCULATE THE FUNCTIONS AT X AND
    RETURN THIS VECTOR IN FVEC.

    RETURN
    END

    The value of IFLAG should not be changed by FCN unless the
    user wants to terminate execution of LMDIF1.  In this case set
    IFLAG to a negative integer.

    M is a positive integer input variable set to the number of
    functions.

    N is a positive integer input variable set to the number of
    variables.  N must not exceed M.

    X is an array of length N.  On input X must contain an initial
    estimate of the solution vector.  On output X contains the
    final estimate of the solution vector.

    FVEC is an output array of length M which contains the functions
    evaluated at the output X.

    TOL is a nonnegative input variable.  Termination occurs when
    the algorithm estimates either that the relative error in the
    sum of squares is at most TOL or that the relative error
    between X and the solution is at most TOL.  Section 4 contains
    more details about TOL.

    INFO is an integer output variable.  If the user has terminated
    execution, INFO is set to the (negative) value of IFLAG.  See
    description of FCN.  Otherwise, INFO is set as follows.

    INFO = 0  Improper input parameters.

    INFO = 1  Algorithm estimates that the relative error in the
              sum of squares is at most TOL.
              --> The solution converged
    INFO = 2  Algorithm estimates that the relative error between
              X and the solution is at most TOL.
              --> xtol=%f is too small, no further improvement 
                  in the approximate\n  solution
    INFO = 3  Conditions for INFO = 1 and INFO = 2 both hold.

    INFO = 4  FVEC is orthogonal to the columns of the Jacobian to
              machine precision.

    INFO = 5  Number of calls to FCN has reached or exceeded
              200*(N+1).

    INFO = 6  TOL is too small.  No further reduction in the sum
              of squares is possible.

    INFO = 7  TOL is too small.  No further improvement in the
              approximate solution X is possible.

    Sections 4 and 5 contain more details about INFO.

    IWA is an integer work array of length N.

    WA is a work array of length LWA.

    LWA is a positive integer input variable not less than
*/ 

    int i;  
    for (i=0; i<DATA_NUM; i++) {

    }


    return 0;

}