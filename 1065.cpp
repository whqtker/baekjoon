#include <iostream>

using namespace std;

int main() {
	//�ϴ� 1���� 99������ ���� ��� �Ѽ��̴�. 100���� �Ѽ����� Ȯ���ϴ� �ڵ带 �����ϸ� �� ���̴�.
	//���� �ڸ����� �ִ� ��(100 ~ 999)�� �Ѽ����� �Ǻ��ϴ� �ڵ带 �����ؾ� �� ���̴�. 1000���� �Է¹޴´ٰ� �Ǿ� ������ ������ 1000�� �Ѽ��� �ƴϴ�.

	int sum = 0;

	int num;
	cin >> num;

	if (num < 100) { //99 ������ ���� ���� ���� �� �Ѽ��� �� �����̹Ƿ� �״�� ������ش�.
		cout << num;
	}
	else { //else������ �Ѿ�� ���� ��� ���� �ڸ����� �ִ� ���� ���̴�.
		sum = 99;
		for (int i = 100; i <= num; i++) {

			int hundreds = i / 100;
			int tens = (i % 100 - i % 10) / 10;
			int ones = i % 10;

			if (tens - ones == hundreds - tens) {
				sum++;
			}
		}

		cout << sum;
	}
}