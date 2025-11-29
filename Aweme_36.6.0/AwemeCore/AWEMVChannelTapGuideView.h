@class LOTAnimationView, UILabel, UIView;

@interface AWEMVChannelTapGuideView : UIView

@property (retain, nonatomic) LOTAnimationView *imageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL isShowing;

- (void)removeSelf;
- (void)showAnimation;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
