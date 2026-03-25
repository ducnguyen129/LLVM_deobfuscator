#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#include <llvm/Support/raw_ostream.h>

int main() {
    llvm::LLVMContext Context;
    llvm::Module M("test", Context);

    M.print(llvm::outs(), nullptr);
    return 0;
}
