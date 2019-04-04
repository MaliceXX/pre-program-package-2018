// Summary of Python basics to c++ transfers
- statements (if, for...) có dấu : ở cuối
- indentation thay cho braces -> cleaner code, easier mistakes
- auto newline mỗi lần gọi print()
- Dấu ; không cần thiết. Có thể dùng để viết nhiều dòng code liên tiếp
- auto-declaration của các biến (không cần khai báo)
- toán tử đặc biệt: (C++ -> Python)
  ^ => **
  // => Chia lấy nguyên (làm tròn xuống)
  - Toán tử bit phải viết tay (& -> and; || -> or; ! -> not)
kiểm tra bằng nhau : is / is not
else if viết thành elif
In theo range: print arr[3:-2] -> từ ptu thứ 3 đến trước thứ 2 từ cuối lên. Cá biệt nếu muốn in đến hết thì chỉ ghi số đầu tiên...
String: Giống trong C. * để nhân bản string và + đế ghép các string vào nhau.
Một số operator của Python với string:
  + len(string) // cơ bản
  + isdecimal,isalpha... khá giống thư viện <cctype> của C
  + join, split,... khá phức tạp nhưng có nhiều ứng dụng
Array: có comprehension for loop giúp tạo mảng ngay trong lúc in
Dictionary: Giống map- gồm các cặp key-value pair. Tuy nhiên nếu gọi key của 1 ptu không tồn tại sẽ bị lỗi KeyError

Function: def Nicefunction(Var1, Var2)
  ... // code here
  return...
 Các tham số truyền vào function qua reference/ con trỏ (C++ có quyền chọn dùng con trỏ hoặc nhân đôi biến biến trước khi truyền vào 
 giúp biến ban đầu không bị ảnh hưởng)
  Biến trong hàm là Local, nên hoàn toàn có thể khác biến cùng tên nhưng global/ ở hàm khác. 
  
  // Import modules
  -Rất tiện lợi, có thể import cả một source file (VD: import anotherFile.py)
  hoặc import những function/class/biến cần thiết (VD: from anotherFile.py import randomClass)
 
 I/O : input/print
 File I/O:
  fin = open('input.txt', 'r')
  fou = open('output.txt', 'w')
  input = fin.read() 
  output = 'Write something!'
  fou.write(output)
  fin.close()
  fou.close()
