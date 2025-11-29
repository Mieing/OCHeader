@class UILabel, LOTAnimationView;

@interface AWEFeedPicoVRGuideView : UIView

@property (nonatomic) long long type;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (nonatomic) BOOL willDismiss;
@property (copy, nonatomic) id /* block */ dismissedBlock;

- (id)tipText;
- (id)lottieName;
- (void)initSubviews;
- (void)dismiss;
- (void).cxx_destruct;
- (void)play;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)initConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 type:(long long)a1;

@end
