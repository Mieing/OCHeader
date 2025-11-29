@interface SLIListElementViewCellSizeCache : NSObject

+ (struct CGSize { double x0; double x1; })getPreciseCellSizeForIndex:(long long)a0 atListElementView:(id)a1;
+ (struct CGSize { double x0; double x1; })getEstimatedCellSizeForIndex:(long long)a0 atListElementView:(id)a1;
+ (double)getEstimatedCellMinHeightAtListElementView:(id)a0;
+ (double)getEstimatedCellMinWidthAtListElementView:(id)a0;
+ (void)calculateEstimatedCellSizesAtListElementView:(id)a0;
+ (double)getEstimatedCellMaxHeightAtListElementView:(id)a0;
+ (double)getEstimatedCellMaxWidthAtListElementView:(id)a0;
+ (struct CGSize { double x0; double x1; })calculatePreciseCellSizeForIndex:(long long)a0 atListElementView:(id)a1;
+ (void)cleanCachedSizeForIndex:(long long)a0 atListElementView:(id)a1;
+ (void)recordPreciseCellSize:(struct CGSize { double x0; double x1; })a0 withIndex:(long long)a1 atListElementView:(id)a2;
+ (void)calculateEstimatedCellSizesAtListElementView:(id)a0 withFitSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })calculatePreciseCellSizeForIndex:(long long)a0 atListElementView:(id)a1 withFitSize:(struct CGSize { double x0; double x1; })a2;
+ (void)initialize;

@end
