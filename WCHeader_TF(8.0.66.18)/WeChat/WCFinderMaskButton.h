@class MMBadgeView, UIView;

@interface WCFinderMaskButton : MMUIButton

@property (retain, nonatomic) UIView *maskBGView;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) MMBadgeView *redDotView;
@property (nonatomic) BOOL shouldShowRedDot;

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
