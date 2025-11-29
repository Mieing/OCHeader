@class BDPConfirmAnimationButton, NSString, BDPStyleTextField, BDPUniqueID, BDPIndicatorView;
@protocol BDPGuardianVerifyViewDelegate;

@interface BDPGuardianVerifyView : UIView <BDPTextFieldDelegate> {
    BDPIndicatorView *_indicatorView;
    BDPStyleTextField *_nameTextField;
    BDPStyleTextField *_idNumberTextField;
    BDPConfirmAnimationButton *_confirmButton;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<BDPGuardianVerifyViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidChanged:(id)a0;
- (void)confirmAction:(id)a0;
- (id)initWithDelegate:(id)a0 uniqueID:(id)a1;
- (BOOL)isNameTextFieldValid;
- (BOOL)isIdNumberTextFieldValid;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)_cancelAction:(id)a0;

@end
