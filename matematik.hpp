#pragma once
#include <stdexcept>

namespace mat {

    template <typename T>
    inline T topla(T a, T b) {
        return a + b;
    }

    template <typename T>
    inline T cikart(T a, T b) {
        return a - b;
    }

    template <typename T>
    inline T carp(T a, T b) {
        return a * b;
    }

    template <typename T>
    inline T bol(T a, T b) {
        if(b == 0) {
            throw std::runtime_error("mat::bol Hatasi: Sifira bolme yapilamaz!");
        }
        return a / b;
    }

    template <typename T>
    inline T kareAl(T a) {
        return a * a;
    }

    template <typename T>
    inline T kupAl(T a) {
        return a * a * a;
    }

    template <typename T>
    inline void degisken_artir(T &isim, T i) {
        isim += i;
    }

    template <typename T>
    inline void degisken_eksilt(T &isim, T i) {
        isim -= i;
    }

    template <typename T, typename U>
    inline T yumusakGecis(T baslangic, T bitis, U oran) {
        return baslangic + oran * (bitis - baslangic);
    }
}