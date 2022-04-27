#ifndef CVECTOR_H_
#define CVECTOR_H_


//����������� ������ ������� ��� �������������
#define CVECTOR_INIT_CAPACITY 4

/*
* ���������, �������������� ����� "������" �������.
*
*/
typedef struct {
	void** data;
	int size;
	int capacity;
	size_t element_size;
} cvector;

/*
* ������������� ��������� �������.
*
* @param __v ��������� �� ��������� �������
* @param __dataSize ������ �������� ������ � ������
*/
void cvector_init(cvector* __v, size_t __dataSize);

/*
* �������, ������� ���������� ������� ����������.
* ��������� � �������
*
* @param __v ��������� �� ��������� �������
*/
int cvector_size(cvector* __v);

/*
* ������� ���������� ������ � ����� �������.
*
* @param __v ��������� �� ��������� �������
* @param __data ��������� �� ������
*/
void cvector_push(cvector* __v, void* __data);

/*
* ������� ��������� �������� ������� �� �������.
*
* @param __v ��������� �� ��������� �������
* @param __index ������ ��������
* @param __data ��������� �� ����� ������
*/
int cvector_set(cvector* __v, int __index, void* __data);

/*
* �������� �������� �� ������� �� �������.
*
* @param __v ��������� �� ��������� �������
* @param __index ������ ���������� ��������
*/
int cvector_delete(cvector* __v, int __index);

/*
* ��������� �������� �������� �� �������.
*
* @param __v ��������� �� ��������� �������
* @param __index ������ ��������
*/
void* cvector_get(cvector* __v, int __index);

/*
* ������ ������� �������.
*
* @param __v ��������� �� ��������� �������
*/
void cvector_clear(cvector* __v);

void cvector_resize(cvector* __v, int __newCap);

#endif /* CVECTOR_H_ */