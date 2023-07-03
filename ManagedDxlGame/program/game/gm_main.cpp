#include <time.h>
#include <string>
#include "../dxlib_ext/dxlib_ext.h"
#include "gm_main.h"
#include "player.h"
#include "bullet.h"
#include <vector>

const int total_Bullet = 999;
class Bullet* b[total_Bullet] = { nullptr };
//std::vector<class Bullet*> Bullets;
int numBullet = 0;
int numDelete = 0;


//class target {
//public:
//
//
//};

//------------------------------------------------------------------------------------------------------------
// ゲーム起動時に１度だけ実行されます
void gameStart(){
	srand(time(0));
	//Player player;

}

//------------------------------------------------------------------------------------------------------------
// 毎フレーム実行されます
void gameMain(float delta_time) {
	if (tnl::Input::IsKeyDownTrigger(eKeys::KB_SPACE)) {

		//	if (numBullet < total_Bullet) {
		//		auto b = new Bullet();
		//		Bullets.emplace_back(b);
		if(numBullet < total_Bullet){
				b[numBullet] = new Bullet();	//実体を生成する
				numBullet++;
		}
	}

	player.update(delta_time);
	player.draw();

		/*for (auto b : Bullets) {
			b->update(delta_time);
			b->draw();

			if (b->pos.y < 0) {
				auto iter = std::find(Bullets.begin(), Bullets.end(), b);

				if (iter != Bullets.end()) {
					std::iter_swap(iter, Bullets.end() - 1);
					Bullets.pop_back();
				}
				delete b;
			}
		}
	}*/
	for (int i = numDelete; i < numBullet; i++) {
		b[i]->update(delta_time);
		b[i]->draw();
		if (b[i]->pos.y < 0){
			delete b[i];
			numDelete++;
		}
	}
}

//------------------------------------------------------------------------------------------------------------
// ゲーム終了時に１度だけ実行されます
void gameEnd() {

}
