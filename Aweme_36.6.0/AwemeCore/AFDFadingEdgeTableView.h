@class UIColor, CAGradientLayer, UIView;

@interface AFDFadingEdgeTableView : UITableView

@property (retain, nonatomic) UIView *topFadeView;
@property (retain, nonatomic) UIView *bottomFadeView;
@property (retain, nonatomic) CAGradientLayer *topGradientLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientLayer;
@property (retain, nonatomic) UIColor *fadingAreaColor;
@property (nonatomic) double fadingAreaHeight;
@property (nonatomic) long long fadingEdges;

- (void)awe_themeReload;
- (void)p_updateFadeViews;
- (id)p_gradientColors;
- (id)p_gradientLocations;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)layoutSubviews;

@end
