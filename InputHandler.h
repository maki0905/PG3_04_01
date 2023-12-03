#pragma once

class ICommand;
class InputHandler {
public:
	ICommand* HandleInput();

	void AssignMoveLeftCommandtoPressKeyA();
	void AssignMoveRightCommandtoPressKeyD();
	

private:
	ICommand* pressKeyD_;
	ICommand* pressKeyA_;

};
