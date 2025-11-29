@class CJPayFixKeyboardView;

@interface CJPayCVVInputView : UITextField

@property (retain, nonatomic) CJPayFixKeyboardView *keyboardView;
@property (nonatomic) long long maxCount;
@property (copy, nonatomic) id /* block */ didChangeBlock;

- (void)p_inputNumber:(long long)a0;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
