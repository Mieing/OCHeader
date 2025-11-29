@interface LynxUIUnitUtils : NSObject

+ (double)roundPtToPhysicalPixel:(double)a0;
+ (void)roundRectToPhysicalPixelGrid:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0;
+ (void)roundInsetsToPhysicalPixelGrid:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a0;
+ (void)roundToPhysicalPixel:(double *)a0;
+ (double)screenScale;

@end
