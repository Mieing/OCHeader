@interface ACCStickerUtils : NSObject

+ (BOOL)isValidRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGPoint { double x0; double x1; })transformToAbsoluteCoordWithNormPoint:(struct CGPoint { double x0; double x1; })a0 stickerContainer:(id)a1;
+ (struct CGPoint { double x0; double x1; })transformToNormCoordWithAbsolutePoint:(struct CGPoint { double x0; double x1; })a0 stickerContainer:(id)a1;
+ (struct CGSize { double x0; double x1; })transformToAbsoluteCoordWithNormSize:(struct CGSize { double x0; double x1; })a0 stickerContainer:(id)a1;
+ (struct CGSize { double x0; double x1; })transformToNormCoordWithAbsoluteSize:(struct CGSize { double x0; double x1; })a0 stickerContainer:(id)a1;
+ (void)applyScale:(double)a0 toLayer:(id)a1;
+ (id)convertStickerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContainerCoordinateSystem:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (id)convertStickerViewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromContainerCoordinateSystem:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toPlayerCoordinateSystem:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (BOOL)stickerView:(id)a0 containsPoint:(struct CGPoint { double x0; double x1; })a1 gesture:(id)a2;
+ (struct CGPoint { double x0; double x1; })anchorDiffWithCenterOfView:(id)a0;

@end
