@interface AFDFastSpeedMaskLayer : NSObject

+ (id)drawOvalWithPoints:(struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGPoint { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; struct CGPoint { double x0; double x1; } x5; struct CGPoint { double x0; double x1; } x6; })a0;
+ (id)createLeftMaskLayerWithWidth:(double)a0 height:(double)a1;
+ (id)createRightMaskLayerWithWidth:(double)a0 height:(double)a1;

@end
