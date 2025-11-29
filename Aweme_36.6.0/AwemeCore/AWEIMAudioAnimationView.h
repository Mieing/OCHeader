@class CAShapeLayer, AWEIMAudioAnimationViewConfig, UIView;

@interface AWEIMAudioAnimationView : UIView

@property (nonatomic) BOOL animating;
@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) CAShapeLayer *circle;
@property (retain, nonatomic) CAShapeLayer *curveLayer1;
@property (retain, nonatomic) CAShapeLayer *curveLayer2;
@property (retain, nonatomic) AWEIMAudioAnimationViewConfig *config;
@property (copy, nonatomic) id /* block */ tapBlock;

- (void)iesim_themeReload:(id)a0;
- (void)p_resetColor;
- (void)p_setupThemeDynamicConfig;
- (id)p_lineShapeLayerWithWidth:(double)a0 center:(struct CGPoint { double x0; double x1; })a1 radius:(double)a2;
- (void)p_setupUI;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (id)initWithConfig:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
