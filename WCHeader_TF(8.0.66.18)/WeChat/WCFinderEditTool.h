@interface WCFinderEditTool : NSObject

+ (struct { long long x0; int x1; unsigned int x2; long long x3; })convectTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
+ (BOOL)needAdjustEditViewLayout;
+ (struct CGSize { double x0; double x1; })editVideoProgressBarImageSize;
+ (double)editVideoHeightWidthRatioMax;
+ (double)editVideoHeightWidthRatioMin;
+ (double)finderEditVideoMaxDuration;
+ (double)finderEditVideoMaxDurationWithVideoDuration:(double)a0;
+ (unsigned long long)finderComposeAtomSizeLen;
+ (double)finderEditVideoMinDuration;
+ (BOOL)useVideoCompositionLib;
+ (id)thumbImageViewWithComposition:(id)a0 videoComposition:(id)a1 atTime:(double)a2;
+ (void)composeVideoWithAssets:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 completion:(id /* block */)a2;
+ (void)composeVideoWithAssets:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 editVideoAttr:(id)a2 needFullVideoEditTimeRange:(BOOL)a3 completion:(id /* block */)a4;
+ (void)composeVideoWithAssets:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 editVideoAttr:(id)a2 needFullVideoEditTimeRange:(BOOL)a3 completion:(id /* block */)a4 useFilledScreenMode:(BOOL)a5;
+ (void)composeVideoWithAssets:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 editVideoAttr:(id)a2 previewMoveDatas:(id)a3 emotionOffSet:(struct CGPoint { double x0; double x1; })a4 cropFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 completion:(id /* block */)a6;
+ (void)composeVideoWithAssets:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 editVideoAttr:(id)a2 previewMoveDatas:(id)a3 emotionOffSet:(struct CGPoint { double x0; double x1; })a4 cropFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a5 completion:(id /* block */)a6 useFilledScreenMode:(BOOL)a7;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })adjustPreferredTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withNaturalSize:(struct CGSize { double x0; double x1; })a1;

@end
