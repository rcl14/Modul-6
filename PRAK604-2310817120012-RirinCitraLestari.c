def cek_pesan(kode, pesan):
    pesan_hasil = ""
    bintang_count = 0
    pagar_count = 0

    if len(kode) != len(pesan):
        return "Panjang kalimat berbeda, pesan palsu"

    for i in range(len(kode)):
        if kode[i] == pesan[i]:
            pesan_hasil += "*"
            bintang_count += 1
        else:
            pesan_hasil += "#"
            pagar_count += 1

    status_pesan = "Pesan Asli" if bintang_count >= pagar_count else "Pesan Palsu"

    return pesan_hasil, bintang_count, pagar_count, status_pesan

# Input
kode = input("Masukkan kode Shikamaru: ").strip()
pesan_diterima = input("Masukkan pesan yang diterima: ").strip()

# Proses dan Output
hasil = cek_pesan(kode, pesan_diterima)

if type(hasil) == str:
    print(hasil)
else:
    pesan_hasil, bintang, pagar, status = hasil
    print(pesan_hasil)
    print(f"* = {bintang}")
    print(f"# = {pagar}")
    print(status)