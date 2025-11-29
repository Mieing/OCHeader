@interface TingTaskBarSimpleContainerView : UIView

- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
