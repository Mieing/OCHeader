@class MMKPwdInputViewOnEndEnterPasswordCallback, NSString, UIView, WCPayTenpayPasswordCtrlItem, MMKPwdInputViewOnPasswordChangeCallback;
@protocol MMKImage;

@interface KindaPwdInputView : KindaView <WCBaseInfoItemDelegate, MMKPwdInputView>

@property (retain, nonatomic) WCPayTenpayPasswordCtrlItem *m_passwordTextField;
@property (retain, nonatomic) UIView *m_view;
@property (retain, nonatomic) id<MMKImage> m_image;
@property (retain, nonatomic) MMKPwdInputViewOnEndEnterPasswordCallback *m_editEndCallBack;
@property (retain, nonatomic) MMKPwdInputViewOnPasswordChangeCallback *m_editChangeCallBack;
@property (nonatomic) long long pwdStyle;
@property (nonatomic) long long pwdEncryptMode;
@property (retain, nonatomic) NSString *pwdNonce;
@property (nonatomic) long long pwdTimestamp;
@property (retain, nonatomic) NSString *solfEncryptSalt;
@property (nonatomic) unsigned int solfEncryptVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setBackgroundColor:(id)a0;
- (id)getView;
- (void)setTextLength:(long long)a0;
- (long long)getTextLength;
- (void)setHashData:(id)a0;
- (id)getHashData;
- (void)setChearInput:(BOOL)a0;
- (BOOL)getChearInput;
- (void)setAutoRemarkKeyBoradType:(BOOL)a0;
- (BOOL)getAutoRemarkKeyBoradType;
- (void)setFocus:(BOOL)a0;
- (BOOL)getFocus;
- (void)setOnEndEnterPasswordCallback:(id)a0;
- (void)setOnPasswordChangeCallback:(id)a0;
- (long long)getPwdStyle;
- (void)setFocusModalListener:(id)a0;
- (void)setFocusUIPageListener:(id)a0;
- (void)WCBaseInfoItemEditChanged:(id)a0;
- (id)getEncryptValue;
- (void)setKeyboardDisabled:(BOOL)a0;
- (BOOL)getKeyboardDisabled;
- (void)setKeepKeyboardOnClearFocus:(BOOL)a0;
- (id)getPwdNonce;
- (long long)getPwdEncryptMode;
- (void)setEncryptSoftSaltAndVersion:(id)a0 version:(int)a1;
- (long long)sm2HashType;
- (long long)getPwdTimestamp;
- (void).cxx_destruct;

@end
