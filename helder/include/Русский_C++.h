#ifndef Байкал
#define Байкал

#ifdef _WIN32
#include <Windows.h>
#define русифицировать SetConsoleOutputCP(1251)

#endif

#include <fstream>
#include <iostream>


#define начать_программу int main
#define начать_пустую_программу void main
#define использовать using
#define СТД std
#define вывести cout
#define ввести cin
#define вернуть return

#define делать do
#define пока while
#define для for

#define если if
#define иначе else

#define класс class
#define структура struct
#define перечисление enum
#define публичный: public:

#define прервать break
#define продолжить continue
#define переключить switch
#define случай case
#define по_умолчанию default

#define правда true
#define ложь false

#define след_строка endl
#define новый new
#define удалить delete
#define нулевой_результат nullptr
#define нулевой NULL
#define случайность random
#define постоянная const
#define заряд pow
#define бросить throw
#define исключение exception
#define считать_файл ifstream
#define записать_в_файл ofstream
#define файл fstream
#define друг friend
#define окстись goto
#define шаблон template
#define имя_типа typename
#define частный private
#define публичный public
#define защищенный protected
#define влинию inline
#define статический static
#define неподписанный unsigned
#define пробовать try
#define поймать catch
#define пространство_имен namespace
#define открыть open
#define закрыть close
#define авто auto
#define статический_каст static_cast
#define заглянуть peek

#define получить_линию getline
#define хорошо good
#define неудача fail
#define конец_файла eof
#define вск eof
#define исходящий_поток ostream
#define мгновенный_поток istream
#define менять std::swap
#define получить get

использовать целое = int;
использовать полн_дробное = double;
использовать малое_дробное = float;
использовать символ = char;
использовать строка = СТД::string;
использовать пустота = void;
использовать короткое_целое = short;
использовать длинное_целое = long;
использовать долго_долго = long long;
использовать размер = size_t;
использовать логика = bool;


перечисление счёт{ ноль = 0, один = 1, два = 2, три = 3, четыре = 4,
пять = 5, шесть = 6, семь = 7, восемь = 8, девять = 9, десять = 10 };

#endif