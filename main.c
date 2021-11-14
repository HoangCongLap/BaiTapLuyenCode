/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Admin
 *
 * Created on November 22, 2020, 2:58 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

/*
 * 
 */
//BAi 10))

//int tinhtong(int x, int y) {
//    int s = 0;
//    if ( x > y ) {
//        s = 2 * x * 2 * y + 1 - (abs(x - 1));
//        return -1;
//    }
//    if ( x <= y ) {
//        s = 5 * x - 3 * y * 3 * x;
//        return 1;
//    }
//}
//
//int main() {
//    int x = 1, y = 2, s, l = 1, KQ;
//    while ( l < 10 ) {
//        printf("nhap x va y:");
//        scanf("%d%d", &x, &y);
//        KQ = tinhtong(x, y);
//        if ( KQ == 1 ) {
//            printf("%d\n", s);
//        }
//        else {
//
//            printf("%d\n", s);
//        }
//        printf("nhan phim l de tiep tuc:");
//        scanf("%d", &l);
//        printf("==============================\n");
//        fflush(stdin);
//    }
//    return 0;
//}

//int isSoNguyenTo(int n) {
//    int dem = 0;
//    if ( n < 2 ) {
//        return 0;
//    }
//    else {
//        for ( int i = 2; i <= sqrt(n); i++ ) {
//            if ( n % i == 0 ) {
//                dem++;
//
//            }
//        }
//        if ( dem == 0 ) {
//            return 1;
//        }
//        else {
//            return 0;
//        }
//    }
//}
//
//int dem(int arr[], int n) {
//    int count = 0;
//    for ( int i = 0; i < n; i++ ) {
//        if ( isSoNguyenTo(arr[i]) == 1 ) {
//            count++;
//        }
//    }
//    return count;
//}
//
//int main() {
//    //BAI 12)))
//    int n, c;
//    int arr[10];
//    printf(" nhap so luong phan tu n:");
//    scanf("%d", &n);
//    int array[n];
//    for ( int i = 0; i < n; ++i ) {
//        printf("\nnhap so nguyen n [%d]:", i);
//        scanf("%d", &array[i]);
//    }
//    for ( int a = 0; a < n; a++ ) {
//        c = isSoNguyenTo(array[a]);
//        if ( c == 1 ) {
//            printf("so do: %d\n so thu tu: %d\n", array[a], a);
//        }
//    }
//    printf("SNT:%d\n", dem(arr, n));
//    return 0;
//}

void bai11() {
    int n;
    printf("\nNhap so luong phan tu n = ");
    scanf("%d", &n);
    int array[n];
    for ( int i = 0; i < n; ++i ) {
        printf("\n Nhap a [%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("\nMang vua nhap la:\n");
    for ( int i = 0; i < n; i++ ) {
        printf("%5d \n\n ", array[i]);
    }
}

int main() {

    bai11();
    return 0;
}
//00
//BAI 13)

//int main() {
//    int n, i;
//    printf("Nhap so luong phan tu n<51:");
//    scanf("%d", &n);
//    if ( n > 50 ) {
//        printf("sai yeu cau????");
//        return 0;
//    }
//    int array[n];
//    for ( i = 0; i < n; ++i ) {
//        printf("\nNhap so nguyen a [%d]:", i);
//        scanf("%d", &array[i]);
//    }
//    printf("\nMang vua nhap la:\n");
//    for ( i = 0; i < n; i++ ) {
//        printf(" %5d \n", array[i]);
//    }
//    int max = array[0];
//    int index=0;
//    for ( i = 1; i < n; i++ ) {
//        if ( max < array[i] ) {
//            max = array[i];
//            index=i;
//        }
//    }
//    printf("so lon nhat trong day:%d\n vi tri:%d\n ", max, index); 
//    //    //sap xep
//    int sx;
//    for ( int a = 0; a < n - 1; a++ ) {
//        for ( int b = a + 1; b < n; b++ ) {
//            if ( array[a] > array[b] ) {
//                sx = array[a];
//                array[a] = array[b];
//                array[b] = sx;
//            }
//        }
//    }
//    printf("\nMang da sap xep:\n");
//    for ( int c = 0; c < n; c++ ) {
//        printf("%5d\n", array[c]);
//    }
//TinhTong
//    int s = 0;
//    for ( int i = 0; i < n; i++ ) {
//        s = s + array[i];
//    }
//    printf("\nTong cua mang la:%d\n", s);
//Trung bình công
//    float tb = 0;
//    for ( int t = 0; t < n; t++ ) {
//        tb = s / n;
//    }
//    printf("\n Trung binh cong cua mang la:%.1f\n", tb);
//    return 0;
//}

//BAI 14))
//const int array2SIZE = 100;
//
//int main() {
//    int n;
//    n = 3;
//    //    printf("Nhap mot day n so nguyen 0<n<30:");
//    //    scanf("%d", &n);
//    int array[3] = {0, 1, 3};
//    //    for ( int i = 0; i < n; ++i ) {
//    //        printf("\nNhap so nguyen [%d]:", i);
//    //        scanf("%d", & array[i]);
//    //    }
//    printf("Mang vua nhap:\n");
//    for ( int i = 0; i < n; i++ ) {
//        printf("%5d\n", array[i]);
//    }
//    // SỐ CHẴN))
//    int index = 0;
//    for ( int i = 0; i < n; i++ ) {
//        if ( array[i] % 2 == 0 )
//            printf("So chan:%d\n -Vi tri: %d\n", array[i], i);
//    }
//    int sx;
//    for ( int a = 0; a < n - 1; a++ ) {
//        for ( int b = a + 1; b < n; b++ ) {
//            if ( array[a] < array[b] ) {
//                sx = array[a];
//                array[a] = array[b];
//                array[b] = sx;
//            }
//        }
//    }
//    printf("Sap xep mang giam dan:%d\n", sx);
//    for ( int i = 0; i < n; i++ ) {
//        printf("%5d", array[i]);
//    }
//    int a;
//    int i;
//    printf("\n\nNhap a:");
//    scanf("%d", &a);
//    int array2[array2SIZE];
//    //    int index=0;
//    array2[0] = array[0];
//    for ( int i = 0; i <= n; i++ ) {
//        if ( i >= n ) {
//            array2[n] = array[i-1];
//        }
//        else if ( a < array[i] ) {
//            array2[i] = array[i];
//        }
//        else if ( array[i] < a && array[i - 1 ] > a ) {
//            array2[i] = a;
//        }
//        else if ( array[i] < a ) {
//            array2[i] = array[i - 1];
//        }
//    }
//    printf("\nsap xep:\n");
//    for ( int i = 0; i <= n; i++ ) {
//        printf("%5d\n", array2[i]);
//    }
//    return 0;
//}