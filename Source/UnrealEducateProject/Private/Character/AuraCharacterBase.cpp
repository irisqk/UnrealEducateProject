// it just a learning project copy by GAS write by chuqingkun,if you like it you also can study it


#include "Character/AuraCharacterBase.h"


AAuraCharacterBase::AAuraCharacterBase()
{

	PrimaryActorTick.bCanEverTick = false;
	Weapon=CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	Weapon->SetupAttachment(GetMesh(),FName("WeaponHandSocket"));
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AAuraCharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}



