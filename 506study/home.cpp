#include"common.hpp"
#include"2017_winter\�ּ���\�ּ���.h"
#include"2017_winter\������\������.h"
Timer test;
int main() {
	test.tick();
	freopen("txt/robot.txt", "r", stdin);
	�ּ���::robot();
	test.toc();
}