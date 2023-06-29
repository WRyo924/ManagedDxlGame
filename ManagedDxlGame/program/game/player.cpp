#include "player.h"

Player player;

void Player::update(float delta_time) {
	if (tnl::Input::IsKeyDown(eKeys::KB_LEFT))pos_.x -= Player::MOVE_SPEED;
	if (tnl::Input::IsKeyDown(eKeys::KB_RIGHT))pos_.x += Player::MOVE_SPEED;
}

void Player::draw() {
	DrawBoxEx(pos_,Player::SIZE_WIDTH,Player::SIZE_HEIGHT, false);

}