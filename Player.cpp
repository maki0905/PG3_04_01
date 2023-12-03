#include "Player.h"

Player::Player() {}

void Player::Init(Model* model) {
	model_ = model; 
	worldTransform_.Initialize();

}

void Player::Update() { 
	
	
	
	worldTransform_.UpdateMatrix();

}

void Player::Draw(const ViewProjection& viewProjection) {
	model_->Draw(worldTransform_, viewProjection);
}

void Player::MoveRight() { this->worldTransform_.translation_.x += this->speed_;

}

void Player::MoveLeft() { this->worldTransform_.translation_.x -= this->speed_;

}
