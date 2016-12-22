#include <iostream>
#include <conio.h>
using namespace std;

class Transport {
public:
	virtual void out() = 0;
	virtual void get() = 0;

	double weight;
	int seats;

	void basicInfo() {
		cout << " - weight: " << weight << endl;
		cout << " - seats: " << seats << endl;
		cout << endl;
	}
};

class Cars : public Transport {
public:
	virtual void out() = 0;
};
class Electric : public Transport {
public:
	virtual void out() = 0;
	double price;
	int standPlaces;

	void get() {
		cout << "Enter the weight of transport : ";
		cin >> weight;

		cout << "Enter seat places: ";
		cin >> seats;

		cout << "Enter price: ";
		cin >> price;

		cout << "Enter stand places: ";
		cin >> standPlaces;
	}
};
class LightCars : public Transport {
public:
	virtual void out() = 0;
};
class Flying : public Transport {
public:
	virtual void out() = 0;
	double lenth;

	void get() {
		cout << "Enter the weight of transport: ";
		cin >> weight;

		cout << "Enter seat places: ";
		cin >> seats;

		cout << "Enter the lenth: ";
		cin >> lenth;
	}
};


class Busses :public Transport {
public:
	virtual void out() = 0;
};
class Lamborgini : public LightCars {
public:
	void get() {
		cout << "Enter the weight of transport: ";
		cin >> weight;

		cout << "Enter seat places: ";
		cin >> seats;
	}
	void out() {
		cout << '\0';
	}
};
class Bogdan : public Busses {
public:
	void get() {
		cout << "Enter the weight of transport: ";
		cin >> weight;

		cout << "Enter seat places: ";
		cin >> seats;
	}
	void out() {
		cout << '\0';
	}
};
class Trolleybus : public Electric {
public:
	void out() {
		cout << " - price: " << price << endl;
		cout << " - standPlaces: " << standPlaces << endl;
	}
};
class Tram : public Electric {
public:
	void out() {
		cout << " - price: " << price << endl;
		cout << " - stand places: " << standPlaces << endl;
	}
};
class An124 : public Flying {
public:
	void out() {
		cout << " - weight of transport: " << weight << endl;
		cout << " - seats: " << seats << endl;
	}
};
int main() {
	int transportType;
	Transport *transport[5];  //transport array

	transport[0] = new Lamborgini;
	transport[1] = new Bogdan;
	transport[2] = new An124;
	transport[3] = new Trolleybus;
	transport[4] = new Tram;

	cout << "Transport: \n";
	cout << " 1. Light auto\n";
	cout << " 2. FLy\n";
	cout << " 3. Bus\n";
	cout << " 4. Trolleybus\n";
	cout << " 5. Tram\n";
	cin >> transportType;

	transportType--;
	transport[transportType]->get();
	transport[transportType]->out();
	transport[transportType]->basicInfo();

	cout << endl;

	_getch();
}







