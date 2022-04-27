#ifndef CVECTOR_H_
#define CVECTOR_H_


//Стандартный размер вектора при инициализации
#define CVECTOR_INIT_CAPACITY 4

/*
* Структура, представляющая собой "объект" вектора.
*
*/
typedef struct {
	void** data;
	int size;
	int capacity;
	size_t element_size;
} cvector;

/*
* Инициализация структуры вектора.
*
* @param __v указатель на структуру вектора
* @param __dataSize размер элемента данных в байтах
*/
void cvector_init(cvector* __v, size_t __dataSize);

/*
* Функция, которая возвращает текущее количество.
* элементов в векторе
*
* @param __v указатель на структуру вектора
*/
int cvector_size(cvector* __v);

/*
* Функция добавления данных в конец вектора.
*
* @param __v указатель на структуру вектора
* @param __data указатель на данные
*/
void cvector_push(cvector* __v, void* __data);

/*
* Функция изменения элемента вектора по индексу.
*
* @param __v указатель на структуру вектора
* @param __index индекс элемента
* @param __data указатель на новые данные
*/
int cvector_set(cvector* __v, int __index, void* __data);

/*
* Удаление элемента из вектора по индексу.
*
* @param __v указатель на структуру вектора
* @param __index индекс удаляемого элемента
*/
int cvector_delete(cvector* __v, int __index);

/*
* Получение значения элемента по индексу.
*
* @param __v указатель на структуру вектора
* @param __index индекс элемента
*/
void* cvector_get(cvector* __v, int __index);

/*
* Полная очистка вектора.
*
* @param __v указатель на структуру вектора
*/
void cvector_clear(cvector* __v);

void cvector_resize(cvector* __v, int __newCap);

#endif /* CVECTOR_H_ */