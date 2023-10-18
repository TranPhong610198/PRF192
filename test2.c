#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int maMH;
  float diemGK;
  float diemCK;
  float diemTB;
} DiemMonHoc;

void nhapDiem(DiemMonHoc *diem) {
  printf("Nhap ma mon hoc: ");
  scanf("%d", &diem->maMH);
  printf("Nhap diem GK: ");
  scanf("%f", &diem->diemGK);
  printf("Nhap diem CK: ");
  scanf("%f", &diem->diemCK);
  diem->diemTB = (diem->diemGK + diem->diemCK) / 2;
}

int main() {
  int n;
  printf("Nhap so luong diem: ");
  scanf("%d", &n);

  // Cap phat dong bo nho cho mang dsDiem
  DiemMonHoc *dsDiem = (DiemMonHoc *)malloc(n * sizeof(DiemMonHoc));
  if (dsDiem == NULL) {
    printf("Khong du bo nho de cap phat!\n");
    return 1;
  }

  // Nhap thong tin cho cac diem
  for (int i = 0; i < n; i++) {
    nhapDiem(&dsDiem[i]);
  }

  // In thong tin cac diem
  for (int i = 0; i < n; i++) {
    printf("Thong tin diem thu %d:\n", i + 1);
    printf("Ma mon hoc: %d\n", dsDiem[i].maMH);
    printf("Diem GK: %.2f\n", dsDiem[i].diemGK);
    printf("Diem CK: %.2f\n", dsDiem[i].diemCK);
    printf("Diem TB: %.2f\n", dsDiem[i].diemTB);
  }

  // Giai phong bo nho
  free(dsDiem);

  return 0;
}

