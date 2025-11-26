# C Language Practice (C語言練習)

這是我的 C 語言學習與練習紀錄。
This repository contains my practice codes for learning C programming.

## 📁 練習內容 (Topics)

### 1. Prime Factors (質數判斷與因數分解)
- **功能**: 輸入一個整數，判斷是否為質數。若不是質數，則列出其所有因數。
- **學習重點**:
  - `scanf` 與 `printf` 的使用
  - `for` 迴圈邏輯
  - 自訂函數 (Functions)
  - 解決中文亂碼問題 (`chcp 65001`)

### 2. Password Verification (密碼驗證機制)
- **功能**: 設定一組預設密碼（6位數），使用者有 3 次輸入機會。利用字串比對判斷輸入是否正確，若失敗則扣除次數並提示剩餘機會，連續錯誤 3 次即終止程式。
- **學習重點**:
  - 字串處理函式庫 `<string.h>` 與 `strcmp` 的使用
  - `while` 迴圈與計數器 (`chance`) 邏輯控制
  - `scanf` 的輸入安全限制 (`%6s`) 以避免緩衝區溢位
  - 模組化設計：將驗證邏輯獨立為 `check_password` 函數

#### 📝 程式碼實作 (Code Implementation)
