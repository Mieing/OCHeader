@class NSString, WCAdIconView, UIImageView, UILabel, CALayer;

@interface WCAdClickBarView : MMUIView

@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long iconType;
@property (retain, nonatomic) WCAdIconView *iconView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) CALayer *animationLayer;
@property (nonatomic) BOOL stopArrorAnimation;
@property (nonatomic) double selfOriginX;
@property (nonatomic) double iconViewOriginX;
@property (nonatomic) double titleViewOriginX;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andIconType:(long long)a1 title:(id)a2;
- (void)initAnimationLayer;
- (void)layerInAnimation;
- (void)layerOutAnimation;
- (id)createAnimationLayer;
- (void)initViews;
- (void)showViewsAnimation;
- (void)setViewProperty:(id)a0 alpha:(double)a1 left:(double)a2 hidden:(BOOL)a3;
- (void)doArrowShowAnimation;
- (void)doArrowHideAnimation;
- (void)showClickBar;
- (void)hideClickBar;
- (void)hideViewsAnimation;
- (void)resetArrowPosition;
- (void)resetAnimationLayerPosition;
- (void)dealloc;
- (void).cxx_destruct;

@end
