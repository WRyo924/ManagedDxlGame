#pragma once
#include "../dxlib_ext/dxlib_ext.h"
#include "player.h"

class Bullet {
public:
	static constexpr double BULLET_x = 0;
	static constexpr double BULLET_y = 0;
	static constexpr int BULLET_SPEED = 5;
	static constexpr int SIZE_WIDTH = 5;
	static constexpr int SIZE_HEIGHT = 5;
	tnl::Vector3 pos_ = { DXE_WINDOW_WIDTH / 2,DXE_WINDOW_HEIGHT * 0.8f,0 };
	bool flag;
	int count;
	int shot[20] = {0};

	void update(float delta_time);
	void draw();
};