#include "player.h"
#include "bullet.h"

Bullet::Bullet(){
	pos = player.pos_;
}

void Bullet::update(float delta_time) {
	pos.y += BULLET_SPEED * -1 ;






	//if (tnl::Input::IsKeyDown(eKeys::KB_SPACE)&&Bullet::count % 6 == 0){
	//	for (int i = 0; i < 20; i++) {
	//		if (bullet.flag == false) {
	//			bullet.flag = true;
	//			player.pos_.x
	//			//bullet.shot[i].x = pos_.x;
	//			//bullet.shot[i].y = pos_.y;
	//			break;
	//		}
	//	}

	//}
}

void Bullet::draw() {
	//DrawBoxEx(Vector3の型のPos, 四角形の幅, 四角形の高さ, 四角形の色を付けるか,色の指定);
	DrawBoxEx(pos,sizeW,sizeH, true,255);

}