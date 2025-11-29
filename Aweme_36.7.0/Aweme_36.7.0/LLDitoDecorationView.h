@class UIImageView, CAGradientLayer, LLDitoStyle;

@interface LLDitoDecorationView : UIView

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) BOOL isIgnoreRadius;
@property (nonatomic) BOOL isIgnoreBorder;
@property (retain, nonatomic) LLDitoStyle *decorationStyle;

- (void)configImage:(id)a0;
- (BOOL)checkPointInvalidWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 nodeType:(unsigned long long)a1;
- (void)updateDecorationView:(id)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)configWithNodeMode:(unsigned long long)a0;
- (void)configGradientLayer:(id)a0;
- (void)configBorder:(id)a0;
- (id)parseColor:(id)a0 withStyle:(id)a1;
- (double)gradientLocationLength:(unsigned long long)a0;
- (void)updateDecorationView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;

@end
