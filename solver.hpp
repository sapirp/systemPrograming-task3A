
#include <iostream>
#include <complex>


namespace solver{

    

    

class  RealVariable{
    private:
    double a,b,c;

    public:
    RealVariable()=default;

   // friend double solve(RealVariable& fun);
    
// operator +
    friend RealVariable& operator+ (RealVariable& , double);
    friend RealVariable& operator+ (double , RealVariable&);
    friend RealVariable& operator+ (RealVariable& , RealVariable&);
    
// operator -
    friend RealVariable& operator- (RealVariable& , double);
    friend RealVariable& operator- (double , RealVariable&);
    friend RealVariable& operator- (RealVariable& , RealVariable&);

// operator *
    friend RealVariable& operator* (double , RealVariable&);
    friend RealVariable& operator* (RealVariable& , double);
    friend RealVariable& operator* (RealVariable& , RealVariable&);

// operator /
    friend RealVariable& operator/ (RealVariable& , double);
    friend RealVariable& operator/ (double , RealVariable&);
    friend RealVariable& operator/ (RealVariable& , RealVariable&);
//operator ^   
    friend RealVariable& operator^ (RealVariable& , const int);
    
 // operator ==   
    friend RealVariable& operator== (RealVariable& , double);
    friend RealVariable& operator== (double , RealVariable&);
    friend RealVariable& operator== (RealVariable& , RealVariable&);    
};

double solve(RealVariable& fun);
     

class ComplexVariable{
    private:
    std::complex<double> a ,b, c;

    public:

    ComplexVariable()=default;

    //friend std::complex<double> solve(ComplexVariable& fun);

//operator +
    friend ComplexVariable& operator+ (ComplexVariable& , double);
    friend ComplexVariable& operator+ (double , ComplexVariable&);
    friend ComplexVariable& operator+ (ComplexVariable& , ComplexVariable&);
    friend ComplexVariable& operator+ (std::complex<double> , ComplexVariable&);
    friend ComplexVariable& operator+ (ComplexVariable& , std::complex<double>);
   
//operator -
    friend ComplexVariable& operator- (ComplexVariable& , double);
    friend ComplexVariable& operator- (double , ComplexVariable&);
    friend ComplexVariable& operator- (ComplexVariable& , ComplexVariable&);
    friend ComplexVariable& operator- (std::complex<double> , ComplexVariable&);
    friend ComplexVariable& operator- (ComplexVariable& , std::complex<double>);

//operator *
    friend ComplexVariable& operator* (ComplexVariable& , double);
    friend ComplexVariable& operator* (double , ComplexVariable&);
    friend ComplexVariable& operator* (ComplexVariable& , ComplexVariable&);
    friend ComplexVariable& operator* (std::complex<double> , ComplexVariable&);
    friend ComplexVariable& operator* (ComplexVariable& , std::complex<double>); 

//operator /
    friend ComplexVariable& operator/ (ComplexVariable& , double);
    friend ComplexVariable& operator/ (double , ComplexVariable&);
    friend ComplexVariable& operator/ (ComplexVariable& , ComplexVariable&);
    friend ComplexVariable& operator/ (std::complex<double> , ComplexVariable&);
    friend ComplexVariable& operator/ (ComplexVariable& , std::complex<double>);

//operator ^    
    friend ComplexVariable& operator^ (ComplexVariable& , const int);
    
//operator ==
    friend ComplexVariable& operator== (ComplexVariable& , double);
    friend ComplexVariable& operator== (double , ComplexVariable&);
    friend ComplexVariable& operator== (ComplexVariable& , ComplexVariable&);
    friend ComplexVariable& operator== (std::complex<double> , ComplexVariable&);
    friend ComplexVariable& operator== (ComplexVariable& , std::complex<double>);
};

std::complex<double> solve(ComplexVariable& fun);

}

