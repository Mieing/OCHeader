@interface IESMMMediaSizeUtil : NSObject

+ (struct CGSize { double x0; double x1; })getSizeWithSourceSize:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (BOOL)issourceSize:(struct CGSize { double x0; double x1; })a0 exceedLimitWithTargetSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })getUpscaletoSize:(struct CGSize { double x0; double x1; })a0 withSourceSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGPoint { double x0; double x1; })relativePointFromRectToRect:(struct CGPoint { double x0; double x1; })a0 srcFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dstFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMaxInsideCenterRect:(double)a0 boundary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGPoint { double x0; double x1; })relativePointFromScreenToFrame:(struct CGPoint { double x0; double x1; })a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGSize { double x0; double x1; })getSizeWithSourceSizeUp:(struct CGSize { double x0; double x1; })a0 targetSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })getBrushUpscaleSizeWithSourceSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getMinOutsideCenterRect:(double)a0 boundary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
+ (struct CGPoint { double x0; double x1; })relativePointFromScreenToCenterFrame:(struct CGPoint { double x0; double x1; })a0 frameRatio:(double)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })relativeRectFromRectToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 srcSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 dstSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGSize { double x0; double x1; })getScaletoSize:(struct CGSize { double x0; double x1; })a0 withSourceSize:(struct CGSize { double x0; double x1; })a1;

@end
