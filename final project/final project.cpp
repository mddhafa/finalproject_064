#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x,y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}

	virtual void input() {};
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return ; }
	void setX(int a) {
		this->x = a;
	}
	int getX(){
		return x;

	}
};

class Lingkaran:public bidangDatar{
public:

	int getX() {
		return 0;
	}
	float jarijari(){
		cout << " jarijari Lingkaran" << endl;
	}

	float Luas() {
		cout << "Luas PersegiPanjang" << endl;
	}

	float keliling() {
		cout << "keliling PersegiPanjang" << endl;
	}
};


class Persegipanjang:public bidangDatar {
public:
	int getY() {
		return 0;
	}
	int Luas() {
		cout << "Luas PersegiPanjang" << endl;
	}

	int keliling() {
		cout << "keliling PersegiPanjang" << endl;
	}

	int panjang() {
		cout << "panjang PersegiPanjang" << endl;
	}
};


int main() {
	bidangDatar* bentuk;
	Lingkaran a;
	Persegipanjang b;

	bentuk = &a;
	bentuk->Luas();
	bentuk = &b;
	bentuk->Luas();


	bentuk = &a;
	bentuk->Keliling();
	bentuk = &b;
	bentuk->Keliling();

	return 0;
