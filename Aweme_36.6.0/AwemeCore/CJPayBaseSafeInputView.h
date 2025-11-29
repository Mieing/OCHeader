@class NSString, NSMutableString, CJPaySafeKeyboard, CJPayFixKeyboardView;

@interface CJPayBaseSafeInputView : UITextField <UITextFieldDelegate>

@property (retain, nonatomic) CJPaySafeKeyboard *safeKeyBoard;
@property (retain, nonatomic) CJPayFixKeyboardView *boardFixView;
@property (nonatomic) long long viewStyle;
@property (retain, nonatomic, setter=setContentText:) NSMutableString *contentText;
@property (copy, nonatomic) id /* block */ completeBlock;
@property (copy, nonatomic) id /* block */ changeBlock;
@property (copy, nonatomic) id /* block */ deleteBlock;
@property (nonatomic) long long numCount;
@property (nonatomic) BOOL allowPaste;
@property (nonatomic) BOOL allowBecomeFirstResponder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)getFixKeyBoardHeight;
- (void)deleteBackWord;
- (void)inputNumber:(long long)a0;
- (void)setIsNotShowKeyboardSafeguard:(BOOL)a0;
- (void)setKeyboardDenoise:(unsigned long long)a0;
- (id)initWithKeyboard:(BOOL)a0;
- (void)setupKeyBoard;
- (id)initWithKeyboardForDenoise:(BOOL)a0 denoiseStyle:(long long)a1;
- (id)initWithKeyboardForDenoise:(BOOL)a0;
- (void)clearInput;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)insertText:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
