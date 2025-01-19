# C
C Codes Here

To Run these Files:-

# C Codes Here

This repository contains C codes that you can run on different operating systems. Follow the steps below to run the files on your system.

---

## Steps to Run the C Files:

### General Steps:
1. **Clone the Repository**:
   ```bash
   git clone <repository-url>
   ```
   Replace `<repository-url>` with the URL of this Git repository.

2. **Navigate to the Repository Folder**:
   ```bash
   cd <repository-folder>
   ```
   Replace `<repository-folder>` with the name of the folder where the repository was cloned.

3. **Compile the C File**:
   Use a C compiler to compile your C files. Example using GCC:
   ```bash
   gcc -o output-file-name source-file-name.c
   ```
   Replace `output-file-name` with your desired name for the executable and `source-file-name.c` with the name of the C source file.

4. **Run the Compiled Program**:
   ```bash
   ./output-file-name
   ```

---

### Steps by Operating System:

#### **Windows**:
1. **Install GCC**:
   - Download and install MinGW from [MinGW Downloads](http://www.mingw.org/).
   - Add the MinGW `bin` directory (e.g., `C:\MinGW\bin`) to your system's PATH environment variable.

2. **Compile and Run**:
   Open Command Prompt or PowerShell and execute:
   ```cmd
   gcc -o output-file-name source-file-name.c
   output-file-name.exe
   ```

#### **Linux**:
1. **Install GCC (if not installed)**:
   ```bash
   sudo apt update
   sudo apt install build-essential
   ```

2. **Compile and Run**:
   ```bash
   gcc -o output-file-name source-file-name.c
   ./output-file-name
   ```

#### **macOS**:
1. **Install Xcode Command Line Tools**:
   Open Terminal and install:
   ```bash
   xcode-select --install
   ```

2. **Compile and Run**:
   ```bash
   gcc -o output-file-name source-file-name.c
   ./output-file-name
   ```

---

### Notes:
- For programs with multiple source files, compile them together:
  ```bash
  gcc -o output-file-name file1.c file2.c
  ```
- Ensure execution permissions are set (Linux/macOS). Use:
  ```bash
  chmod +x output-file-name
  ```

Feel free to reach out if you encounter any issues!

