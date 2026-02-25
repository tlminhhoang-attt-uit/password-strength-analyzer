# 🔐 Password Strength Analyzer (C++)

A simple C++ console application that evaluates the strength of a password.

## 📌 Description

This program checks a password based on several security conditions and gives a score from 0 to 100.

It analyzes:

- Password length
- Uppercase letters
- Lowercase letters
- Digits
- Special characters

The program then shows a rating:
- Very Weak
- Weak
- Medium
- Strong
- Very Strong

---

## 🛠 Features

- Maximum length check (128 characters)
- Minimum length warning (less than 8 characters)
- Score calculation system
- Colored console output (green ✔ / red ✖)
- Strength bar display

---

## 🧠 Scoring System

| Condition | Points |
|-----------|--------|
| Length ≥ 8 | 30 |
| Uppercase | 15 |
| Lowercase | 15 |
| Digit | 20 |
| Special character | 20 |

Maximum score: **100**

---

## ▶ How to Run

Visual Studio
1. Open `Password_verification.sln`
2. Select Release x64
3. Build and Run

---

## 📂 Project Structure
