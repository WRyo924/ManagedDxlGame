#pragma once
#include "../dxlib_ext/dxlib_ext.h"
#include "player.h"

class Bullet {
public:
	Bullet();	//�������ꂽ�Ƃ��ɍŏ������I�ɔ�������֐�
	//~Bullet();
public:
	//static constexpr double BULLET_x = 0;
	//static constexpr double BULLET_y = 0;
	
	static constexpr float BULLET_SPEED = 5;

	tnl::Vector3 pos = { DXE_WINDOW_WIDTH/2,DXE_WINDOW_HEIGHT * 0.8f,0 };
	int sizeW = 8;
	int sizeH = 8;
	bool sFlag;		//�����Ă邩�ǂ���
	//int count; �Ĕ���
	

	void update(float delta_time);
	void draw();
};