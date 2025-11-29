@class MMBadgeView, UIView;

@interface WCFinderMaskButton : MMUIButton

@property (retain, nonatomic) UIView *maskBGView;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) MMBadgeView *redDotView;
@property (nonatomic) BOOL shouldShowRedDot;

- (void)removeFromSuperview;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)sendSubviewToBack:(id)a0;
- (void)bringSubviewToFront:(id)a0;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)setMaskViewBackgroundColor:(id)a0;
- (void)makeMaskViewAdjustSuperviewLayerCorners;
- (void)setHighlighted:(BOOL)a0;
- (void)_showRedDot;
- (void)_hideRedDot;
- (void)updateRedDotShowType:(unsigned long long)a0;
- (void)layoutSubviews;
- (void)layoutRedDot;
- (void).cxx_destruct;

@end
