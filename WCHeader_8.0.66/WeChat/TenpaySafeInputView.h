@class NSString, TenpayDelegate, TenpayKeyboardView, NSData, NSMutableArray;
@protocol TenpaySafeInputViewDelegate;

@interface TenpaySafeInputView : UITextField <UITextFieldDelegate> {
    NSMutableArray *_inputEncData;
    TenpayKeyboardView *_keyboard;
    TenpayDelegate *_dataHandler;
    NSData *_sm4Key;
    NSData *_sm4IV;
    NSString *_szTitle;
    long long _type;
    long long _minInputLen;
    long long _maxInputLen;
    int _gErrorCode;
}

@property (copy, nonatomic) NSString *whiteListCharsSet;
@property (weak, nonatomic) id<TenpaySafeInputViewDelegate> safeViewDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setInputRange:(long long)a0 maxLen:(long long)a1;
- (void)setWhiteListChar:(id)a0;
- (id)text;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)useKeyboard:(long long)a0 imageNumNormal:(id)a1 imageNumPress:(id)a2 imageDelNormal:(id)a3 imageDelPess:(id)a4 imageExtendNormal:(id)a5 imageExtendPess:(id)a6;
- (void)setKeyboardFontColor:(id)a0 bgColor:(id)a1 lineColor:(id)a2;
- (void)numberKeyBoardClicked:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)appendPsw:(id)a0;
- (id)getPsw;
- (void)onChange;
- (void)onReturn;
- (BOOL)textFieldShouldClear:(id)a0;
- (unsigned long long)accessibilityTraits;
- (void)clearInput;
- (unsigned long long)getInputLen;
- (BOOL)checkInputData:(id)a0;
- (void)setInput:(id)a0;
- (id)getEncryptData:(id)a0 extra:(id)a1;
- (id)getHashData:(id)a0;
- (int)getError;
- (void).cxx_destruct;

@end
