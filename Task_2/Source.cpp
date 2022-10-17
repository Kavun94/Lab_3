#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "ukr");
    r:cout << "Enter student number " << endl;
	int a;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << "Аксьонов Михайло Андрiйович - Середнiй бал 70"<<endl;
		break;
	case 2:
		cout << "Борисюк Катерина Вячеславiвна - Середнiй бал 90" << endl;
		 break;
	case 3:
		cout << "Буханчук Богдан Вiкторович - Середнiй бал 83" << endl;
		break;
	case 4:
		cout << "Гавриленко Богдан Валерiйович - Середнiй бал 87" << endl;
		break;
	case 5:
		cout << "Гладка Олена Вiкторiвна - Середнiй бал 85" << endl << endl;
		break;
	case 6:
		cout << "Гриньов Тимофiй Олександрович - Середнiй бал 79" << endl;
		break;
	case 7:
		cout << "Дмитрiєва Анастасiя Анатолiївна - Середнiй бал 70" << endl;
		break;
	case 8:
		cout << "iлюк Андрiй Юрiйович - Середнiй бал 78" << endl;
		break;
	case 9:
		cout << "Кавун Олександр Миколайович - Середнiй бал 85" << endl;
		break;
	case 10:
		cout << "Кантур Андрiй Олексiйович - Середнiй бал 65" << endl;
		break;
	case 11:
		cout << "Климовець Микола Григорович - Середнiй бал 89" << endl;
		break;
	case 12:
		cout << "Колешня Костянтин Дмитрович - Середнiй бал 89" << endl;
		break;
	case 13:
		cout << "Коркушко Олександр Олександрович - Середнiй бал 82" << endl;
		break;
	case 14:
		cout << "Кучерявий Дмитрiй Олексiйович - Середнiй бал 83" << endl;
		break;
	case 15:
		cout << "Межiнський Владислав Миколайович - Середнiй бал 90" << endl;
		break;
	case 16:
		cout << "Мельник Ярослав Вiкторович - Середнiй бал 101" << endl;
		break;
	case 17:
		cout << "Нечай Олександр Сергiйович - Середнiй бал 75" << endl;
		break;
	case 18:
		cout << "Нiкiфоров Єгор iгорович - Середнiй бал 79" << endl;
		break;
	case 19:
		cout << "Новик Ростислав Сергiйович - Середнiй бал 71" << endl;
		break;
	case 20:
		cout << "Старовойт Софiя Олексiївна - Середнiй бал 80" << endl;
		break;
	case 21:
		cout << "Степанюк Iван Володимирович - Середнiй бал 70" << endl;
		break;
	case 22:
		cout << "Терещенко Богдан Романович - Середнiй бал 62" << endl;
		break;
	case 23:
		cout << "Трохимчук Дмитро Сергiйович - Середнiй бал 75" << endl;
		break;
	case 24:
		cout << "Цибулько Максим Олегович - Середнiй бал 70" << endl;
		break;
	case 25:
		cout << "Чередник iлля Євгенiйович - Середнiй бал 90" << endl;
		break;
	case 26:
		cout << "Чередько Ангелiна Олександрiвна - Середнiй бал 83" << endl;
		break;
	case 27:
		cout << "Чорний Юрiй Васильович - Середнiй бал 72" << endl;
		break;
	case 28:
		cout << "Чудаков Олег Сергiйович - Середнiй бал 65" << endl;
		break;
	case 29:
		cout << "Яригiн Вiталiй Геннадiйович - Середнiй бал 83" << endl;
		break;
	default:
		cout << "enter a number up to 29"<<endl;
	}

	goto r;
	return 0;
}
