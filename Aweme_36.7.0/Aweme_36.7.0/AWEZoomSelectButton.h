@class AWEStudioGradientBorderView, UIView;

@interface AWEZoomSelectButton : UIButton

@property (retain, nonatomic) UIView *normalBackgroundView;
@property (retain, nonatomic) AWEStudioGradientBorderView *gradientBackgroundView;

+ (double)backgroundViewHeight;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
