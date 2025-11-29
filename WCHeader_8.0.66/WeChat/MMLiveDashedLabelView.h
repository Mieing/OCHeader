@class UIFont, NSString, UIView, MMUILabel;

@interface MMLiveDashedLabelView : UIView

@property (retain, nonatomic) UIView *leftDash;
@property (retain, nonatomic) UIView *rightDash;
@property (retain, nonatomic) MMUILabel *label;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSString *text;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
