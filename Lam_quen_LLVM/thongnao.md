# LLVM va co che

## Cac technique trong IR

### 1. SSA(static single assignment)

* Moi bien chi duoc gan 1 lan duy nhat khong co lan thu hai tu do giup toi uu hoa chuong trinh

example:
* Non-SSA:

```C++
int a = 1
int a = a + 2
int a = a * 3
```

* SSA: 

```C++
int a1 = 1
int a2 = a1 + 2
int a3 = a2 * 3
```

* Ket luan:  So voi Non-SSA thi SSA code co hieu qua optimize tot hon do compiler de dang track duoc gia tri cua cac bien

* DU chain : la moi lien ket **Def** (dinh nghia cua bien) va **Use** (su dung bien cho operations)
* Neu ket hop voi SSA thi se tao ra anh xa bijection(moi mot def duoc use 1 lan)
* Doi voi IF/ELSE hoac loop thi SSA co co che su dung mot ham **phi** vi doi voi SSA, trong IF/ELSE se phai gan bien nhieu lan vay nen ham phi nay dong vai tro la mot ham **anh xa**  giup chon gia tri phu hop giua tren control flow
 
### 2. phi function 

* phi function la mot phan khong the thieu trong IR, no xuat hien nhieu trong cac vong lap va cau truc re nhanh(IF/ELSE)
* phi function thuc chat la mot ham anh xa quyet dinh gia tri sau cung cua dieu kien, vong lap thong qua branch(nhanh)

VD:

```C
int a = 2;
int b = 1;
int c;
if(a == b){
 c = a + b;
}
else{
 c = a - b;
}
```


