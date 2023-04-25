#include <iostream>
#include <algorithm>
#include "Fraction.hpp"

using namespace std;
namespace ariel{

// class Fraction {

    // Constructor. Also works as a conversion from double and
    // also as a default ctor.
     Fraction::Fraction(int num1,int num2){
        this->numA = num1;
        this->numB = num2;
        reduce();
     };
    // Logical NOT
    // bool operator!() const {
    //     return _re==0 && _im==0;
    // }

    Fraction Fraction:: operator-(const Fraction& other){return Fraction(1,1);};
    //----------------------------------------
    // binary operators
    //----------------------------------------

    Fraction Fraction:: operator+(const Fraction& other){return Fraction(1,1);};
    Fraction Fraction:: operator*(const Fraction& other){return Fraction(1,1);};
    Fraction Fraction:: operator/(const Fraction& other){return Fraction(1,1);}
    bool Fraction:: operator==(const Fraction& other){return true;};
    bool Fraction::operator!=(const Fraction& other){return true;};
    bool Fraction::operator>(const Fraction& other){return true;};
    bool Fraction::operator>=(const Fraction& other){return true;};
    bool Fraction::operator<(const Fraction& other){return true;};
    bool Fraction::operator<=(const Fraction& other){return true;};
    Fraction& Fraction:: operator++(){return *this;};
    Fraction Fraction:: operator++(int){return Fraction(1,1) ;};
    Fraction& Fraction:: operator--( ){return *this;};
    Fraction Fraction:: operator--(int){return Fraction(1,1);};
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
    Fraction operator- (const Fraction& numa, float numc2){return numa;};
    Fraction operator- (float numc2,const Fraction& numa){return numa;};    
    Fraction operator+ (const Fraction& numa, float numc2){return numa;};
    Fraction operator+ (float numc2, const Fraction& numa){return numa;};
    Fraction operator* (const Fraction& numa, float numc2){return numa;};
    Fraction operator* (float numc2, const Fraction& numa){return numa;}; 
    Fraction operator/ (const Fraction& numa, float numc2){return numa;};
    Fraction operator/ (float numc2,const Fraction& numa){return numa;};
    bool operator==(const Fraction& numa, float numc2){return true;};
    bool operator==(float numc2, const Fraction& numa){return true;};
    bool operator!=(const Fraction& numa, float numc2){return true;};
    bool operator!=(float numc2, const Fraction& numa){return true;};
    bool operator>(const Fraction& numa, float numc2){return true;};
    bool operator>(float numc2, const Fraction& numa){return true;};
    bool operator>=(const Fraction& numa, float numc2){return true;};
    bool operator>=(float numc2, const Fraction& numa){return true;};
    bool operator<(const Fraction& numa, float numc2){return true;};
    bool operator<(float numc2, const Fraction& numa){return true;};
    bool operator<=(const Fraction& numa, float numc2){return true;};
    bool operator<=(float numc2, const Fraction& numa){return true;};
    void Fraction::reduce(){};
       // friend Fraction operator+ (const Fraction& c1, const Fraction& c2);
    // friend bool operator==(const Fraction& c1, const Fraction& c2);
    // friend bool operator!=(const Fraction& c1, const Fraction& c2);

   
    //----------------------------------
    // friend global IO operators
    //----------------------------------
    std::ostream& operator<< (std::ostream& osnum, const Fraction& numc){
        // return (os << c.numA << '/' << c.numB << " " );
        return osnum;
    }
    std::istream& operator>> (std::istream& osnum , Fraction& numc){

    //---------------------------------------------
    // Does not check format
    //---------------------------------------------
    ///********
    // char ch;
    // return (os >> c.numA >> ch >> c.numB >> ch);
    ////////////*******
    return osnum;

    //---------------------------------------------

    // //---------------------------------------------
    // // Checks format, with rewind on failure.
    // //---------------------------------------------
    // double new_re = 0, new_im = 0;

    // // remember place for rewinding
    // ios::pos_type startPosition = os.tellg();

    // if ( (!(os >> new_re))                 ||
    //      (!getAndCheckNextCharIs(os,'+'))  ||
    //      (!(os >> new_im))                 ||
    //      (!(getAndCheckNextCharIs(os,'i'))) ) {

    //     // rewind on error
    //     auto errorState = os.rdstate(); // remember error state
    //     os.clear(); // clear error so seekg will work
    //     os.seekg(startPosition); // rewind
    //     os.clear(errorState); // set back the error flag
    // } else {
    //     c._re = new_re;
    //     c._im = new_im;
    // }

    // return os;
    }
    //-------------------------------------
}

// private:
//     int numerator_;
//     int denominator_;
// public:
//     // Constructors
//     Fraction() : numerator_(0), denominator_(1) {}
//     Fraction(int numerator, int denominator = 1) : numerator_(numerator), denominator_(denominator) {
//         reduce();
//     }

//     // Accessors
//     int numerator() const { return numerator_; }
//     int denominator() const { return denominator_; }

//     // Arithmetic operators
//     Fraction operator+(const Fraction& other) const {
//         int lcm = denominator_ * other.denominator() / __gcd(denominator_, other.denominator());
//         int num = numerator_ * (lcm / denominator_) + other.numerator() * (lcm / other.denominator());
//         return Fraction(num, lcm);
//     }

//     Fraction operator-(const Fraction& other) const {
//         int lcm = denominator_ * other.denominator() / __gcd(denominator_, other.denominator());
//         int num = numerator_ * (lcm / denominator_) - other.numerator() * (lcm / other.denominator());
//         return Fraction(num, lcm);
//     }

//     Fraction operator*(const Fraction& other) const {
//         int num = numerator_ * other.numerator();
//         int denom = denominator_ * other.denominator();
//         return Fraction(num, denom);
//     }

//     Fraction operator/(const Fraction& other) const {
//         int num = numerator_ * other.denominator();
//         int denom = denominator_ * other.numerator();
//         return Fraction(num, denom);
//     }

//     // Comparison operators
//     bool operator==(const Fraction& other) const {
//         return numerator_ == other.numerator() && denominator_ == other.denominator();
//     }

//     bool operator<(const Fraction& other) const {
//         int lcm = denominator_ * other.denominator() / __gcd(denominator_, other.denominator());
//         return numerator_ * (lcm / denominator_) < other.numerator() * (lcm / other.denominator());
//     }

//     bool operator<=(const Fraction& other) const {
//         int lcm = denominator_ * other.denominator() / __gcd(denominator_, other.denominator());
//         return numerator_ * (lcm / denominator_) <= other.numerator() * (lcm / other.denominator());
//     }

//     bool operator>(const Fraction& other) const {
//         int lcm = denominator_ * other.denominator() / __gcd(denominator_, other.denominator());
//         return numerator_ * (lcm / denominator_) > other.numerator() * (lcm / other.denominator());
//     }

//     bool operator>=(const Fraction& other) const {
//         int lcm = denominator_ * other.denominator() / __gcd(denominator_, other.denominator());
//         return numerator_ * (lcm / denominator_) >= other.numerator() * (lcm / other.denominator());
//     }

//     // Prefix and postfix increment and decrement operators
//     Fraction& operator++() { // prefix increment
//         numerator_ += denominator_;
//         reduce();
//         return *this;
//     }

//     Fraction operator++(int) { // postfix increment
//         Fraction temp(*this);
//         numerator_ += denominator_;
//         reduce();
//         return temp;
//     }

//     Fraction& operator--() { // prefix decrement
//         numerator_ -= denominator_;
//         reduce();
//         return *this;
//     }

//     Fraction operator--(int) { // postfix decrement
//         Fraction temp(*this);
//         numerator_ -= denominator_;
//         reduce();
//         return temp;
//     }

//     // Input and output operators
//     friend Fraction operator+(const Fraction& f, float x) {
//     float result = static_cast<float>(f) + x;
//     int num = static_cast<int>(result * 1000);
//     int denom = 1000;
//     return Fraction(num, denom);
// }

// friend Fraction operator+(float x, const Fraction& f) {
//     return f + x;
// }

// friend Fraction operator-(const Fraction& f, float x) {
//     float result = static_cast<float>(f) - x;
//     int num = static_cast<int>(result * 1000);
//     int denom = 1000;
//     return Fraction(num, denom);
// }

// friend Fraction operator-(float x, const Fraction& f) {
//     return f - x;
// }

// friend Fraction operator*(const Fraction& f, float x) {
//     float result = static_cast<float>(f) * x;
//     int num = static_cast<int>(result * 1000);
//     int denom = 1000;
//     return Fraction(num, denom);
// }

// friend Fraction operator*(float x, const Fraction& f) {
//     return f * x;
// }

// friend Fraction operator/(const Fraction& f, float x) {
//     float result = static_cast<float>(f) / x;
//     int num = static_cast<int>(result * 1000);
//     int denom = 1000;
//     return Fraction(num, denom);
// }

// friend Fraction operator/(float x, const Fraction& f) {
//     float result = x / static_cast<float>(f);
//     int num = static_cast<int>(result * 1000);
//     int denom = 1000;
//     return Fraction(num, denom);
// }
//////////////////////////////////
// tryy:
// conversion operators and the ambiguity they cause.
//  * 
//  * @author Erel Segal-Halevi
//  * @since 2018
//  */

// #include <iostream>
// #include <cmath>
// using namespace std;


// class Fraction {
// 	int 	nom;
// 	int 	den;
// public:
// 	Fraction(int nn, int dn): nom(nn), den(dn) { }

// 	Fraction(int nn): Fraction(nn, 1) { }  // conversion constructor

// 	operator double() const {              // conversion operator
// 		cout << "converting Fraction to double" << endl;
// 		return double(nom) / double(den);
// 	}
	
// 	operator string() const {              // conversion operator
// 		return to_string(nom)+"/"+to_string(den);
// 	}

// 	friend ostream& operator<<(ostream& os, const Fraction& frac);

// 	friend Fraction operator+ (const Fraction& a, const Fraction& other);

// 	Fraction operator- (const Fraction& other) const {
// 		int nn = nom * other.den -
// 			den * other.nom;
// 		int dd = den * other.den;
// 		return Fraction(nn, dd);
// 	}
// };

// Fraction operator+ (const Fraction& a, const Fraction& other) {
// 	int nn = a.nom * other.den +
// 		a.den * other.nom;
// 	int dd = a.den * other.den;
// 	return Fraction(nn, dd);
// }

// ostream& operator<<(ostream& os, const Fraction& frac) {
// 	return os << frac.nom << '/' << frac.den;
// }

// int main() {
// 	Fraction f1 {1, 4};
// 	cout << "f1 = " << f1 << endl;

// 	// Explicit conversion from double to fraction:
// 	double d1 {f1};
// 	// equivalent to: 
// 	// double d1 (f1);
// 	// double d1 = f1;
// 	cout << "d1 = " << d1 << endl;

// 	// Implicit conversion from double to fraction:
// 	cout << "sqrt(f1) = " << sqrt(f1) << endl;
// 	cout << "std::sqrt(f1) = " << std::sqrt(f1) << endl;
// 	cout << "sin(f1) = " << sin(f1) << endl;

// 	Fraction f2 {2};  // explicit
// 	Fraction f3 (3);  // explicit
// 	Fraction f4 = 4;  // implicit

// 	Fraction farray[5] {2,3,4,5,6};  // 5 times implicit constructor
// 	//Fraction farray[5] (2,3,4,5,6);  // does not compile

// 	// cout << "f2 = " << f2 << endl;
// 	// cout << ((Fraction)2) << endl;
// 	cout << "f1+2 = " << (f1 + Fraction{2}) << endl;   // OK! explicit conversion constructor
// 	cout << "f1+2 = " << ((double)f1 + 2) << endl;     // OK! explicit conversion operator
// 	// cout << "f1+2 = " << (f1 + 2) << endl;             // ambiguous! implicit conversion
// 	// cout << "2+f1 = " << (2 + f1) << endl;             // ambiguous! implicit conversion

// 	// cout << "f1-2 = " << (f1 - 2) << endl;   
// 	// cout << "2-f1 = " << (2 - f1) << endl;   

// 	return 0;
//     ////////////////////////////