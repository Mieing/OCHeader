@interface ACCViewUtils : NSObject

+ (void)acc_applyRadiusToView:(id)a0 radius:(double)a1 atCorners:(unsigned long long)a2;
+ (void)acc_recursiveApplyRadiusToView:(id)a0 radius:(double)a1 atCorners:(unsigned long long)a2;
+ (void)p_applyLayerRadius:(double)a0 withLayer:(id)a1 atCorners:(unsigned long long)a2;
+ (void)p_recursiveApplyRadius:(double)a0 atCorners:(unsigned long long)a1 toLayer:(id)a2 coordinateView:(id)a3;
+ (unsigned long long)p_getCornerWithRadius:(double)a0 originCorners:(unsigned long long)a1 relativeRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 cordinateLayer:(id)a3;

@end
