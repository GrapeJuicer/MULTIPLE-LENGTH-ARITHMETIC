#pragma once

#include "mulprec.h"

//��`�ς݃}�N��
#define DO_PRINT	1

#ifdef _DO_PRINT_
#undef DO_PRINT
#define DO_PRINT _DO_PRINT_
#endif

#if RADIX == 10000
#define ROOP		(KETA / 4)		// ... KETA / 4
#else
#define ROOP		(KETA / 16)		// ... KETA / 4
#endif

//�~�����v�Z�p�ϐ�
struct NUMBER A, B, C, D, E, F, G, H, I, J, K, L, M, N, P, ans, trush;
struct BUNSU R, S, T, U, V, W, X, Y, Z;
struct NUMBER num_6;

//�~�����v�Z�p�֐�
int culPI();

//�~�����\���p�֐�
void dispResult(struct NUMBER* a);

