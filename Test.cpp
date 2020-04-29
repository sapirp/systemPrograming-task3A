/**
 * A demonstration test program for Gimatriya calculation.
 * 
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "solver.hpp"

using namespace solver;

TEST_CASE("Test Real Variable First-order equation"){

    solver::RealVariable x;

    CHECK(solve(x==1)==1);
    CHECK(solve(2*x-x == 10)==10);
    CHECK(solve(x-4 == 10)==14);
    CHECK(solve(x+4 == 10)==6);
    CHECK(solve(2*x-4 == 10)==7);
    CHECK(solve(2*x-4.0 == 10.0)==7);
    CHECK(solve(2-4*x == 10)==-2);
    CHECK(solve(2.0-4.0*x == 10.0)==-2);
    CHECK(solve(2*x-4*x == 10)==-5);
    CHECK(solve(2*x-4.0*x == 10.0)==-5);
    CHECK(solve(2*x+4 == 10)==3);
    CHECK(solve(2.0*x+4 == 10.0)==3);
    CHECK(solve(2+4*x == 10)==2);
    CHECK(solve(2.0+4*x == 10.0)==2);
    CHECK(solve(2*x+2*x == 10)==4.5);
    CHECK(solve(2.0*x+2.0*x == 10.0)==4.5);

    CHECK(solve(x/1 == 10)==10);
    CHECK(solve(x/2 == 10)==20);
    CHECK(solve(2+4*x/2 == 10)==4);
    CHECK(solve(2.0+4*x/2.0 == 10.0)==4);
    CHECK(solve(2*x/2-3*x == 10)==-5);

    CHECK(solve(2-4*x+4 == 10)==-1);
    CHECK(solve(2-4*x+4-x == 10)==-5);
    CHECK(solve(2*x-4+4*x == 10)==1);
    CHECK(solve(2*x-4-4*x == 10)==-7);
    CHECK(solve(2*x-4*x+4 == 10)==-3);
}

TEST_CASE("Test Real Variable First-order equation from two sides"){

    solver::RealVariable x;

    CHECK(solve(2*x+4 == 10-x)==2);
    CHECK(solve(2*x+4.0 == 10.0-x)==2);
    CHECK(solve(2*x+4 == 10+x)==6);
    CHECK(solve(2*x+4.0 == 10.0+x)==6);
    CHECK(solve(2*x+40 == 10*x)==5);
    CHECK(solve(2*x+40.0 == 10.0*x)==5);
    CHECK(solve(2*x+4 == x/1)==-4);
    CHECK(solve(2*x+4.0 == x/1.0)==-4);
    CHECK(solve(2-4*x == 10-2*x)==-4);
    CHECK(solve(2.0-4.0*x == x+10.0)==-1.6);
    CHECK(solve(2*x-4*x == x-10-2)==4);
    CHECK(solve(2*x-4*x == 10-x)==-10);
    CHECK(solve(2*x+4.0*x == x+10.0)==2);
    CHECK(solve(2*x+4 == 10+x+2)==8);
    CHECK(solve(2*x+4 == x+10-x-2)==2);
    CHECK(solve(2*x+4 == 10*x-4)==1);
    CHECK(solve(2+4*x+1 == 10+1)==2);
    CHECK(solve(3.0+4*x+1-1 == 10.0+x-1)==4);
    CHECK(solve(4+2*x+2*x == 10-2*x)==1);
    CHECK(solve(2.0*x+2.0*x-1 == 10.0-1+2*x)==5);
    
    CHECK(solve(2+4*x/2 == 2+10*x+8)==-1);
    CHECK(solve(2*x + 4.0 == 20 + 6.0*x/2 - 2*x)==16);
    CHECK(solve(2.0+4*x/2.0 == 10.0-x/2)==3.2);
    CHECK(solve(2*x/2-3*x == x-6*x/3+20)==-20);
    CHECK(solve(2*x*2-3*x == x-6*x/3+20)==10);
    CHECK(solve(2*x*2/2 == x+6*x/3*2)==0);
}


TEST_CASE("Test complex Variable First-order equation"){

    solver::ComplexVariable x;

    CHECK(solve(2*x-x == 10)== (10.0,0.0));//10.0+0i);
    CHECK(solve(x-4 == 10)== (14.0,0.0));//14.0+0i);
    CHECK(solve(x+4 == 10)== (6.0,0.0));//6.0+0i);
    CHECK(solve(2*x-4 == 10)== (7.0,0.0));//7.0+0i);
    CHECK(solve(2*x-4.0 == 10.0)== (7.0,0.0));//7.0+0i);
    CHECK(solve(2-4*x == 10)== (-2.0,0.0));//-2.0+0i);
    CHECK(solve(2.0-4.0*x == 10.0)==(-2.0,0.0));//-2.0+0i);
    CHECK(solve(2*x-4*x == 10)==(-5.0,0.0));//-5.0+0i);
    CHECK(solve(2*x-4.0*x == 10.0)==(-5.0,0.0));//-5.0+0i);
    CHECK(solve(2*x+4 == 10)==(3.0,0.0));//3.0+0i);
    CHECK(solve(2.0*x+4 == 10.0)==(3.0,0.0));//3.0+0i);
    CHECK(solve(2+4*x == 10)==(2.0,0.0));//2.0+0i);
    CHECK(solve(2.0+4*x == 10.0)==(2.0,0.0));//2.0+0i);
    CHECK(solve(2*x+2*x == 10)==(4.5,0.0));//4.5+0i);
    CHECK(solve(2.0*x+2.0*x == 10.0)==(4.5,0.0));//4.5+0i);

    CHECK(solve(x/1 == 10)==(10.0,0.0));//10.0+0i);
    CHECK(solve(x/2 == 10)==(20.0,0.0));//20.0+0i);
    CHECK(solve(2+4*x/2 == 10)==(4.0,0.0));//4.0+0i);
    CHECK(solve(2.0+4*x/2.0 == 10.0)==(4.0,0.0));//4.0+0i);
    CHECK(solve(2*x/2-3*x == 10)==(-5.0,0.0));//-5.0+0i);

    CHECK(solve(2-4*x+4 == 10)==(-1.0,0.0));//-1.0+0i);
    CHECK(solve(2-4*x+4-x == 16)==(-5.0,0.0));//-5.0+0i);
    CHECK(solve(2*x-4+4*x == 10)==(1.0,0.0));//1.0+0i);
    CHECK(solve(2*x-4-4*x == 10)==(-7.0,0.0));//-7.0+0i);
    CHECK(solve(2*x-4*x+4 == 10)==(-3.0,0.0));//-3.0+0i);
}

TEST_CASE("Test complex Variable First-order equation from two sides"){

    solver::ComplexVariable x;

    CHECK(solve(2*x+4 == 10-x)==(2.0,0.0));//2.0+0i);
    CHECK(solve(2*x+4.0 == 10.0-x)==(2.0,0.0));//2.0+0i);
    CHECK(solve(2*x+4 == 10+x)==(6.0,0.0));//6.0+0i);
    CHECK(solve(2*x+4.0 == 10.0+x)==(6.0,0.0));//6.0+0i);
    CHECK(solve(2*x+40 == 10*x)==(5.0,0.0));//5.0+0i);
    CHECK(solve(2*x+40.0 == 10.0*x)==(5.0,0.0));//5.0+0i);
    CHECK(solve(2*x+4 == x/1)==(-4.0,0.0));//-4.0+0i);
    CHECK(solve(2*x+4.0 == x/1.0)==(-4.0,0.0));//-4.0+0i);
    CHECK(solve(2-4*x == 10-2*x)==(-4.0,0.0));//-4.0+0i);
    CHECK(solve(2.0-4.0*x == x+10.0)==(-1.6,0.0));//-1.6+0i);
    CHECK(solve(2*x-4*x == x-10-2)==(4.0,0.0));//4.0+0i);
    CHECK(solve(2*x-4*x == 10-x)==(-10.0,0.0));//-10.0+0i);
    CHECK(solve(2*x+4.0*x == x+10.0)==(2.0,0.0));//2.0+0i);
    CHECK(solve(2*x+4 == 10+x+2)==(8.0,0.0));//8.0+0i);
    CHECK(solve(2*x+4 == x+10-x-2)==(2.0,0.0));//2.0+0i);
    CHECK(solve(2*x+4 == 10*x-4)==(1.0,0.0));//1.0+0i);
    CHECK(solve(2+4*x+1 == 10+1)==(2.0,0.0));//2.0+0i);
    CHECK(solve(3.0+4*x+1-1 == 10.0+x-1)==(4.0,0.0));//4.0+0i);
    CHECK(solve(4+2*x+2*x == 10-2*x)==(1.0,0.0));//1.0+0i);
    CHECK(solve(2.0*x+2.0*x-1 == 10.0-1+2*x)==(5.0,0.0));//5.0+0i);
    
    CHECK(solve(2+4*x/2 == 2+10*x+8)==(-1.0,0.0));//-1.0+0i);
    CHECK(solve(2*x + 4.0 == 20 + 6.0*x/2 - 2*x)==(16.0,0.0));//16.0+0i);
    CHECK(solve(2.0+4*x/2.0 == 10.0-x/2)==(3.2,0.0));//3.2+0i);
    CHECK(solve(2*x/2-3*x == x-6*x/3+20)==(-20.0,0.0));//-20.0+0i);
    CHECK(solve(2*x*2-3*x == x-6*x/3+20)==(10.0,0.0));//10.0+0i);
    CHECK(solve(2*x*2/2 == x+6*x/3*2)==(0.0,0.0));//0.0+0i);

   // CHECK(solve(x + 5i == 2.0*x + 3i)==(0.0,2.0));//0.0+2i);
}

TEST_CASE("Test Real Variable Second-order equation"){

    solver::RealVariable x;

    CHECK((solve((x^2) == 16)==4 || solve((x^2) == 16)==-4));
    CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==4 || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==-4));
    CHECK(solve((x^2) + 2*x + 4.0 == (x^2) + 20 + 6.0*x/2 )==-16 );
    CHECK((solve((x^2) + 4.0 == 20)==4 || solve((x^2) + 4.0 == 20)==-4));
    CHECK((solve(2*x + (x^2) + 4.0 == 20 + 6.0*x/2 - x)==4 || solve( 2*x + (x^2) + 4.0 == 20 + 6.0*x/2 - x)==-4));   
}

TEST_CASE("Test Complex Variable Second-order equation"){

    solver::ComplexVariable x;


   // CHECK(solve((x^2) == 16)==t);

    CHECK((solve((x^2) == 16)==(4.0,0.0) || solve((x^2) == 16)==(-4.0,0.0))); //4.0+0i; //-4.0+0i)) 
    CHECK((solve((x^2) == -16)==(0.0,4.0) || solve((x^2) == -16)==(0.0,4.0))); //(0.0+4i) //(0.0-4i);
    CHECK((solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==(4.0,0.0) || solve((x^2) + 2*x + 4.0 == 20 + 6.0*x/2 - x)==(-4.0,0.0))); //4.0+0i; //-4.0+0i)) 
    CHECK(solve((x^2) + 2*x + 4.0 == (x^2) + 20 + 6.0*x/2 )==(4.0,0.0));  //-16.0+0i );
    CHECK((solve((x^2) + 4.0 == 20)==(4.0,0.0) || solve((x^2) + 4.0 == 20)==(-4.0,0.0)));//4.0+0i; //-4.0+0i)) 
    CHECK((solve(2*x + (x^2) + 4.0 == 20 + 6.0*x/2 - x)==(4.0,0.0) || solve( 2*x + (x^2) + 4.0 == 20 + 6.0*x/2 - x)==(4.0,0.0)));  //4.0+0i; //-4.0+0i)) 
}
 
TEST_CASE("Test exception"){

    solver::ComplexVariable y;
    solver::RealVariable x;

    CHECK_THROWS(solve((x^2) == -16));
    CHECK_THROWS(solve(2*x + 4.0 == 20 + 6.0*x/2 - x));   //reset x
    CHECK_THROWS(solve(2*x + 4.0 == 20 + 6.0*x/0 - x));   //Zero division
    CHECK_THROWS(solve(2*y + 4.0 == 20 + 6.0*y/0 - y));   //Zero division
}