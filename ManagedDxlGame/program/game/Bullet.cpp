#include "player.h"
#include "bullet.h"

Bullet bullet;

void Bullet::update(float delta_time) {
	if (tnl::Input::IsKeyDown(eKeys::KB_SPACE)&&Bullet::count % 6 == 0){
		for (int i = 0; i < 20; i++) {
			if (bullet.flag == false) {
				bullet.flag = true;
				player
				//bullet.shot[i].x = pos_.x;
				//bullet.shot[i].y = pos_.y;
				break;
			}
		}

	}
}

//void Draw