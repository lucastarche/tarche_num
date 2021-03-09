#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

namespace tarche_num {
    class BigInteger {
        private:
            //MOD = 1e9
            const static int MOD = 1000000000;

            //The number is represented as a vector of base 1e9 digits
            //num[0] contains the LEAST significant digit
            std::vector<int> num;

            //Can either be 1 or -1. This is to make operations easier to implement
            int sign;

            void removeTrailingZeroes();
        public:
            BigInteger();
            BigInteger(int n);
            BigInteger(long long n);
            BigInteger(std::string s);

            bool operator==(const BigInteger &rhs) const;
            bool operator!=(const BigInteger &rhs) const;
            bool operator< (const BigInteger &rhs) const;
            bool operator> (const BigInteger &rhs) const;
            bool operator<=(const BigInteger &rhs) const;
            bool operator>=(const BigInteger &rhs) const;

            BigInteger operator-() const;
            BigInteger abs() const;

            void operator+=(const BigInteger &rhs);
            void operator-=(const BigInteger &rhs);
            void operator*=(const BigInteger &rhs);
            void operator/=(const BigInteger &rhs);
            void operator%=(const BigInteger &rhs);

            std::string toString() const;

            friend BigInteger operator+(BigInteger lhs, const BigInteger &rhs) {
                lhs += rhs;
                return lhs;
            }

            friend BigInteger operator-(BigInteger lhs, const BigInteger &rhs) {
                lhs -= rhs;
                return lhs;
            }

            friend BigInteger operator*(BigInteger lhs, const BigInteger &rhs) {
                lhs *= rhs;
                return lhs;
            }

            friend BigInteger operator/(BigInteger lhs, const BigInteger &rhs) {
                lhs /= rhs;
                return lhs;
            }

            friend BigInteger operator%(BigInteger lhs, const BigInteger &rhs) {
                lhs %= rhs;
                return lhs;
            }

            friend std::ostream &operator<<(std::ostream &output, const BigInteger &num) {
                output << num.toString();
                return output;
            }
    };
}
