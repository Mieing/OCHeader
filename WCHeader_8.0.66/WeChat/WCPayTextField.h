@class UIView;

@interface WCPayTextField : UITextField

@property (retain, nonatomic) UIView *largeAmountTips;
@property (nonatomic) BOOL hasFocus;
@property (nonatomic) unsigned int showBit;
@property (nonatomic) double tipsOffsetY;
@property (nonatomic) double tipsOffsetX;
@property (nonatomic) unsigned long long scene;
@property BOOL clearBackground;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)textFieldDidChange;
- (void)showBitView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)a0;
- (unsigned long long)getAmount;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;

@end
