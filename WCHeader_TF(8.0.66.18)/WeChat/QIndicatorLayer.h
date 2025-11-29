@interface QIndicatorLayer : CALayer

@property BOOL isDarkStyle;
@property (nonatomic) BOOL showUpIndicator;
@property (nonatomic) BOOL showDownIndicator;

- (void)setDarkMode:(BOOL)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)DrawTopIndicator:(struct CGContext { } *)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;
- (void)DrawBottomIndicator:(struct CGContext { } *)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;

@end
