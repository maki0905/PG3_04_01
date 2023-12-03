#pragma once
#include "Model.h"
#include "WorldTransform.h"
#include "ViewProjection.h"

class Player {
public:
	Player();

	void Init(Model* model);
	void Update();
	void Draw(const ViewProjection& viewProjection);

	// キーごとにコマンドを作る
	void MoveRight();
	void MoveLeft();

private:
	Model* model_;
	WorldTransform worldTransform_;
	const float speed_ = 1.0f;

};
