#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char* nama_paket[100];
char* fasilitas[100];
char* berangkat[100];
int n;
int nmr;
int kembalian, byr;
int ketik;
int pilihan;
struct Daftar_Pembayaran_Travel
{
    char nama_peserta[100], fasilitas;
    int jumlah_biaya;
};
int main()
{   


    struct Daftar_Pembayaran_Travel peserta[10];
    char kode_pesawat, kode_keberangkatan, cari_lagi[10];
    int kode_paket, tarif_paket,tarif_tambahan, pajak, jumlah_tarif;
    
    
    system("clear");
    printf("++=======================================================++\n");
    printf("||                 Terbang Go (Travel)                   ||\n");
    printf("||-------------------------------------------------------||\n");
    printf("||                                                       ||\n");
    printf("||                        Oleh :                         ||\n");
    printf("||  1. Kadek Bisma Dharmasena               (2208561102) ||\n");
    printf("||  2. I Gusti Ngurah Bagus Lanang Purbhawa (2208561114) ||\n");
    printf("||                                                       ||\n");
    printf("||-------------------------------------------------------||\n");
    printf("||              PROGRAM STUDI INFORMATIKA                ||\n");
    printf("||     FAKULTAS MATEMATIKA DAN ILMU PENGETAHUAN ALAM     ||\n"); 
    printf("||                  UNIVERSITAS UDAYANA                  ||\n");  
    printf("||                         2022                          ||\n");  
    printf("++=======================================================++\n");  
    // pause();

    
    
    
//Program Pesawat
    lagi:
    printf("\n              Terbang Go          ");
    printf("\n ________________________________________________");
    printf("\n | Kode\t   Rute Perjalanan\t  Tarif\t\t|");
    printf("\n | Paket\t\t               \t\t|");
    printf("\n ________________________________________________");
    printf("\n | 01\t   Jakarta - Bali\t  1.000.000\t|");
    printf("\n | 02\t   Jakarta - Surabaya\t  950.000\t|");
    printf("\n | 03\t   Jakarta - Lombok\t  1.300.000\t|");
    printf("\n ________________________________________________");
//Kelas
    printf("\n\n\n Jenis Penerbangan :");
    printf("\n ___________________________________________");
    printf("\n | Kode\t      Kelas\t        Harga      |");
    printf("\n | Tambahan\t                Tambahan   |");
    printf("\n ___________________________________________");
    printf("\n |  \t      Economy\t\t           |");
    printf("\n | A\t      Lion Air\t\t-          |");
    printf("\n | B\t      Air Asia\t        100.000    |");
    printf("\n | C\t      Garuda Indonesia\t500.000    |");
    printf("\n ___________________________________________");
    printf("\n |  \t      Business\t\t           |");
    printf("\n | D\t      Batik Air\t        3.400.000  |");
    printf("\n | E\t      Garuda Indonesia\t8.500.000  |");
    printf("\n ___________________________________________");
//Jumlah Tiket   
    printf("\n\n\n Tanggal Keberangkatan :");
    printf("\n ________________________________________________________");
    printf("\n | Kode\t\t   Tanggal\t         Waktu          |");
    printf("\n | Tanggal\t   Keberangkatan     \t Keberangkatan  |");
    printf("\n ________________________________________________________");
    printf("\n | A\t           26 Januari 2023      06:30 WIB\t|");
    printf("\n | B\t           27 Januari 2023      12:45 WIB\t|");
    printf("\n | C\t           28 Januari 2023      08:30 WIB\t|");
    printf("\n | D\t           29 Januari 2023      16:00 WIB\t|");
    printf("\n | E\t           30 Januari 2023      14:15 WIB\t|");
    printf("\n | F\t           31 Januari 2023      18:00 WIB\t|");
    printf("\n ________________________________________________________");


    printf("\n\n\n ---------------------------------------------------------------------------------------------------------------------------------");
    printf("\n                                                   INPUT PEMBAYARAN TRAVEL                               ");
    printf("\n ---------------------------------------------------------------------------------------------------------------------------------");
    printf("\n Masukkan jumlah pesanan: ");
    scanf("%d", &n);

        for (int i=1; i<=n; i++)
        {
            //Input Nama pemesan
            printf("\n %d.", i);
            printf("\n Nama Pemesan                 : ");
            scanf("%s",peserta[i].nama_peserta);
            fflush(stdin);

            //Rute Perjalanan
            ulang :
            printf(" Kode Paket                   : ");
            scanf("%d", &kode_paket);

            if (kode_paket==01||kode_paket==1)
            {
                nama_paket[i]="Jkt - Bli\t";
                tarif_paket=1000000;
            }
            else if (kode_paket==02||kode_paket==2)
            {
                nama_paket[i]="Jkt - Sby\t";
                tarif_paket=950000;
            }
            else if (kode_paket==03||kode_paket==3)
            {
                nama_paket[i]="Jkt - Lbk\t";
                tarif_paket=1300000;
            }
            else 
            {
                printf(" Paket Tidak Tersedia\a\a\n"); 
                goto ulang;
            }
            printf(" Rute Perjalanan              : %s\n", nama_paket[i]);


            //Jenis Penerbangan
            ulangan :
            printf(" Kode Penerbangan             : ");
            scanf("%s", &kode_pesawat);
            if (kode_pesawat=='a'||kode_pesawat=='A')
            {
                fasilitas[i]="Economy-Lion Air";
                tarif_tambahan=0;
            }
            else if (kode_pesawat=='b'||kode_pesawat=='B')
            {
                fasilitas[i]="Economy-Air Asia";
                tarif_tambahan=100000 ;
            }
            else if (kode_pesawat=='c'||kode_pesawat=='C')
            {
                fasilitas[i]="Economy-Garuda  ";
                tarif_tambahan=500000 ;
            }
            else if (kode_pesawat=='d'||kode_pesawat=='D')
            {
                fasilitas[i]="Business-Batik  ";
                tarif_tambahan=3400000 ;
            }
            else if (kode_pesawat=='e'||kode_pesawat=='E')
            {
                fasilitas[i]="Business-Garuda";
                tarif_tambahan=8500000;
            }
            else 
            {
                printf(" Kode ini Tidak Tersedia\a\a\n"); 
                goto ulangan;
            }
            printf(" Jenis Penerbangan            : %s", fasilitas[i]);

            //Waktu Keberangkatan
            ulangi:
            printf("\n Kode Keberangkatan           : ");
            scanf("%s", &kode_keberangkatan);
            if (kode_keberangkatan=='a'||kode_keberangkatan=='A')
            {
                berangkat[i]="26 Januari 2023 06:30 WIB\t";
            }
            else if (kode_keberangkatan=='b'||kode_keberangkatan=='B')
            {
                berangkat[i]="27 Januari 2023 12:45 WIB\t";
            }
            else if (kode_keberangkatan=='c'||kode_keberangkatan=='C')
            {
                berangkat[i]="28 Januari 2023 =8:30 WIB\t";
            }
            else if (kode_keberangkatan=='d'||kode_keberangkatan=='D')
            {
                berangkat[i]="29 Januari 2023 16:00 WIB\t";
            }
            else if (kode_keberangkatan=='e'||kode_keberangkatan=='E')
            {
                berangkat[i]="30 Januari 2023 14:15 WIB\t";
            }
            else if (kode_keberangkatan=='f'||kode_keberangkatan=='F')
            {
                berangkat[i]="31 Januari 2023 18:00 WIB\t";
            }
            else
            {
                printf("Kode ini tidak Tersedia");
                goto ulangi;
            }
            printf(" Waktu keberangkatan          : %s", berangkat[i]);
            jumlah_tarif=tarif_paket+tarif_tambahan;
            printf("\n Jumlah Tarif                 : Rp %d", jumlah_tarif);
            pajak=0.1*jumlah_tarif;
            printf("\n Pajak 10 %%                   : Rp %d", pajak);
            peserta[i].jumlah_biaya=jumlah_tarif+pajak;
            printf("\n Total Biaya                  : Rp %d", peserta[i].jumlah_biaya);
            printf("\n\n ---------------------------------------------------------------------------------------------------------------------------------\n");

        }
    //Tabel Output
    printf("\n ---------------------------------------------------------------------------------------------------------------------------------");
    printf("\n\n\n\n                                          DAFTAR PEMBAYARAN TRAVEL                         ");
    printf("\n ---------------------------------------------------------------------------------------------------------------------------------");
    printf("\n | No  Nama\t\t Nama Paket\t\t Jenis\t\t\t Tanggal dan Waktu\t\t\t Jumlah\t\t |");
    printf("\n |     Pemesan\t\t         \t\t Penerbangan\t\t\t\t \t\t\t Tarif\t\t |");
    printf("\n ---------------------------------------------------------------------------------------------------------------------------------");


    for (int i=1; i<=n; i++)
    {
        printf("\n | %d   %s\t\t %s\t %s\t %s\t %d\t |"
            ,i, peserta[i].nama_peserta, nama_paket[i],
            fasilitas[i], berangkat[i], peserta[i].jumlah_biaya);
    }
    printf("\n ---------------------------------------------------------------------------------------------------------------------------------");
    printf("\n");
    //Untuk jumlah bayar
    int jumlah_bayar = 0;
    int jumlah_b;
    for (int i=1; i<=n; i++)
    {
        jumlah_b = peserta[i].jumlah_biaya + jumlah_bayar;
        jumlah_bayar = jumlah_b;
    }
    //Untuk membayar
    printf("\n Total Biaya      : %d", jumlah_b);
    bayar:
    printf("\n Masukkan bayaran : ");
    scanf("%d", &byr);
    
    kembalian = byr - jumlah_b;
    
    if(kembalian < 0)
    {
        printf(" Uang Anda Kurang");
        goto bayar;
    }
    else
    {
        printf(" Kembalian anda   : Rp %d", kembalian);
    }
    
    printf("\n\n Transaksi sukses");
    
    printf(" Input (1) Jika Ingin Download tiket ");
    printf("\n Input (2) Jika Ingin Keluar ");
    printf("\n Masukkan pilihan: ");
    scanf("%d", &pilihan);
    
    if(pilihan==1)
    {
        if(nmr<=n || nmr>0)
        {
        downloadlagi:
        printf(" Download tiket nomor: ");
        scanf("%d", &nmr);
        
        printf(" -----------------------------------------------------------------\n");
        printf(" | NO. %d                                                         |\n", nmr);
        printf(" | TERBANG GO  (Boarding Pass)                                   |\n");
        printf(" |                                                               |\n");
        printf(" -----------------------------------------------------------------\n");
        printf(" | Nama  : %s  \t\t\t\t\t\t |\n",peserta[nmr].nama_peserta);
        printf(" | Rute  : %s\t\t\t\t\t |\n", nama_paket[nmr]);
        printf(" | Kelas : %s\t\t\t\t\t |\n",fasilitas[nmr]);
        printf(" | Waktu : %s\t\t\t |\n",berangkat[nmr]);
        printf(" -----------------------------------------------------------------\n");
        }
        else
        {
            printf(" Nomor tiket tidak tersedia\n");
            goto downloadlagi;
        }
        
        printf(" Ketik (1) jika ingin download lagi, (2) jika ingin keluar\n");
        printf(" Silahkan ketik : ");
        scanf("%d", &ketik);
        
        if (ketik==1)
        {
            goto downloadlagi;
        }
        else if(ketik==2)
        {
            printf("\n\n Terima kasih telah menggunakan jasa kami! \n");
            printf(" Tekan Enter Untuk keluar");
        }
        else
        {
            return 0;
        }
    }
    else
    { 
       printf("\n Ketik Enter Jika ingin Keluar \n");
       
    }
    
return 0;
}