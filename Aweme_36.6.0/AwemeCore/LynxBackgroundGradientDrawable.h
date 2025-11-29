@class CAReplicatorLayer, CAGradientLayer, LynxGradient;

@interface LynxBackgroundGradientDrawable : LynxBackgroundDrawable

@property (retain, nonatomic) LynxGradient *gradient;
@property (retain, nonatomic) CAReplicatorLayer *horizontalRepeatLayer;
@property (retain, nonatomic) CAReplicatorLayer *verticalRepeatLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;

- (void)onDraw:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)onPrepareGradientWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)handleBackgroundRepeat:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 size:(const struct CGSize { double x0; double x1; } *)a1 height:(double)a2 width:(double)a3 offsetX:(double)a4 offsetY:(double)a5;
- (void)prepareGradientWithBorderBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andPaintBox:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 andClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void).cxx_destruct;
- (BOOL)isReady;
- (unsigned long long)type;
- (BOOL)isGradient;

@end
