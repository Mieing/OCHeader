@class NSLock, NSMutableDictionary;

@interface EditVideoLogicController : MMObject {
    NSMutableDictionary *_dicEditAsset;
    NSLock *_lock;
}

+ (void)videoComposition:(id)a0 withAttr:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)finderVideoCompositionWithAVAsset:(id)a0 paths:(id)a1 assets:(id)a2 attr:(id)a3 completionHandler:(id /* block */)a4;
+ (id)finderVideoCompositionWithVideoComposition:(id)a0 originVideoPaths:(id)a1 attr:(id)a2 emotionOffset:(struct CGPoint { double x0; double x1; })a3 completionHandler:(id /* block */)a4;
+ (long long)adjustLenToEven:(double)a0;
+ (struct CGSize { double x0; double x1; })adjustSizeToEvenSize:(struct CGSize { double x0; double x1; })a0;
+ (void)videoCompositionAtPath:(id)a0 andThumbImage:(id)a1 withAttr:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)saveEditedThumbImageWithAsset:(id)a0 requestUneditedAsset:(BOOL)a1 editAttr:(id)a2 completionBlock:(id /* block */)a3;
+ (void)__imageCompositionWithAsset:(id)a0 withDefaultImg:(id)a1 withAttr:(id)a2 toFilePath:(id)a3;
+ (void)__imageCompositionWithAsset:(id)a0 toFilePath:(id)a1 defaultImg:(id)a2 overlayImage:(id)a3 cropTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a4;
+ (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })getTransformFromAsset:(id)a0;
+ (id)getParamsForEntranceType:(unsigned long long)a0 withAsset:(id)a1 naturalSize:(struct CGSize { double x0; double x1; })a2 extraInfo:(id)a3;
+ (void)NewVideoComposition:(id)a0 withAttr:(id)a1 withCompletionHandler:(id /* block */)a2;
+ (void)finderNewVideoCompostionWithAvAsset:(id)a0 inputUrl:(id)a1 path:(id)a2 andThumbImage:(id)a3 withAttr:(id)a4 originalVideoPaths:(id)a5 mmAssets:(id)a6 withCompletionHandler:(id /* block */)a7;
+ (void)NewVideoCompostionWithAvAsset:(id)a0 inputUrl:(id)a1 path:(id)a2 andThumbImage:(id)a3 withAttr:(id)a4 originalVideoPaths:(id)a5 mmAssets:(id)a6 withCompletionHandler:(id /* block */)a7;
+ (void)__NewVideoBGMCompositionWithAsset:(id)a0 inputPath:(id)a1 withAttr:(id)a2 withExportPath:(id)a3 originalVideoPaths:(id)a4 mmAssets:(id)a5 withCompletionHandler:(id /* block */)a6;
+ (void)checkUseSWTranscoding:(unsigned long long)a0 avAsset:(id)a1 withAttr:(id)a2 pathNum:(unsigned long long)a3 assetsNum:(unsigned long long)a4 isVCEdit:(BOOL)a5 VideoEncodeParams:(id)a6 isUsingMAV:(BOOL)a7;
+ (void)__NewVideoCompositionWithAsset:(id)a0 inputPath:(id)a1 withAttr:(id)a2 withExportPath:(id)a3 originalVideoPaths:(id)a4 mmAssets:(id)a5 withCompletionHandler:(id /* block */)a6;
+ (id)genAdjustVideoCompositionWithAsset:(id)a0 attr:(id)a1 param:(id)a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewFrameWithVideoSize:(id)a0;
+ (struct CGSize { double x0; double x1; })adjustRenderSize:(struct CGSize { double x0; double x1; })a0;
+ (void)adjustAudioBitrate:(id)a0 params:(id)a1;
+ (id)adaptiveBitrateAdjustment:(id)a0 assets:(id)a1 attr:(id)a2 scene:(unsigned long long)a3 videoEncodeParams:(id)a4 isEdited:(BOOL)a5 enableABA:(BOOL)a6;
+ (id)adaptiveBitrateAdjustment:(id)a0 urls:(id)a1 attr:(id)a2 scene:(unsigned long long)a3 isEdited:(BOOL)a4 enableABA:(BOOL)a5 videoEncodeParams:(id)a6;
+ (BOOL)canSkipCompressForEncodeScene:(unsigned long long)a0;
+ (void)configureMMAssetExportSession:(id)a0 forEncodeScene:(unsigned long long)a1;
+ (id)compressInformationsOfVideoWithParams:(id)a0;
+ (void)reportVideoCompressionResult:(BOOL)a0 scene:(unsigned long long)a1;
+ (void)reportVideoCompressionFailedInfoWithOutputPath:(id)a0 inputPath:(id)a1 entranceType:(unsigned long long)a2 resultError:(id)a3 reportInfo:(id)a4;
+ (void)reportVideoCompressionInfoWithOutputPath:(id)a0 inputPath:(id)a1 compressionTime:(double)a2 params:(id)a3 entranceType:(unsigned long long)a4 videoScoreParams:(id)a5 resultError:(id)a6 scene:(unsigned long long)a7 reportInfo:(id)a8;
+ (unsigned long long)composeSceneFromSightPickerScene:(unsigned long long)a0;
+ (id)startMAVVideoCompositionWithMMAsset:(id)a0 avAsset:(id)a1 avAssetUrl:(id)a2 attr:(id)a3 completionHandler:(id /* block */)a4;
+ (id)_realStartMAVVideoCompositionWithAsset:(id)a0 inputPath:(id)a1 attr:(id)a2 exportPath:(id)a3 originalVideoPaths:(id)a4 mmAssets:(id)a5 videoEncodeTaskParams:(id)a6 completionHandler:(id /* block */)a7;
+ (void)adjustAnimationToolIfNeeded:(id)a0 attr:(id)a1 videoSize:(struct CGSize { double x0; double x1; })a2;
+ (void)adjustDebugParams:(id)a0 forScene:(unsigned long long)a1;

- (id)init;
- (id)modifyAsset:(id)a0 withEditImageAttr:(id)a1 withEditedTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a2;
- (id)modifyAsset:(id)a0 withEditVideoAttr:(id)a1;
- (void)removeEditedAsset:(id)a0;
- (id)getEditVideoAttr:(id)a0;
- (void).cxx_destruct;

@end
