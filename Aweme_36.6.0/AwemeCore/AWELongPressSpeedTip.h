@class LOTAnimationView, UIImageView, UILabel, MASConstraint;

@interface AWELongPressSpeedTip : UIView

@property (retain, nonatomic) LOTAnimationView *animationView;
@property (retain, nonatomic) UIImageView *lockImage;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) MASConstraint *bottomTextViewXLeft;
@property (retain, nonatomic) MASConstraint *bottomTextViewXMiddle;

- (void)setShowStyle:(long long)a0;
- (void)updateAnimationViewWithType:(long long)a0;
- (void)updateTipColorWhenReach:(BOOL)a0;
- (void)setShowIconStyle:(long long)a0 text:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
