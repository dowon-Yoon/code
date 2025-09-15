#include <iostream>


using namespace std;

struct Person_info {
	string name_info[10]  { "Brain" , "Jessic:", "James", "Eric", "John", "Tom", "Tomy", "Alice",
		"Bob", "Carol" };
	int age_info[10] = { 24, 22, 30, 28, 35, 40, 25, 27, 32, 29 };
	float height_info[10] = { 180, 165, 170, 172, 168, 175, 169, 181, 163, 177 };
	float weight_info[10] = { 70, 55, 65, 68, 62, 75, 57, 73, 60, 80 };
};



void check_age(Person_info* _adult, int _count) { //구조체 포인터와 배열 크기
	for (int i = 0; i < _count; i++)
	{
		if (_adult->age_info[i] > 25)
		{
			cout << "name : " << _adult->name_info[i] << endl;
			cout << "age : " << _adult->age_info[i] << endl;
			cout << "height : " << _adult->height_info[i] << endl;
			cout << "weight : " << _adult->weight_info[i] << endl;
			cout << endl;
		}
	}
}

	int main() {
		int cnt;
		cout << "배열의 크기를 입력하세요: " << endl;
		cin >> cnt;
		if (cnt > 10)
			cnt = 10;
		Person_info* _adult = new Person_info[cnt]; //동적 할당
		cout << "25세가 넘는 사람의 정보 출력 " << endl;
		check_age(_adult, cnt);
		delete[] _adult;
		return 0;
		 
	}

