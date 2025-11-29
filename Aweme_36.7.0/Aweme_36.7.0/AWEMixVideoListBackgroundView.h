@class UIImageView, UILabel, UIView;

@interface AWEMixVideoListBackgroundView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *mainLabel;
@property (retain, nonatomic) UILabel *subLabel;
@property (retain, nonatomic) UIView *containerView;

- (void)switchToBackgroundType:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
