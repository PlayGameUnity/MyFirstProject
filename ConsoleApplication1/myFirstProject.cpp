#include "IO.h"
// Рубильник вкл.вкл
#define SWITCH

int main() {
	
	// Проверяем состояние рубильника
	#ifdef SWITCH

	// Выводим приветственное сообщение.
	hello();

	// Запоминаем ввод пользователя.
	int input1 = readNumber();
	int input2 = readNumber();

	// Выводим результат
	writeAnwser(input1 + input2);

	// Выводим сообщение о выполнении программы.
	on();
	
	// Рубильник выкл.выкл
	#else
	// Выводим сообщение о невыполнении программы.
	off();
	#endif
	return 0;
}