@class CAGradientLayer, DUXBasicButton;

@interface AWEAIOriginalAskView : UIView

@property (retain, nonatomic) DUXBasicButton *button;
@property (retain, nonatomic) CAGradientLayer *bgLayer;
@property (nonatomic) double horizontalPadding;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupUI;

@end
