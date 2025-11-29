@class UILabel, MMMusicFadeOutLayer, CAAnimation;

@interface MMMusicAutoscrollLabelView : UIView

@property (retain, nonatomic) MMMusicFadeOutLayer *fadeOutLayer;
@property (retain, nonatomic) CAAnimation *currentScrollAnim;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL isOpenShadow;
@property (nonatomic) BOOL isOpenMarquee;
@property (nonatomic) BOOL infiniteScrolling;
@property (nonatomic) double scrollBackDelay;
@property (nonatomic) double animationInterval;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)sizeToFit;
- (void)resetAnimationWithFitSize:(struct CGSize { double x0; double x1; })a0;
- (double)getScrollBackDelay;
- (double)getAnimationInterval;
- (void)setCorrectSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
