@class MMBadgeView, UIButton;

@interface MMBarItemCustomView : UIView

@property (retain, nonatomic) MMBadgeView *badgeView;
@property (retain, nonatomic) UIButton *barButton;
@property (nonatomic) BOOL showRedDot;
@property (nonatomic) long long badgeValue;
@property (nonatomic) long long alignBadgRightMargin;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } extendTouchEdges;

- (void)removeFromSuperview;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)updateRedDotView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)addBarItemButton:(id)a0;
- (void).cxx_destruct;

@end
