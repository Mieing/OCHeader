@interface IESIMStickerUtils : NSObject

+ (struct CGSize { double x0; double x1; })getGiphyAdaptedPtSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })getEfficientGiphySize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })getNewAdjustedGiphySize:(struct CGSize { double x0; double x1; })a0;
+ (double)giphyConstScale;
+ (struct CGSize { double x0; double x1; })getGiphyAdaptedPxSize:(struct CGSize { double x0; double x1; })a0;
+ (double)giphyMinSize;
+ (double)giphyMaxSize;
+ (void)p_rescaleWithLonger:(double *)a0 shorter:(double *)a1 min:(double)a2 max:(double)a3;

@end
