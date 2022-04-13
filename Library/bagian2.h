using namespace std;

void Tabungan::cetak(){
	int jumlahdapat;
	cout << "==================== AKUMULASI TABUNGAN ========================\n ";
	cout << "              dalam kurun waktu 10 hari\n";
	cout << "================================================================\n";
	cout << "\n";
	cout << "| Hari ke |   Tabungan   |   Pengeluaran  |   Total Tabungan  |\n";
	cout << "---------------------------------------------------------------\n";
	akumulasi(1, jumlahdapat);
};