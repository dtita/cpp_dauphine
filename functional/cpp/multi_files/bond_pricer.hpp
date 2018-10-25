#include "discount_factor.hpp"

 double price_bond(double maturity, double rate, double yield, double nominal)
 {
     return discount_factor(rate, maturity);
 }
