// it just a learning project copy by GAS write by chuqingkun,if you like it you also can study it


#include "Character/AuraCharacter.h"

#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

AAuraCharacter::AAuraCharacter()
{
	SpringArmComponent=CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComponent"));
	CameraComponent=CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	SpringArmComponent->SetupAttachment(RootComponent);
	CameraComponent->SetupAttachment(SpringArmComponent);
	SpringArmComponent->bInheritPitch=false;
	SpringArmComponent->bInheritYaw=false;
	SpringArmComponent->bInheritRoll=false;
	SpringArmComponent->bEnableCameraLag=true;
	GetCharacterMovement()->bOrientRotationToMovement=true;
	GetCharacterMovement()->RotationRate=FRotator(0.f,400.f,0.f);
	GetCharacterMovement()->bConstrainToPlane=true;
	GetCharacterMovement()->bSnapToPlaneAtStart=true;
	bUseControllerRotationYaw=false;
	bUseControllerRotationRoll=false;
	bUseControllerRotationPitch=false;
}
