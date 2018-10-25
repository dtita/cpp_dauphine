#include <cmath>
#include <iostream>
#include <vector>
#ifndef DISCOUNT_FACTOR_HPP // Inclusion Guard
#define DISCOUNT_FACTOR_HPP

inline double discount_factor(double rate, double maturity) {
    double res = std::exp(-rate * maturity);
    return res;}


std::vector<double> discount_factor(const std::vector<double> r, const std::vector<double> m);
void print_discount_factor(double rate, double maturity);
#endif // DISCOUNT_FACTOR_HPP
