@interface ACCCoordTransformUtils : NSObject

+ (struct CGPoint { double x0; double x1; })transformToStickerContainerNormWithNlePoint:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })transformToAbsoluteCoordWithNlePoint:(struct CGPoint { double x0; double x1; })a0 stickerContainer:(id)a1;
+ (struct CGPoint { double x0; double x1; })transformToNlePointWithStickerContainerNorm:(struct CGPoint { double x0; double x1; })a0;
+ (struct CGPoint { double x0; double x1; })transformToNlePointWithAbsoluteCoord:(struct CGPoint { double x0; double x1; })a0 stickerContainer:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transformToStickerContainerNormWithNleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transformToAbsoluteCoordWithNleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stickerContainer:(id)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transformToNleNormWithAbsoluteRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stickerContainer:(id)a1;

@end
