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

**Context Free Grammar** untuk mengecek kevalidan struktur kalimat:
* Q → sS
* S → pP
* P → oO | kK | λ
* O → kK | λ
* K → λ


**Pushdown Automata** untuk mengecek kevalidan struktur kalimat
![](https://raw.githubusercontent.com/ehardi19/indonesian-sentence-parser/master/images/PDA.png)

## Jalankan Program
- Clone repository ini. `git clone https://github.com/ehardi19/indonesian-sentence-parser.git`
- Compile dengan C++11. `g++ -std=c++11 main.cpp -o main`.
- Jalankan program `./main` dan input kalimat untuk dicek.

## Catatan
Daftar kata yang diterima untuk setiap tipe kata:
* S = `adi`, `dia`, `kakak`, `mereka`, `saya`
* P = `baca`, `lihat`, `main`, `nulis`, `pakai`
* O = `apel`, `bubur`, `komik`, `rubik`, `tugas`
* K = `bersama`, `kemarin`, `lusa`, `nanti`, `sekarang`

## Lisensi
Licensed under The MIT License.
