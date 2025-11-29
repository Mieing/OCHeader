@class NSString, TenpaySecureCtrl;

@interface WCPayTenpaySecureCtrlItem : WCBaseInfoItem <TenpaySecureCtrlDelegate, WCPayLogicMgrExt> {
    int m_eEncryptType;
    BOOL m_bTextFieldHasBecomeFirstResponder;
}

@property (retain, nonatomic) NSString *m_nsUserCredType;
@property (retain, nonatomic) TenpaySecureCtrl *m_textField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)getTextLength;
- (BOOL)isPhoneNum;
- (BOOL)isBankCardNum;
- (BOOL)isUserIDNum:(unsigned int)a0;
- (void)setFormatBankCard;
- (void)setKeyboardUseID:(BOOL)a0;
- (id)getValueWithEncryptType:(int)a0;
- (id)getValue;
- (void)setEnable:(BOOL)a0;
- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)becomeFirstResponder;
- (void)resignFirstResponder;
- (void)becomeFirstResponderOnce;
- (void)_becomeFristResponderOnce;
- (void)onEndEditor;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)setKeyboardType:(long long)a0;
- (void)setReturnKeyType:(long long)a0;
- (void)setClearButtonMode:(long long)a0;
- (void)setEncryptType:(int)a0;
- (void)setSecureTextEntry:(BOOL)a0;
- (void)setFont:(id)a0;
- (void)setInputWhiteListChar:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndOnExit:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)tenpayCtrlShouldReturn:(id)a0;
- (void)tenpayCtrlShouldChange:(id)a0;
- (BOOL)onError:(id)a0;
- (void)setMaxInputLen:(int)a0;
- (void)appendString:(id)a0;
- (void)OnGetTenpaySecureCtrlSalt:(id)a0 Date:(id)a1 Error:(id)a2;
- (void)autoRemarkKeyBoradType;
- (void)setDefaultValue:(id)a0;
- (void)resignFirstResponderWithCompletion:(id /* block */)a0;
- (void)onKeyboardDidHide;
- (void).cxx_destruct;

@end
