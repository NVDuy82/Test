# Test

- 1 Lập trình cơ bản
- 2 Cấu trúc dữ liệu và giải thuật
- 3 Lập trình hướng đối tượng
- 4 Cơ sở dữ liệu 

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
