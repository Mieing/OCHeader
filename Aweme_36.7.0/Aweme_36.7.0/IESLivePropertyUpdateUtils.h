@interface IESLivePropertyUpdateUtils : NSObject

+ (void)componentsByColor:(struct CGColor { } *)a0 components:(double[4])a1;
+ (double)updateFloatWithFrom:(double)a0 to:(double)a1 progress:(double)a2;
+ (struct CGPoint { double x0; double x1; })updatePointWithFrom:(struct CGPoint { double x0; double x1; })a0 to:(struct CGPoint { double x0; double x1; })a1 progress:(double)a2;
+ (struct CGSize { double x0; double x1; })updateSizeWithFrom:(struct CGSize { double x0; double x1; })a0 to:(struct CGSize { double x0; double x1; })a1 progress:(double)a2;
+ (void)updateColorWithFrom:(struct CGColor { } *)a0 to:(struct CGColor { } *)a1 progress:(double)a2 onUpdate:(id /* block */)a3;
+ (double)updateNumberWithFrom:(id)a0 to:(id)a1 progress:(double)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })updateRectWithFrom:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 to:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 progress:(double)a2;

@end
