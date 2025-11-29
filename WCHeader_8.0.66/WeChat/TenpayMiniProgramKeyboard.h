@class TenpaySMCertificate, UITextField, NSData, TenpaySMSecureObject, NSMutableArray, NSString;
@protocol TenpayMiniProgramKeyboardDelegate;

@interface TenpayMiniProgramKeyboard : TPIDKeyboardView {
    TenpaySMCertificate *_certificateHandler;
    TenpaySMSecureObject *_smSecureHandler;
    NSMutableArray *_inputText;
    NSData *_aesKeyIV;
    NSData *_aseKey;
    NSString *_salt;
    unsigned long long _timestamp;
    unsigned long long _nonce;
    int _maxInputLen;
    int _minInputLen;
    BOOL _hasStartCustomHash;
    NSData *_customHash;
    NSString *_certPem;
    int gErrorCode;
}

@property (weak, nonatomic) id<TenpayMiniProgramKeyboardDelegate> delegate;
@property (readonly, weak, nonatomic) UITextField *textView;

- (id)initWithX:(BOOL)a0 ImageNumNormal:(id)a1 ImageNumPress:(id)a2 ImageDelNormal:(id)a3 ImageDelPess:(id)a4 Controller:(id)a5 certPem:(id)a6;
- (void)dealloc;
- (void)appendPsw:(id)a0;
- (void)setSalt:(id)a0;
- (void)setTimestamp:(unsigned long long)a0;
- (void)setNonce:(unsigned long long)a0;
- (id)inputEncryptData:(unsigned long long)a0;
- (id)plainPasswd;
- (long long)getContentLength;
- (id)version;
- (int)getError;
- (void)beginCustomHash;
- (void)customPasswdSm3;
- (void)customPasswdSha256;
- (void)customPasswdSha1;
- (void)customPasswdMd5;
- (void)customPasswdEncode:(unsigned long long)a0;
- (void)customInsertSalt:(id)a0;
- (void)customAppendSalt:(id)a0;
- (id)endCustomHashAndEncrypt:(unsigned long long)a0 nonce:(unsigned long long)a1;
- (void)setKeyboardNumFontColor:(id)a0 bgColor:(id)a1;
- (void)setKeyboardNumFontColor:(id)a0 bgColor:(id)a1 lineColor:(id)a2;
- (void)setKeyboardOrientation:(long long)a0;
- (void)HiddenKeyboardPressedState:(BOOL)a0;
- (void)show;
- (void)hide;
- (void)clearInput;
- (void)setCertPem:(id)a0;
- (void)setInputLength:(long long)a0 max:(long long)a1;
- (void)keyboardTouchNumber:(id)a0;
- (void)keyboardTouchDelete;
- (void).cxx_destruct;

@end
