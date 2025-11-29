@class UIImageView, UILabel, UIView;

@interface AWELandingPageUserGuideView : UIView

@property (retain, nonatomic) UIView *gradientBgView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *descLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
