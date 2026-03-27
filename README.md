# 🧮 Matematik Kütüphanesi (matematik.hpp)

Oyun geliştirme süreçlerini hızlandırmak için tasarlanmış, **sıfır bağımlılıklı** bir C++ matematik kütüphanesi.

## ✨ Özellikler
- **Hafif:** Sadece bir başlık dosyasıdır.
- **Hızlı:** Tüm fonksiyonlar `inline` ve şablonludur.
- **Güçlü:** Profesyonel animasyonlar için `yumusakGecis` (Lerp) içerir.

## 🛠 Kurulum
1. `kur.bat` dosyasını **Yönetici Olarak** çalıştırın.
2. IDE'nizin (Visual Studio vb.) "Include Directories" kısmına `C:\Program Files\MatematikLib` yolunu ekleyin.

## 🚀 Örnek
```cpp
#include <matematik.hpp>
float hiz = mat::yumusakGecis(0.0f, 10.0f, 0.1f);

---

### 4. `test.cpp` (Örnek Kullanım)
Kullanıcının kütüphaneyi denemesi için:

```cpp
#include <iostream>
#include "matematik.hpp"

int main() {
    int can = 100;
    mat::degisken_eksilt(can, 25);
    std::cout << "Kalan Can: " << can << std::endl;
    std::cout << "5'in karesi: " << mat::kareAl(5) << std::endl;
    return 0;
}
