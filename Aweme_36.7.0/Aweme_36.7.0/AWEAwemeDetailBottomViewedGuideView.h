@class UIView;

@interface AWEAwemeDetailBottomViewedGuideView : UIView

@property (retain, nonatomic) UIView *overlayView;
@property (retain, nonatomic) UIView *arrowImageView;
@property (retain, nonatomic) UIView *bgView;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (BOOL)isShowing;
+ (void)setShowing:(BOOL)a0;

- (void)startArrowImageAnimating;
- (void)hideWithAllowUserInteraction:(BOOL)a0;
- (id)initWithClickbleBottomHeight:(double)a0;
- (void)showAboveView:(id)a0 dismissBlock:(id /* block */)a1;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
