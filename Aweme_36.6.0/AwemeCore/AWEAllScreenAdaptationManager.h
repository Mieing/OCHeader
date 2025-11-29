@interface AWEAllScreenAdaptationManager : NSObject

+ (unsigned long long)allScreenCropOptimizeStyleWithModel:(id)a0;
+ (id)parsePositionWithModel:(id)a0;
+ (BOOL)isBlackEdgeVideoWithModel:(id)a0;
+ (BOOL)isStaticBlurFrameSelectScoreExceedThreshold:(id)a0;
+ (unsigned long long)newCropOptimizeStyleWithModel:(id)a0;
+ (id)parseFrameSelectScoreWithModel:(id)a0;
+ (void)trackAdaptionInterceptInfoWithModel:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })OCRHighValueBoxWithModel:(id)a0;
+ (BOOL)shouldAdaptAllScreenWithModel:(id)a0;

@end
