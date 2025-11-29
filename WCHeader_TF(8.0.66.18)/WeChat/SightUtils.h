@interface SightUtils : NSObject

+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 orientation:(long long)a1;
+ (id)imageFromImageBuffer:(struct __CVBuffer { } *)a0 orientation:(long long)a1;
+ (double)useAlgorithmCheckNonBlackFrameTimeStamp:(id)a0;
+ (id)originSizeThumbForVideoWithPath:(id)a0;
+ (id)originSizeThumbForVideoWithPath:(id)a0 nonBlackFrame:(BOOL)a1 inTime:(double)a2;
+ (id)originSizeThumbForVideoWithPath:(id)a0 atTime:(double)a1 isTimeTolerance:(BOOL)a2;
+ (id)unBlackFrameCoverForVideoWithPath:(id)a0 atTimeStart:(double)a1 untilTimeEnd:(double)a2;
+ (id)thumbForVideoWithPath:(id)a0;
+ (id)newThumbForVideoWithPath:(id)a0;
+ (id)thumbForVideoWithAsset:(id)a0;
+ (id)generateImageFromVideoURL:(id)a0 withStartTime:(double)a1 endTime:(double)a2 actualOffsetRef:(double *)a3 enableUndersampling:(BOOL)a4 enableBlackAvoiding:(BOOL)a5;
+ (BOOL)detectImageBlack:(id)a0;
+ (BOOL)detectImagePureColor:(id)a0;
+ (id)thumbForVideoWithAsset:(id)a0 atTime:(double)a1;
+ (id)thumbForVideoWithPath:(id)a0 atTimeStart:(double)a1 untilTimeEnd:(double)a2;
+ (BOOL)shouldResizeVideoThumbWithSize:(struct CGSize { double x0; double x1; })a0;
+ (BOOL)shouldResizeVideoThumbImage:(id)a0;
+ (id)resizeVideoThumb:(id)a0;
+ (id)generateVideoThumbImageWithAsset:(id)a0 atTime:(double)a1;
+ (id)generateVideoThumbImageWithAsset:(id)a0 atTime:(double)a1 isTimeTolerance:(BOOL)a2;
+ (BOOL)isVideoPlayableForPath:(id)a0;
+ (BOOL)isVideoPlayableForURL:(id)a0;
+ (BOOL)generateThumbImageFromVideo:(id)a0 toThumbImage:(id)a1;
+ (BOOL)shouldUpdateThumbImageWithSightVideoPath:(id)a0 thumbImagePath:(id)a1;
+ (BOOL)isThumbImage:(id)a0 matchVideo:(id)a1;
+ (struct CGSize { double x0; double x1; })videoFrameSizeWithVideo:(id)a0;
+ (BOOL)isH265VideoByPath:(id)a0;
+ (BOOL)isH266VideoByPath:(id)a0;
+ (void)ConvertHevcToH264:(id)a0 outputPath:(id)a1 block:(id /* block */)a2;
+ (BOOL)isH265VideoByAsset:(id)a0;
+ (BOOL)isProResVideoWithAsset:(id)a0;
+ (double)syncGetDurationWithPath:(id)a0;

@end
