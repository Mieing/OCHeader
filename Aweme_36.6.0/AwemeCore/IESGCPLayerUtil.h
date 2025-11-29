@interface IESGCPLayerUtil : NSObject

+ (void)applyRadiusWithView:(id)a0 radius:(double)a1 corner:(unsigned long long)a2;
+ (void)resetCornersWithView:(id)a0;
+ (void)removeGradientLayerIfNeededWithView:(id)a0;
+ (void)addRoundedCornersWithView:(id)a0 corners:(unsigned long long)a1 radius:(double)a2 viewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (void)applyRoundedCornersWithView:(id)a0 topLeft:(double)a1 topRight:(double)a2 bottomLeft:(double)a3 bottomRight:(double)a4;
+ (void)applyHorizontalGradientWithView:(id)a0 fromColor:(id)a1 toColor:(id)a2 cornerRadius:(double)a3;
+ (void)applyVerticalGradientWithView:(id)a0 fromColor:(id)a1 toColor:(id)a2 cornerRadius:(double)a3;
+ (id)p_dummyLayerWithView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
