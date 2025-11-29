@class NSString, WCUITextField;

@interface WCBaseTextFieldItem : WCBaseInfoItem <UITextFieldDelegate> {
    WCUITextField *m_textField;
    int m_iMaxInputLen;
    BOOL m_bRealLen;
    BOOL m_bTextFieldHasBecomeFirstResponder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)getValue;
- (void)setEnable:(BOOL)a0;
- (void)setRestrictShareMenu:(BOOL)a0;
- (id)initWithTitle:(id)a0 tip:(id)a1 key:(id)a2;
- (void)dealloc;
- (void)becomeFirstResponder;
- (void)becomeFirstResponderOnce;
- (void)_becomeFristResponderOnce;
- (void)resignFirstResponderWithCompletion:(id /* block */)a0;
- (void)onKeyboardDidHide;
- (void)resignFirstResponder;
- (id)getTextField;
- (void)setKeyboardType:(long long)a0;
- (void)setReturnKeyType:(long long)a0;
- (void)setSecureTextEntry:(BOOL)a0;
- (void)setClearButtonMode:(long long)a0;
- (void)setMaxInputLen:(int)a0;
- (void)setMaxRealStringLen:(int)a0;
- (void)setRealLen:(BOOL)a0;
- (void)setText:(id)a0;
- (void)setFont:(id)a0;
- (void)setColor:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndOnExit:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidChanged:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;

@end
