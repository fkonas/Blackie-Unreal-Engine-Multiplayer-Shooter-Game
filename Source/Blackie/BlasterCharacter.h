// © 2025 Iwpag Company's Multiplayer Shooter Game. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BlasterCharacter.generated.h"

UCLASS()
class BLACKIE_API ABlasterCharacter : public ACharacter
{
	GENERATED_BODY()


public:

    // Sets default values for this character's properties
    ABlasterCharacter();
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

    void MoveForward(float Value);
    void MoveRight(float Value);
    void Turn(float Value);
    void LookUp(float Value);

private:
    UPROPERTY(VisibleAnywhere, Category = Camera)
    class USpringArmComponent* CameraBoom;

    UPROPERTY(VisibleAnywhere, Category = Camera)
    class UCameraComponent* FollowCamera;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
    class UWidgetComponent* OverheadWidget;

};
