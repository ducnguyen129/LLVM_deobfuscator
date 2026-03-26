# An deobfuscator pass for deobfuscate researching

## Introduction

* This is my first big project about reverse engineering for my researching project
* Maybe too soon for me to do this because i'm just study reverse engineering for 6 month :(( but i will try it

## Build

1. Install LLVM

```bash
wget https://apt.llvm.org/llvm.sh
chmod +x llvm.sh
sudo ./llvm.sh 20
clang-20 --version
opt-20 --version
echo 'export PATH=/usr/lib/llvm-20/bin:$PATH' >> ~/.bashrc
source ~/.bashrc
sudo apt install cmake ninja-build
```

2. Build

```bash
git clone https://github.com/ducnguyen129/LLVM_deobfuscator.git
cd LLVM_deobfuscator
```

```bash
mkdir build
cd build
cmake -DLLVM_DIR=/usr/lib/llvm-20/lib/cmake/llvm ..
make
```
Tree
```
LLVM_obfuscator/
 ├── main.cpp
 ├── CMakeLists.txt
 └── build/
      ├── main   ← file chạy
      ├── CMakeFiles/
      └── ...
```
3. Commit contribute

```bash
git add .
git commit -m "update new feature"
git pull --rebase
git push
```
