@class NSString, TenpayPasswordView, TPIDKeyboardView, UIView, NSMutableArray, TenpaySMCertificate;
@protocol TenpayPasswordCtrlDelegate;

@interface TenpayPasswordCtrl : UITextField <UITextFieldDelegate> {
    NSMutableArray *_inputEncData;
    UIView *_keyboard;
    TenpayPasswordView *_pswView;
    TPIDKeyboardView *_iPadKeyboard;
    TenpaySMCertificate *_certificateHandler;
    NSString *_aesKey;
    NSMutableArray *_numberBtns;
    int gErrorCode;
}

@property (retain, nonatomic) NSString *saltVal;
@property (weak, nonatomic) id<TenpayPasswordCtrlDelegate> ctrlDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 AndImage:(id)a1;
- (void)setupSM;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (id)customOverlayContainer;
- (void)SetKeyboardNumFontColor:(id)a0 bgColor:(id)a1;
- (void)SetKeyboardNumFontColor:(id)a0 bgColor:(id)a1 lineColor:(id)a2;
- (void)SetDotFillColor:(id)a0 emptyColor:(id)a1;
- (void)HiddenKeyboardPressedState:(BOOL)a0;
- (void)setKeyboradOrientation:(long long)a0;
- (void)UseKeyboardWithImageNumNormal:(id)a0 ImageNumPress:(id)a1 ImageDelNormal:(id)a2 ImageDelPess:(id)a3;
- (void)UseKeyboardWithImageNumNormal:(id)a0 ImageNumPress:(id)a1 ImageDelNormal:(id)a2 ImageDelPess:(id)a3 ImageExtendNormal:(id)a4 ImageExtendPress:(id)a5;
- (void)numberKeyBoardClicked:(id)a0;
- (void)appendPsw:(id)a0;
- (void)onChange;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)ClearInput;
- (void)SetSalt:(id)a0;
- (unsigned long long)GetInputLen;
- (id)GetRsaEncryptData;
- (id)GetRsa2048EncryptData;
- (id)GetHashData;
- (id)GetSm3HashData;
- (id)GetSM2EncryptData:(long long)a0 timestamp:(unsigned long long)a1 nonce:(id)a2;
- (id)GetSM2EncryptData:(long long)a0 certPem:(id)a1 timestamp:(unsigned long long)a2 nonce:(id)a3 salt:(id)a4;
- (id)GetRsa2048EncryptData:(long long)a0 salt:(id)a1 timestamp:(unsigned long long)a2 nonce:(id)a3;
- (int)getLastError;
- (void).cxx_destruct;

@end
