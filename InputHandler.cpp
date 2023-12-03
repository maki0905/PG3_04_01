#include "InputHandler.h"
#include "Input.h"
#include "ICommand.h"


ICommand* InputHandler::HandleInput() { 
	if (Input::GetInstance()->PushKey(DIK_D)) {
		return pressKeyD_;
	} 
	else if (Input::GetInstance()->PushKey(DIK_A)){
		return pressKeyA_;
	}
	return nullptr;
}

void InputHandler::AssignMoveLeftCommandtoPressKeyA() { 
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}

void InputHandler::AssignMoveRightCommandtoPressKeyD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;

}
