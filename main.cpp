#include "BigInteger.hpp"

int main() {
    tarche_num::BigInteger a(100);
    tarche_num::BigInteger b(987654321000LL);
    std::cout << b.toString() << '\n';
    tarche_num::BigInteger c(0);
    tarche_num::BigInteger d("100012345678");
    std::cout << d.toString() << '\n';

    std::cout << (b + d).toString() << '\n';
    std::cout << (d - b).toString() << '\n';
    std::cout << (b - d).toString() << '\n';
    std::cout << (b * d).toString() << '\n';
    std::cout << (b * c).toString() << '\n';
    std::cout << (b / 100).toString() << '\n';
    std::cout << (b / d).toString() << '\n';
    std::cout << ((-b) / d).toString() << '\n';
    std::cout << (b / (-d)).toString() << '\n';
    //std::cout << (b / c).toString() << '\n';
    std::cout << std::min(b, d).toString() << '\n';
    std::cout << std::max(b, d).toString() << '\n';
    std::cout << (-a).abs().toString() << '\n';


    tarche_num::BigInteger e(10), f(7);
    std::cout << (int)(10 / 7) << ' ' << (int)((-10) / 7) << ' ' << (int)(10 / (-7)) << ' ' << (int)((-10) / (-7)) << '\n';
    std::cout << (int)(10 % 7) << ' ' << (int)((-10) % 7) << ' ' << (int)(10 % (-7)) << ' ' << (int)((-10) % (-7)) << '\n';
    std::cout << (e / f) << ' ' << ((-e) / f) << ' ' << (e / (-f)) << ' ' << ((-e) / (-f)) << '\n';
    std::cout << (e % f) << ' ' << ((-e) % f) << ' ' << (e % (-f)) << ' ' << ((-e) % (-f)) << '\n';
}
