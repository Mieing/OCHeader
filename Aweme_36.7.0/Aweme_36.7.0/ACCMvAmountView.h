@class UIFont, NSString, UIColor, UILabel;

@interface ACCMvAmountView : UIView

@property (retain, nonatomic) UILabel *amountLabel;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIFont *amountLabelFont;
@property (retain, nonatomic) UIColor *textColor;

+ (id)usageAmountString:(unsigned long long)a0;

- (void)clearBackGroundColorAndPadding;
- (void).cxx_destruct;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
