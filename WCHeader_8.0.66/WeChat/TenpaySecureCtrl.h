@class UIView, TPIDKeyboardView, TenpayDelegate;
@protocol TenpaySecureCtrlDelegate;

@interface TenpaySecureCtrl : UITextField {
    TenpayDelegate *_dataHandler;
    unsigned long long _maxInputLen;
    UIView *_keyboard;
    TPIDKeyboardView *_iPadKeyboard;
}

@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } selectedRange;
@property (weak, nonatomic) id<TenpaySecureCtrlDelegate> ctrlDelegate;
@property (nonatomic) BOOL bFormatBankCard;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onReturn;
- (void)onChange;
- (void)dealloc;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)text;
- (unsigned long long)GetInputLen;
- (void)SetMaxInputLen:(int)a0;
- (void)AppendString:(id)a0;
- (void)SetKeyboardNumFontColor:(id)a0 bgColor:(id)a1 lineColor:(id)a2;
- (void)SetKeyboardNumFontColor:(id)a0 bgColor:(id)a1;
- (void)setKeyboradOrientation:(long long)a0;
- (void)UseKeyboardWithX:(BOOL)a0 ImageNumNormal:(id)a1 ImageNumPress:(id)a2 ImageDelNormal:(id)a3 ImageDelPess:(id)a4;
- (void)UseKeyboardWithX:(BOOL)a0 ImageNumNormal:(id)a1 ImageNumPress:(id)a2 ImageDelNormal:(id)a3 ImageDelPess:(id)a4 ImageExtendNormal:(id)a5 ImageExtendPress:(id)a6;
- (void)numberKeyBoardTouchDown:(id)a0;
- (void)numberKeyBoardTouchTouchCancel:(id)a0;
- (void)numberKeyBoardClicked:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)GetVersion;
- (long long)GetInputInfo;
- (void)SetSalt:(id)a0;
- (void)SelectRsaKey:(int)a0;
- (void)ClearInput;
- (id)GetRsaEncryptData;
- (id)GetRsa2048EncryptData;
- (id)GetSM2EncryptData:(long long)a0 timestamp:(unsigned long long)a1 nonce:(id)a2;
- (id)Get3DesEncryptData;
- (id)GetSm4EncryptData;
- (BOOL)isPhoneNum;
- (BOOL)isBankCardNum;
- (BOOL)isUserIDNum;
- (BOOL)isAreaIDCardNum:(long long)a0;
- (void)setDefaultValue:(id)a0;
- (void)setFilterChar:(id)a0;
- (void)setWhiteListChar:(id)a0;
- (void)p_syncShowTextToDataHandler;
- (void).cxx_destruct;

@end
