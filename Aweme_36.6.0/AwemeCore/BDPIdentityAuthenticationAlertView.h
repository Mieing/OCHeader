@class BDPIndicatorView, NSString, BDPCheckBox, NSArray, BDPStyleTextField, UITextView, BDPConfirmAnimationButton, BDPUniqueID, NSMutableArray;
@protocol BDPIdentityAuthenticationAlertViewDelegate;

@interface BDPIdentityAuthenticationAlertView : UIView <BDPTextFieldDelegate> {
    BOOL _checkBoxValid;
    BOOL _isShowGiftPackage;
    NSString *_title;
    NSString *_content;
    BDPCheckBox *_checkBox;
    UITextView *_protocolView;
    BDPIndicatorView *_indicatorView;
    BDPStyleTextField *_nameTextField;
    BDPStyleTextField *_identityTextField;
    BDPConfirmAnimationButton *_confirmButton;
    NSArray *_giftInfo;
    NSMutableArray *_giftImageViewArray;
    NSMutableArray *_giftDescriptionLableArray;
    struct _NSRange { unsigned long long location; unsigned long long length; } _privacyRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _serviceRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _authenticationRange;
}

@property (weak, nonatomic) id<BDPIdentityAuthenticationAlertViewDelegate> delegate;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidChanged:(id)a0;
- (void)onCheckBoxValueChanged;
- (BOOL)isNameTextFieldValid;
- (void)_faqAction:(id)a0;
- (void)_confirmAction:(id)a0;
- (void)_protocolAction:(id)a0;
- (BOOL)isIdentityTextFieldValid;
- (id)initWithTitle:(id)a0 content:(id)a1 showGift:(BOOL)a2 giftInfo:(id)a3 uniqueID:(id)a4 delegate:(id)a5;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)_cancelAction:(id)a0;

@end
