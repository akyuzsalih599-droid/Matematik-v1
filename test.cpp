#include <iostream>
#include "matematik.hpp" // Senin kütüphanen

int main() {
    // 1. Temel İşlemler Testi
    std::cout << "--- Temel Matematik Testi ---" << std::endl;
    std::cout << "10 + 5 = " << mat::topla(10, 5) << std::endl;
    std::cout << "20 - 8 = " << mat::cikart(20, 8) << std::endl;
    std::cout << "4 * 3  = " << mat::carp(4, 3) << std::endl;
    
    // 2. Üs Alma Testi
    std::cout << "\n--- Us Islemleri Testi ---" << std::endl;
    std::cout << "6'nin karesi: " << mat::kareAl(6) << std::endl;
    std::cout << "2'nin kubu:   " << mat::kupAl(2) << std::endl;

    // 3. Değişken Manipülasyon Testi
    std::cout << "\n--- Degisken Islemleri Testi ---" << std::endl;
    int puan = 100;
    mat::degisken_eksilt(puan, 20);
    std::cout << "Puan 100'du, 20 eksiltildi: " << puan << std::endl;

    // 4. Yumuşak Geçiş (Lerp) Testi - Oyunlar için en önemlisi!
    std::cout << "\n--- Yumusak Gecis (Lerp) Testi ---" << std::endl;
    float baslangic = 0.0f;
    float bitis = 100.0f;
    float oran = 0.5f; // Tam ortası
    float sonuc = mat::yumusakGecis(baslangic, bitis, oran);
    std::cout << "0 ile 100'un tam ortasi (%50): " << sonuc << std::endl;

    std::cout << "\n------------------------------------------" << std::endl;
    std::cout << "TEBRIKLER! Salih'in Matematik Kutuphanesi Sorunsuz Calisiyor." << std::endl;
    
    return 0;
}