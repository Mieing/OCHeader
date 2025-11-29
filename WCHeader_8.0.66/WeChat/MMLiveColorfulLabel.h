@class UIColor;

@interface MMLiveColorfulLabel : UILabel

@property (retain, nonatomic) UIColor *fromColor;
@property (retain, nonatomic) UIColor *middleColor;
@property (retain, nonatomic) UIColor *toColor;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearAllGradientColors;
- (void)configWithColorHexArray:(id)a0 fallbackColor:(id)a1;
- (void).cxx_destruct;

@end
