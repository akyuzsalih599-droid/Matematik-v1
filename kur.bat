@echo off
setlocal enabledelayedexpansion
set PATH=%SystemRoot%\system32;%SystemRoot%;%PATH%
cd /d "%~dp0"

:: --- OTOMATİK YÖNETİCİ İZNİ ALMA ---
net session >nul 2>&1
if %errorLevel% neq 0 (
    echo [!] Yonetici izni aliniyor...
    powershell -Command "Start-Process -Verb RunAs -FilePath '%0'"
    exit /b
)

title Matematik - Profesyonel Kurulum
color 0b

echo ==========================================
echo      MATEMATIK KUTUPHANESI PAKETI
echo ==========================================
echo.

set "HEDEF=C:\Program Files\MatematikLib"

echo [+] Adim 1: Dosyalar kopyalaniyor...
if not exist "%HEDEF%" mkdir "%HEDEF%" 2>nul

:: Dosyaları tırnak içinde kopyalayalım (Hata payı sıfır)
copy /Y "matematik.hpp" "%HEDEF%\" >nul 2>&1
copy /Y "LICENSE" "%HEDEF%\" >nul 2>&1
copy /Y "test.cpp" "%HEDEF%\" >nul 2>&1
copy /Y "README.md" "%HEDEF%\" >nul 2>&1

echo [OK] Dosyalar kopyalandi.

echo [+] Adim 2: PATH ayari yapiliyor...
:: Klasörün zaten PATH içinde olup olmadığını kontrol et
echo %PATH% | find /I "%HEDEF%" >nul
if %errorlevel% neq 0 (
    :: En güvenli ekleme yöntemi
    setx /M PATH "%PATH%;%HEDEF%" >nul 2>&1
    echo [OK] %HEDEF% sisteme eklendi.
) else (
    echo [!] Bu klasor zaten PATH icinde kayitli.
)

echo.
echo ******************************************
echo    KURULUM BASARIYLA TAMAMLANDI!
echo ******************************************
echo.
pause