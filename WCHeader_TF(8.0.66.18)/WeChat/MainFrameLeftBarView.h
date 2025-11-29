@class UIColor, NSString, UIImageView, UILabel, UIView;

@interface MainFrameLeftBarView : MMBarItemCustomView <CAAnimationDelegate>

@property (nonatomic) BOOL resumeAnimateAtMoveToWindow;
@property (nonatomic) BOOL isEducateAnimating;
@property (weak, nonatomic) UIView *navTitleView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *educationLabel;
@property (retain, nonatomic) UIColor *iconTintedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)playShakeAnimation;
- (void)prepareForEducationAnimation;
- (void)playEducationAnimation:(id)a0;
- (void)_playScaleColorAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)didMoveToWindow;
- (void).cxx_destruct;

@end
