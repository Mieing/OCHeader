@class UIVisualEffectView, UIView, UILabel, UIButton;

@interface AWENavigationBarView : UIView

@property (retain, nonatomic) UIVisualEffectView *blurView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) BOOL useBlurBackground;
@property (retain, nonatomic) UIButton *rightButton;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setupUI;

@end
