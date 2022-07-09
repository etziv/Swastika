/*/////////////////////////////////////////
// Nama          : Hanif Abdillah        //
// Kelas/NIM     : IK-1B/3.34.20.1.11    //
// No.Absen      : 11                    //
// Politeknik Negeri Semarang 2020/2021  //
/////////////////////////////////////////*/

#include <stdio.h>
#include <conio.h>

int main()
{
    int x,y,z,k,o;
    printf("\t=================================\n");
    printf("\t=\t-Program Swastika-\t=\n");
    printf("\t=================================\n");
    while(o=1){
    printf("\nMasukan Angka Ganjil = ");
    scanf("%d", &z);
    if(z % 2 == 0){
        printf("\n\t-Error !! / Anda Memasukan Angka Genap, Masukan Ulang Angka Ganjil !!-\n");
    }
    else if (z % 2 == 1){
        printf("\n");
        k=(z/2)+1;
        for (x=1;x<=z;x++){
            for (y=1;y<=z;y++){
        if ((x==k) || (y==k) || ((x==1) && (y<=k)) || ((y==1) && (x>=k)) || ((y==z) && (x<=k))||(x==z && y>=k)){
            printf("*");
        }
        else{
            printf(" ");
        }
        }
        printf("\n");
        }
        break;
    }
    }
    getch();
}
