#include <iostream>
#include <vector>
#include <thread>

using namespace std;

int addthreads = 0;

void squarenum(int x) {

	addthreads += x * x * x;

}

int main() {

	vector<thread> septhread;

	for (int i = 1; i <= 6; i++) {

		septhread.push_back(thread(&squarenum, i));

	}

	for (auto& th : septhread) {

		th.join();

	}

	cout << "Your answer = " << addthreads << endl;

	system("pause");

	return 0;

}