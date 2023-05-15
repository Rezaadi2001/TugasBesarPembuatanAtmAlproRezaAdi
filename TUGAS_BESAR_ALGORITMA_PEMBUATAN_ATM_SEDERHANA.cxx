#include <stdio.h>
#include<stdlib.h>
    //saya menambah kan library sdlib.h hanya untuk menambahkan menu exit/program berakhir pada baris 184
int main() {
    // Inisialisasi PIN awal
    int pin = 110204;
    // Inisialisasi saldo awal
    float balance = 9500000;
    // Inisialisasi variabel-variabel lain yang dibutuhkan
    int choice, login_attempt = 0;
    int transfer_account_number;
    float saldo_awal, saldo_akhir, jumlah_transfer;
    char nama_bank[50];
    int nomor_rekening, kode_bank_tujuan;
    float transfer_amount, top_up_dana, top_up_gopay,top_up_shoppe_pay,top_up_pln,top_up_ovo,withdrawal_amount;

    // Loop while untuk mengulang login hingga maksimal 3 kali percobaan
    while (login_attempt < 3) {
        // Meminta pengguna memasukkan PIN
        int input_pin;
        printf("Masukan PIN: ");
        scanf("%d", &input_pin);
        
        // Jika PIN benar, tampilkan menu opsi
        if (input_pin == pin) {
            printf("\nLogin Berhasil!\n");
        int language;
        printf("\nSelect language:\n");
        printf("1. English\n");
        printf("2. Bahasa Indonesia\n");
        printf("3. Español\n");
// tambahkan opsi bahasa yang lain sesuai kebutuhan
        scanf("%d", &language);
        switch (language) {
    case 1:
        printf("Welcome to our ATM\n");
        break;
    case 2:
        printf("Selamat datang di ATM kami\n");
        break;
    case 3:
        printf("Bienvenido a nuestro cajero automático\n");
        break;
    // tambahkan opsi bahasa yang lain sesuai kebutuhan
    default:
        printf("Bahasa Yang Di Pilih Tidak Valid\n");
        break;
}

            while (1) {
                printf("\nATM Menu\n");
                printf("1. Lihat Saldo\n");
                printf("2. Isi Saldo\n");
                printf("3. Penarikan\n");
                printf("4. Transfer\n");
                printf("5. Top Up\n");
                printf("6. Log Out\n");
                printf("7. exit\n");
                printf("Masukan Pilihan Anda: ");
                scanf("%d", &choice);
                
                // Switch case untuk setiap opsi pada menu
                switch (choice) {
                    case 1:
                        printf("Saldo Anda Saat Ini Adalah: %.2f\n", balance);
                        break;
                    case 2:
                        printf("Masukan Jumlah Uang: ");
                        float deposit_amount;
                        scanf("%f", &deposit_amount);
                        balance += deposit_amount;
                        printf("Isi Saldo Berhasil. Saldo Baru Anda Adalah: %.2f\n", balance);
                        break;
                    case 3:
                        printf("Masukan Jumlah Uang Yang Ingin Ditarik: ");
                        scanf("%f", &withdrawal_amount);
                        if (withdrawal_amount > balance) {
                            printf("Saldo Tidak Cukup.\n");
                        } else {
                            balance -= withdrawal_amount;
                            printf("Penarikan Berhasil. Jumlah Saldo Anda Saat Ini Adalah: %.2f\n", balance);
                        }
                        break;
                    case 4:
                        printf("Masukkan nama bank tujuan: ");
                         scanf("%s", nama_bank);
                         
                         printf("Masukkan nomor rekening tujuan: ");
                         scanf("%d", &nomor_rekening);
    
                         printf("Masukkan kode bank tujuan: ");
                         scanf("%d", &kode_bank_tujuan);
    
                         printf("Masukkan jumlah yang ingin Anda transfer: ");
                         scanf("%f", &jumlah_transfer);
                         
    if (jumlah_transfer > balance) {
        printf("Maaf, saldo Anda tidak menukupi untuk melakukan transfer sebesar %f", jumlah_transfer);
    } else {
        
        saldo_akhir = balance - jumlah_transfer;
        balance = saldo_akhir;
        printf("Transfer sebesar %f berhasil dilakukan ke rekening %8d di bank %s dengan kode bank tujuan %4d.\n", jumlah_transfer, nomor_rekening, nama_bank, kode_bank_tujuan);
        printf("Saldo Anda sekarang adalah %.2f", saldo_akhir );
    }
                        break;
                    case 5:
                        printf("Top up menu\n");
                        printf("1. Top up Dana\n");
                        printf("2. Top up Gopay\n");
                        printf("3. Top Up ShoppePay\n");
                        printf("4. Top Up PLN\n");
                        printf("5. Top Up OVO\n");
                        printf("Masukan Pilihan Anda: ");
                        int top_up_choice;
                        scanf("%d", &top_up_choice);
                        switch (top_up_choice) {
                            
                            case 1:
                                printf("Masukan Jumlah Yang Akan Di Isi Ulang: ");
                                scanf("%f", &top_up_dana);
                                if (top_up_dana > balance) {
                                printf("Maaf, saldo Anda tidak menukupi untuk melakukan Top up sebesar %f", top_up_dana);
                        } else {
        saldo_akhir = balance - top_up_dana;
                                printf("Top Up Dana Berhasil. Sisa Saldo Anda Saat Ini Adalah: %.2f\n", balance -=top_up_dana);
                                break;
                                
                            case 2:
                                printf("Masukan Jumlah Yang Akan Di Isi Ulang: ");
                                scanf("%f", &top_up_gopay);
                                if (top_up_gopay > balance) {
                                printf("Maaf, saldo Anda tidak menukupi untuk melakukan Top up sebesar %f", top_up_gopay);
                        } else {
        saldo_akhir = balance - top_up_gopay;
                                printf("Top Up Gopay Berhasil. Sisa Saldo Anda Saat Ini Adalah: %.2f", balance -= top_up_gopay);
                        }
                                break;
                            case 3:
                                printf("Masukan Jumlah Yang Akan Di Isi Ulang: ");
                                scanf("%f", &top_up_shoppe_pay);
                                if (top_up_shoppe_pay > balance) {
                                printf("Maaf, saldo Anda tidak menukupi untuk melakukan Top up sebesar %f", top_up_shoppe_pay);
                        } else {
        saldo_akhir = balance - top_up_shoppe_pay;
                                printf("Isi Ulang Berhasil, Sisa Saldo Anda Saat Ini Adalah: %.2f", balance -= top_up_shoppe_pay);
                                printf("Top Up ShoppePay Berhasil, Sisa Saldo Anda Saat Ini Adalah: %.2f\n", balance);
                        }
                                 break;
                            case 4:
                                printf("Masukan Jumlah Yang Akan Di Isi Ulang: ");
                                scanf("%f", &top_up_pln);
                                 if (top_up_pln > balance) {
                                printf("Maaf, saldo Anda tidak menukupi untuk melakukan Top up sebesar %f", top_up_pln);
                        } else {
        saldo_akhir = balance - top_up_pln;
                                printf("Top Up PLN Berhasil. Sisa Saldo Anda Saat Ini Adalah: %.2f", balance -= top_up_pln);
                        } 
                                 break;
                            case 5:
                                printf("Masukan Jumlah Yang Akan Di Isi Ulang: ");
                                scanf("%f", &top_up_ovo);
                                if (top_up_ovo > balance) {
                                printf("Maaf, saldo Anda tidak menukupi untuk melakukan Top up sebesar %f", top_up_ovo);
                        } else {
        saldo_akhir = balance - top_up_ovo;
                                printf("Top Up OVO Berhasil. Sisa Saldo Anda Saat Ini Adalah: %.2f", balance -= top_up_ovo);
                        }
                   }
                            break;
                            default:
                                printf("\nOpsi Tidak Valid.\n");
                                break;
                        }
                        break;
                    case 6:
                        // Keluar dari menu dan kembali ke menu login
                        printf("Logout Berhasil.\n");
                        login_attempt = 3;
                        break;
                        case 7:
                    // Keluar
                    printf("Program berakhir.\n");
                    exit(0);
                    default:
                        printf("Opsi Tidak Valid.\n");
                        break;
                }
            }
        } else {
            // Jika PIN salah, tampilkan pesan error dan tingkatkan jumlah percobaan
            printf("PIN tidak valid. Silakan coba lagi..\n");
            login_attempt++;
        }
    }
    // Jika sudah 3 kali percobaan login dan masih gagal, keluar dari program
    if (login_attempt == 3) {
        printf("Anda Salah Memasukan Pin Lebih dari 3 Kali, Kartu Anda Terblokir.\n");
    }
    return 0;
}