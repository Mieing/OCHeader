@class UIColor, WCPayInputView, NSString, UIImage, UIView, TenpayPasswordCtrl;

@interface WCPayTenpayPasswordCtrlItem : WCBaseInfoItem <TenpayPasswordCtrlDelegate, WCPayLogicMgrExt, UITextFieldDelegate> {
    TenpayPasswordCtrl *m_textField;
    UIImage *m_image;
}

@property (retain) UIColor *numColor;
@property (retain) UIColor *numFontColor;
@property (retain) UIColor *extendColor;
@property (retain) UIColor *pressColor;
@property (retain) UIColor *lineColor;
@property (nonatomic) long long pwdViewStyle;
@property (retain, nonatomic) UIView *keyboardMask;
@property (retain, nonatomic) WCPayInputView *payInputView;
@property (nonatomic) long long pwdEncryptMode;
@property (retain, nonatomic) NSString *pwdNonce;
@property (nonatomic) BOOL keyboardDisabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getTextLength;
- (struct CGSize { double x0; double x1; })getSize;
- (id)getValue;
- (void)updatePasswordCtrl;
- (void)captureScreenDidChange;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)clearInput;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (id)initWithImage:(id)a0;
- (id)initWithYogaNumColor:(id)a0 numFontColor:(id)a1 extendColor:(id)a2 pressColor:(id)a3 lineColor:(id)a4;
- (void)dealloc;
- (void)keyboardDidShow:(id)a0;
- (void)setKeyboardAccessibility:(id)a0;
- (id)getHashData;
- (void)passwordCtrlShouldChange:(id)a0;
- (void)passwordCtrlDidBeginEditing:(id)a0;
- (id)getSM2EncryptValue:(long long)a0 nonce:(id)a1;
- (id)getSM2EncryptValue:(long long)a0 timestamp:(unsigned long long)a1 nonce:(id)a2;
- (void)reportRSAError:(id)a0 isRSA2048:(BOOL)a1;
- (void)reportSm2PwdError:(id)a0 sm2HashType:(long long)a1;
- (id)getRsa2048EncryValue:(long long)a0 salt:(id)a1 timeStamp:(unsigned long long)a2 nonceStr:(id)a3;
- (void)passwordCtrlDidEndEditing:(id)a0;
- (BOOL)onError:(id)a0;
- (void)OnGetTenpaySecureCtrlSalt:(id)a0 Date:(id)a1 Error:(id)a2;
- (void)autoRemarkKeyBoradType;
- (void)setTextFieldSalt;
- (void)setTextFieldServerSalt:(id)a0;
- (void)updatePwdViewStyle:(long long)a0;
- (void)showBackgroundImage:(BOOL)a0;
- (void)onTapGesture:(id)a0;
- (void).cxx_destruct;

@end
