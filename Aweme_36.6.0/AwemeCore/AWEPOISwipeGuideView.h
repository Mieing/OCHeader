@class UILabel, NSString, LOTAnimationView;

@interface AWEPOISwipeGuideView : UIView

@property (retain, nonatomic) UILabel *tipsLabel;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) LOTAnimationView *animationView;
@property (nonatomic) BOOL willDismiss;
@property (nonatomic) unsigned long long direction;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 direction:(unsigned long long)a1 customText:(id)a2;
- (void)initSubviews;
- (void)dismiss;
- (void).cxx_destruct;
- (void)play;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)initConstraints;
- (id)animationName;

@end
