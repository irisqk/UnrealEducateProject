// it just a learning project copy by GAS write by chuqingkun,if you like it you also can study it


#include "Player/AuraPlayerController.h"

AAuraPlayerController::AAuraPlayerController()
{
	bReplicates = true;
}

void AAuraPlayerController::BeginPlay()
{
	Super::BeginPlay();
	check(AuraContext);

	UEnhancedInputLocalPlayerSubsystem* SubSystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(
		GetLocalPlayer());
	check(SubSystem);
	SubSystem->AddMappingContext(AuraContext, 0);
	//show mouse
	bShowMouseCursor = true;
	//set the mouse cursor to default
	DefaultMouseCursor = EMouseCursor::Default;
	//允许同时响应游戏和界面ui
	FInputModeGameAndUI InputModeData;
	//设置鼠标锁定模式为不锁定，（允许鼠标移出游戏窗口，例如lol是锁定）
	InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);
	//当光标的输入被被捕获时，不隐藏光标，（例如ff14控制鼠标控制人物方向，鼠标会消失，配置为false后则不会消失）
	InputModeData.SetHideCursorDuringCapture(false);
	SetInputMode(InputModeData);
}
