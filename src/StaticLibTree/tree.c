#include "Windows.h"                    // Windows API �̋@�\��`
#include <stdbool.h>
#include "../include/libtree.h"

//
// 2���؂̏�����
//
void initialize(binary_tree* t)
{
	t->root = NULL;
}

//
// �g�p�������̑S���
//
void finalize(binary_tree* t)
{
}

//
// key�̒l�����ăm�[�h��ǉ�����
//
bool add_node(binary_tree* t, int key, const char* value)
{
	// todo: �m�[�h���쐬���āA�K�؂Ȉʒu�ɑ}�����Ă�������

	return true;
}

//
// key�̏����ȏ��ɃR�[���o�b�N�֐�func���Ăяo��
//
void serach(const binary_tree* t, void (*func)(const node* p))
{
	// todo: key�̏����ȏ���func�֐�����т����Ă�������
}

