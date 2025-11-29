@class TenpaySecureCtrl, NSString, MMKSecureEditTextOnTextChangedCallback, MMDynamicColor;

@interface KindaSecureEditText : KindaView <UITextFieldDelegate, MMKSecureEditText, TenpaySecureCtrlDelegate>

@property (retain, nonatomic) TenpaySecureCtrl *m_textField;
@property (retain, nonatomic) MMDynamicColor *m_textColor;
@property (retain, nonatomic) MMDynamicColor *m_tintColor;
@property (retain, nonatomic) NSString *m_defaultValue;
@property (nonatomic) long long m_encryptType;
@property (retain, nonatomic) MMKSecureEditTextOnTextChangedCallback *m_onTextChangedCallback;
@property (nonatomic) long long keyboardType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)getView;
- (void)setTextSize:(float)a0;
- (long long)getKeyboardType;
- (void)setHint:(id)a0;
- (id)getHint;
- (void)setText:(id)a0;
- (id)getText;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)setTintColor:(id)a0;
- (id)getTintColor;
- (void)setClearButtonMode:(long long)a0;
- (long long)getClearButtonMode;
- (void)setTextColor:(id)a0;
- (id)getTextColor;
- (void)setDefaultValue:(id)a0;
- (id)getDefaultValue;
- (void)setEnabled:(BOOL)a0;
- (BOOL)getEnabled;
- (void)setMaxLength:(int)a0;
- (int)getMaxLength;
- (void)setEncryptType:(long long)a0;
- (long long)getEncryptType;
- (void)setOnTextChangedCallback:(id)a0;
- (BOOL)isCardFromatValid:(int)a0;
- (BOOL)getIsCommonText;
- (void)setIsCommonText:(BOOL)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)tenpayCtrlShouldReturn:(id)a0;
- (void)tenpayCtrlShouldChange:(id)a0;
- (void).cxx_destruct;

@end
