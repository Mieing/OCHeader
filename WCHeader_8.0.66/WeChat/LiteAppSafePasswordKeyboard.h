@class NSString, TenpayPasswordCtrl;
@protocol UITextInput;

@interface LiteAppSafePasswordKeyboard : UIView <TenpayPasswordCtrlDelegate, UITextFieldDelegate> {
    BOOL _disableDarkMode;
}

@property (retain, nonatomic) TenpayPasswordCtrl *tenpayPasswordCtrl;
@property (retain, nonatomic) id<UITextInput> flutterInputView;
@property (nonatomic) long long pwdEncryptMode;
@property (retain, nonatomic) NSString *pwdNonce;
@property (nonatomic) long long pwdTimestamp;
@property (nonatomic) unsigned long long appUuid;
@property (nonatomic) unsigned long long nodeId;
@property (nonatomic) long long pwdViewStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateInterfaceStyle;
- (void)updatePasswordCtrl;
- (void)captureScreenDidChange;
- (long long)getTextLength;
- (void)visitSubviewsOfView:(id)a0 vistor:(id /* block */)a1;
- (unsigned long long)getFlutterInputViewTextLen;
- (void)keyboardDidShow:(id)a0;
- (void)setKeyboardAccessibility:(id)a0;
- (void)setAppUuId:(unsigned long long)a0;
- (id)getEncryptPassword;
- (id)getPasswordHash;
- (void)reportSm2PwdError:(id)a0 sm2HashType:(long long)a1;
- (void)passwordInputComplete;
- (void)clearPassword;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)passwordCtrlShouldChange:(id)a0;
- (void)passwordCtrlDidBeginEditing:(id)a0;
- (void)passwordCtrlDidEndEditing:(id)a0;
- (void)setDisableDarkMode:(BOOL)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
