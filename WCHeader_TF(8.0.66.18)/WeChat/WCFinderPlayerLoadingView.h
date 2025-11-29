@class MMGradientView;

@interface WCFinderPlayerLoadingView : UIView

@property (retain, nonatomic) MMGradientView *lineView;
@property (nonatomic) BOOL stopAnimatingFlag;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)startAnimation;
- (void)_startAnimation;
- (void)stopAnimation;
- (BOOL)isAnimating;
- (void).cxx_destruct;

@end
