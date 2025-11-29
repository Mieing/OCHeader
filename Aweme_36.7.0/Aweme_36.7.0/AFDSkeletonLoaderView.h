@class UIColor, CAGradientLayer, CAMediaTimingFunction, UIView;

@interface AFDSkeletonLoaderView : UIView

@property (retain, nonatomic) UIView *highlightView;
@property (retain, nonatomic) CAGradientLayer *highlightGradientLayer;
@property (nonatomic) BOOL animating;
@property (nonatomic) double barWidth;
@property (nonatomic) double period;
@property (nonatomic) double interval;
@property (nonatomic) long long direction;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;

+ (id)defaultColor;

- (void)awe_themeDidChange:(long long)a0;
- (void)p_onApplicationDidBecomeActive:(id)a0;
- (void)p_refreshMask;
- (void)p_refreshGradient;
- (void)p_refreshLayout;
- (id)p_animation;
- (void)p_appendPathsFromView:(id)a0 toPath:(id)a1;
- (void)refreshSkeletonViews;
- (void)stopAnimating;
- (void)startAnimating;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)dealloc;

@end
