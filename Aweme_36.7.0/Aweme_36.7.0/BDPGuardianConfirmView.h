@class UITextView, BDPConfirmAnimationButton, BDPCheckBox, BDPUniqueID;
@protocol BDPGuardianConfirmViewDelegate;

@interface BDPGuardianConfirmView : UIView {
    BDPCheckBox *_checkBox;
    UITextView *_protocolView;
    BDPConfirmAnimationButton *_agreeButton;
    struct _NSRange { unsigned long long location; unsigned long long length; } _privacyRange;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (weak, nonatomic) id<BDPGuardianConfirmViewDelegate> delegate;

- (void)didDisagree:(id)a0;
- (void)didAgree:(id)a0;
- (void)onCheckBoxValueChanged;
- (void)protocolAction:(id)a0;
- (id)initWithDelegate:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;

@end
