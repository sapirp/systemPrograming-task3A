#include<iostream>
#include "solver.hpp"

using namespace solver;
using namespace std;

/*
 double RealVariable::solve(solver::RealVariable& f){
     return (1.0)}
 }
 */

double solver::solve(RealVariable& fun){
    return 0;
}

//opertor +
RealVariable& solver::operator+ (RealVariable& rv , double num){
    return rv;
}

RealVariable& solver::operator+ (double num , RealVariable& rv){
    return rv;
}

RealVariable& solver::operator+ (RealVariable& rv1 , RealVariable& rv2){
    return rv1;
}

//opertor -
RealVariable& solver::operator- (RealVariable& rv , double num){
    return rv;
}

RealVariable& solver::operator- (double num , RealVariable& rv){
    return rv;
}

RealVariable& solver::operator- (RealVariable& rv1 , RealVariable& rv2){
    return rv1;
}

//opertor *
RealVariable& solver::operator* (RealVariable& rv , double num){
    return rv;
}

RealVariable& solver::operator* (double num , RealVariable& rv){
    return rv;
}

RealVariable& solver::operator* (RealVariable& rv1 , RealVariable& rv2){
    return rv1;
}

//opertor /
RealVariable& solver::operator/ (RealVariable& rv , double num){
    return rv;
}

/*RealVariable& solver::operator/ (double num , RealVariable& rv){
    return rv;
}*/

/*RealVariable& solver::operator/ (RealVariable& rv1 , RealVariable& rv2){
    return rv1;
}*/
RealVariable& solver::operator^ (RealVariable& rv, const int num){
    return rv;
}

//opertor ==
RealVariable& solver::operator== (RealVariable& rv , double num){
    return rv;
}

RealVariable& solver::operator== (double num , RealVariable& rv){
    return rv;
}

RealVariable& solver::operator== (RealVariable& rv1 , RealVariable& rv2){
    return rv1;
}

/*
 std::complex ComplexVariable::solve(solver::ComplexVariable& f){
     return (1.0)}
 }
 */
 std::complex<double> solver::solve(ComplexVariable& fun){
     return 0;
 }

//operator +
ComplexVariable& solver::operator+ (ComplexVariable& cv , double num){
    return cv;
}

ComplexVariable& solver::operator+ (double num, ComplexVariable& cv ){
    return cv;
}

ComplexVariable& solver::operator+ (ComplexVariable& cv1, ComplexVariable& cv2 ){
    return cv1;
}

ComplexVariable& solver::operator+ (complex<double> c , ComplexVariable& cv ){
    return cv;
}

ComplexVariable& solver::operator+ (ComplexVariable& cv , complex<double> c ){
    return cv;
}

//operator -
ComplexVariable& solver::operator- (ComplexVariable& cv , double num){
    return cv;
}

ComplexVariable& solver::operator- (double num, ComplexVariable& cv ){
    return cv;
}

ComplexVariable& solver::operator- (ComplexVariable& cv1, ComplexVariable& cv2 ){
    return cv1;
}

ComplexVariable& solver::operator- (complex<double> c , ComplexVariable& cv ){
    return cv;
}

ComplexVariable& solver::operator- (ComplexVariable& cv , complex<double> c ){
    return cv;
}

//operator *
/*ComplexVariable& solver::operator* (ComplexVariable& cv , double num){
    return cv;
}*/

ComplexVariable& solver::operator* (double num, ComplexVariable& cv ){
    return cv;
}

/*ComplexVariable& solver::operator* (ComplexVariable& cv1, ComplexVariable& cv2 ){
    return cv1;
}*/

ComplexVariable& solver::operator* (complex<double> c , ComplexVariable& cv ){
    return cv;
}

/*ComplexVariable& solver::operator* (ComplexVariable& cv , complex<double> c ){
    return cv;
}*/

//operator /
ComplexVariable& solver::operator/ (ComplexVariable& cv , double num){
    return cv;
}

/*ComplexVariable& solver::operator/ (double num, ComplexVariable& cv ){
    return cv;
}*/

/*ComplexVariable& solver::operator/ (ComplexVariable& cv1, ComplexVariable& cv2 ){
    return cv1;
}*/

/*ComplexVariable& solver::operator/ (complex<double> c , ComplexVariable& cv ){
    return cv;
}*/

ComplexVariable& solver::operator/ (ComplexVariable& cv , complex<double> c ){
    return cv;
}

ComplexVariable& solver::operator^ (ComplexVariable& cv, const int num){
    return cv;
}

//operator ==
ComplexVariable& solver::operator== (ComplexVariable& cv , double num){
    return cv;
}

ComplexVariable& solver::operator== (double num, ComplexVariable& cv ){
    return cv;
}

ComplexVariable& solver::operator== (ComplexVariable& cv1, ComplexVariable& cv2 ){
    return cv1;
}

ComplexVariable& solver::operator== (complex<double> c , ComplexVariable& cv ){
    return cv;
}

ComplexVariable& solver::operator== (ComplexVariable& cv , complex<double> c ){
    return cv;
}