@class NSString, LOTAnimationView, UILabel, UIView;

@interface AWEPOIVRSwipeGuideView : UIView

@property (retain, nonatomic) UIView *leftBackgroundView;
@property (retain, nonatomic) UIView *rightBackgroundView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (nonatomic) BOOL willDismiss;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)dismiss;
- (void).cxx_destruct;
- (void)play;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1;

@end
