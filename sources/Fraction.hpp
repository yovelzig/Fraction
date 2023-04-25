
#pragma once

/**
 * Header file for the Complex class.
 * 
 * @author Ofir Pele
 * @since 2017
 */


#include <iostream>
namespace ariel{
class Fraction {

private:
    int numA;
    int numB;
    void reduce();

public:

    // Constructor. Also works as a conversion from double and
    // also as a default ctor.
     Fraction(int num1,int num2);
    // Logical NOT
    // bool operator!() const {
    //     return _re==0 && _im==0;
    // }

    Fraction operator-(const Fraction& other);
    //----------------------------------------
    // binary operators
    //----------------------------------------

    Fraction operator+(const Fraction& other);
    Fraction operator*(const Fraction& other);
    Fraction operator/(const Fraction& other);
    bool operator==(const Fraction& other);
    bool operator!=(const Fraction& other);
    bool operator>(const Fraction& other);
    bool operator>=(const Fraction& other);
    bool operator<(const Fraction& other);
    bool operator<=(const Fraction& other);
    Fraction &operator++();
    Fraction operator++(int);
    Fraction &operator--( );
    Fraction operator--(int);
    // Fraction operator<=( );

    // Fraction& operator+=(const Fraction& other) {
    //     _re+= other._re;
    //     _im+= other._im;
    //     return *this; // for call chaining
    // }

    // Fraction& operator*=(const Fraction& other) {
    //     double new_re = _re*other._re - _im*other._im;
    //     double new_im = _re*other._im + _im*other._re; 
    //     _re = new_re;
    //     _im = new_im;
	// 	// version with bug
	// 	// _im = _re*other._im + _im*other._re; 
	// 	// _re = _re*other._re - _im*other._im;
	// 	return *this;
    // }
    //----------------------------------------
    

    /* 
    // Compile error:
    std::ostream& operator<< (std::ostream& os, const Complex& c) const {
        os << "(" << _re << "+" << _im << "i)";
        return os;
    }
    // Compiles, but unexpected - don't do it:
    std::ostream& operator<< (std::ostream& os) const {
        os << "[[" << _re << "+" << _im << "i]]";
        return os;
    }
    */

    //-------------------------------------
    // friend global binary operators
    //-------------------------------------
    friend Fraction operator- (const Fraction& numa, float numc2);
    friend Fraction operator- (float numc2, const Fraction& numa);    
    friend Fraction operator+ (const Fraction& numa, float numc2);
    friend Fraction operator+ (float numc2,const Fraction& numa);
    friend Fraction operator* (const Fraction& numa, float numc2);
    friend Fraction operator* (float numc2,const Fraction& numa); 
    friend Fraction operator/ (const Fraction& numa, float numc2);
    friend Fraction operator/ (float numc2,const Fraction& numa);
    friend bool operator==(const Fraction& numa, float numc2);
    friend bool operator==(float numc2, const Fraction& numa);
    friend bool operator!=(const Fraction& numa, float numc2);
    friend bool operator!=(float numc2, const Fraction& numa);
    friend bool operator>(const Fraction& numa, float numc2);
    friend bool operator>(float numc2, const Fraction& numa);
    friend bool operator>=(const Fraction& numa, float numc2);
    friend bool operator>=(float numc2, const Fraction& numa);
    friend bool operator<(const Fraction& numa, float numc2);
    friend bool operator<(float numc2, const Fraction& numa);
    friend bool operator<=(const Fraction& numa, float numc2);
    friend bool operator<=(float numc2, const Fraction& numa);
       // friend Fraction operator+ (const Fraction& c1, const Fraction& c2);
    // friend bool operator==(const Fraction& c1, const Fraction& c2);
    // friend bool operator!=(const Fraction& c1, const Fraction& c2);

   
    //----------------------------------
    // friend global IO operators
    //----------------------------------
    friend std::ostream& operator<< (std::ostream& osnum, const Fraction& numc);
    friend std::istream& operator>> (std::istream& osnum , Fraction& numc);
    //-------------------------------------
};
}