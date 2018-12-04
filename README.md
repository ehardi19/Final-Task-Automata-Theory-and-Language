# indonesian-sentence-parser
Sebuah parser sederhana sebagai tugas besar mata kuliah Teori Bahasa dan Automata di Telkom University

## Deskripsi
Teori Bahasa dan Automata

Parser Sederhana untuk Memerika Kevalidan Struktur Kalimat Berbahasa Indonesia

Pada tugas ini struktur kalimat berita aktif dengan struktur:
* S-P-O-K
* S-P-K
* S-P-O
* S-P

**Finite Automata** untuk mengecek tipe kata
![](https://raw.githubusercontent.com/ehardi19/indonesian-sentence-parser/master/images/FA.png)

**Finite Automata** untuk mengecek apakah kata ada di kamus
![](https://raw.githubusercontent.com/ehardi19/indonesian-sentence-parser/master/images/FA%20sample.png)

**Context Free Grammar** untuk mengecek kevalidan struktur kalimat:
* qo → sq1
* q1 → pq2
* q2 → oq3 | kq4 | λ
* q3 → kq4 | λ
* q4 → λ

**Pushdown Automata** untuk mengecek kevalidan struktur kalimat
![](https://raw.githubusercontent.com/ehardi19/indonesian-sentence-parser/master/images/PDA.png)

## Jalankan Program
- Clone repository ini. `git clone https://github.com/ehardi19/indonesian-sentence-parser.git`
- Install library yang digunakan pada repository ini. `sudo apt-get install libboost-all-dev`
- Compile dengan C++11. `g++ -std=c++11 main.cpp -o main`.
- Jalankan program `./main` dan input kalimat untuk dicek.

## Catatan
Daftar kata yang diterima untuk setiap tipe kata:
* S = `saya`, `adi`, `mereka`, `dia`, `kakak`
* P = `baca`, `lihat`, `main`, `nulis`, `pakai`
* O = `bubur`, `tugas`, `apel`, `rubik`, `komik`
* K = `sekarang`, `kemarin`, `nanti`, `lusa`, `bersama`

## Lisensi
Licensed under The MIT License.
