@interface ACCCinemaModeCanvasStateUtils : NSObject

+ (long long)contentModeWithMediaContentSize:(struct CGSize { double x0; double x1; })a0;
+ (long long)contentModeWithMediaContentRatio:(double)a0;
+ (struct CGSize { double x0; double x1; })sizeOfContent:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })realStickerContainerPlayerFrameWithPublishModel:(id)a0;
+ (struct CGSize { double x0; double x1; })miniWHRatioContentSizeWithPublishModel:(id)a0 has9to16WHRatio:(BOOL *)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })standPlayerFrameFor9To16;
+ (double)maxStandPlayerHeight;
+ (double)miniStandPlayerTopHeight;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })originalPlayerFrameWithPublishModel:(id)a0;
+ (double)miniStandPlayerBottomHeight;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })standPlayerFrameWithPublishModel:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editPlayerFrameWithPublishModel:(id)a0;
+ (struct CGSize { double x0; double x1; })editCanvasSizeWithContentSize:(struct CGSize { double x0; double x1; })a0 standCanvasSize:(struct CGSize { double x0; double x1; })a1 standPlayerSize:(struct CGSize { double x0; double x1; })a2;

@end
