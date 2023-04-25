#include "doctest.h"
#include "sources/Fraction.hpp"
#include <stdexcept>
// using namespace std;
using namespace ariel;
TEST_CASE("initialization") {    
   CHECK_NOTHROW(Fraction(5,3));
   CHECK_NOTHROW(Fraction(0,3));
   CHECK_THROWS(Fraction(5,0));
   CHECK_THROWS(Fraction(0,0));
}

TEST_CASE("operators check") {
    Fraction a(8,9),b(4,3),c(8,9),d(4,3);
    CHECK(a == c);
    CHECK(b == d);
    CHECK(b > c);
    CHECK(b < c);
    CHECK(b >= d);
    CHECK(a >= c);
    CHECK(a <= c);
    CHECK(b <= d);  
}

TEST_CASE("changes after operator's using") {
   Fraction a(2,9),b(7,9),c(5,9),d(10,81),e(11,9);
    CHECK((a+c) == b);
    CHECK((b-a) == c);
    CHECK((a * c) == d);
    CHECK_NOTHROW(a * 3.5);
    CHECK((a * 3.5) == b);
    CHECK((d / c) == a);
}

TEST_CASE("reduce equal") {
   Fraction a(3,6),b(4,8),c(1,2),d(3,9),e(1,3);
    CHECK(a == b);
    CHECK(b == c);
    CHECK(e == d);
    CHECK((a * d) == (b*e));
    CHECK((d / c) == (e / b));
}

 