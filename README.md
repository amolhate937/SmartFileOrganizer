# 🚀 SmartFileOrganizer

SmartFileOrganizer is a Command-Line Interface (CLI) tool written in C++ that helps you organize files in a folder by their file extensions. It automatically groups files into folders like `pdf`, `jpg`, `exe`, etc.

---

## 📁 Features

- Organizes files by their extensions  
- Creates folders automatically  
- Skips unknown or system files safely  
- Fast and lightweight CLI tool  

---

## 🛠️ Environment Setup (Windows)

Follow these steps to set up the environment and run this tool locally:

### 1. Install MinGW (if not already installed)

- Download MinGW from: https://sourceforge.net/projects/mingw/
- During installation, ensure you check:
  - `g++` (C++ compiler)
- Add `C:\MinGW\bin` or your MinGW `bin` path to **System Environment Variables** → `Path`.

### 2. Install Visual Studio Code (Optional but recommended)

- Download: https://code.visualstudio.com/
- Install **C/C++ Extension Pack** from Microsoft for IntelliSense support.

### 3. Clone the Repository

```bash
git clone https://github.com/amolhate937/SmartFileOrganizer.git
cd SmartFileOrganizer
```

### 4. Compile the Program

Open terminal inside the project folder and run:

```bash
g++ main.cpp -o organizer -std=c++17
```

✅ This command compiles `main.cpp` and generates an executable named `organizer`.

---

### 5. Run the Program

To run the compiled program:

```bash
./organizer
```

💡 You’ll be asked to enter the folder path:

```bash
Enter the folder path to organize: C:\Users\Amol\Downloads
Moved: photo.jpg --> jpg/
Moved: doc1.pdf --> pdf/
Organizing complete!
```

---

## 🧾 Notes

- Files with unknown or no extensions are moved to `.unknown/`
- Run with admin permissions if needed
- Avoid organizing system folders like `C:\Windows`, `C:\Users`, etc.

---

## 🧑‍💻 Author

**Amol Mangesh Hate**

---

## 🌟 Star this repo if you find it useful!
