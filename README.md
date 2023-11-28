# Test

### 1. Lập trình cơ bản
- --
### 2. Kiến trúc máy tính và mạng máy tính
- --
### 3. Lập trình OOP
- Tính đóng gói (Encapsulation)
- Tính kế thừa (Inheritance)
- Tính đa hình (Polymorphism)
- Tính trừu tượng (Abstraction)
- --
### 4. Cấu trúc dữ liệu và giải thuật
- --
- Các thể loại list (array, linked...)
- Dictionary/map, set
- Hàng đợi queue, ngăn xếp stack
- Tree
- --
- Sort, find
- Two pointer
- Dynamic program
- DFS, BFS
- Divide and conquer
- Greedy
- --
### 5. Database
- SQL và NoSql
- --
### 6. Khác
- Cache
- Message queue
- Design pattern, SOLID, DRY
- Thiết kế hệ thống
- Định lý CAP
- Encode / decode
- Thuật toán xấp xỉ gần đúng
- Bảo mật
- --
### 7. Books
- https://github.com/jwasham/coding-interview-university
- https://github.com/donnemartin/system-design-primer
- https://github.com/mtdvio/every-programmer-should-know
- https://github.com/charlax/professional-programming
- https://github.com/anushka23g/Complete-Placement-Preparation
- --
- --
- --

## Use GIT
### Thêm tất cả các thay đổi
```
git add .
```
### Tạo commit với các thay đổi đã thêm
```
git commit -m "update"
```
### Đẩy (push) các commit từ máy local lên remote repository
- <remote_name>: Tên của remote repository mà bạn muốn đẩy các commit lên. Thông thường, remote repository mặc định sẽ có tên là "origin".
- <branch_name>: Tên của nhánh (branch) mà bạn muốn đẩy lên remote repository.
```
git push <remote_name> <branch_name>
```
### Sao chép (clone) một repository từ Git về máy tính
```
git clone <đường_dẫn_repo>
```
### Sao chép một nhánh (branch) đã tồn tại sang một nhánh mới
```
git checkout -b <tên_nhánh_mới> <tên_nhánh_cũ>
```
### Chuyển đổi nhánh
```
git checkout <tên_nhánh>
```
### Hợp nhất (merge) hai nhánh (branches)
```
git checkout <nhánh_nhận_thay_đổi>
```
```
git merge <nhánh_được_hợp_nhất>
```
```
git push origin <nhánh_nhận_thay_đổi>
```
### Cập nhật local repository của bạn với các thay đổi mới nhất từ remote repository
```
git pull
```
```
git pull <remote_name> <branch_name>
```
### Cập nhật các nhánh mới mà không thay đổi nhánh hiện tại
```
git fetch
```
