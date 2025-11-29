@class UIColor, CAShapeLayer;

@interface AWEIMShapeView : UIView

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) UIColor *strokeColor;
@property (copy, nonatomic) id /* block */ geometryDidChangedBlock;

+ (Class)layerClass;

- (void)iesim_themeReload:(id)a0;
- (void)p_setupThemeDynamicConfig;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
