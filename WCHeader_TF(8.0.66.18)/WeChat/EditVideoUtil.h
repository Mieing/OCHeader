@interface EditVideoUtil : MMObject

+ (void)asyncGetInformationOfVideoWithPath:(id)a0 completionBlock:(id /* block */)a1;
+ (void)asyncGetInformationOfVideoWithAsset:(id)a0 completionBlock:(id /* block */)a1;
+ (void)asyncGetInformationStrOfVideoWithAsset:(id)a0 completionBlock:(id /* block */)a1;
+ (id)infomationStrWithParamsResult:(id)a0;
+ (id)getEditVideoTmpDir;
+ (id)getAssetTmpDirByUrl:(id)a0;
+ (id)getEditVideoFilePathByUrl:(id)a0;
+ (id)getEditVideoThumbFilePathByUrl:(id)a0;
+ (BOOL)isNeedSaveEditedVideo;
+ (void)saveEditedVideoByFilePath:(id)a0;
+ (void)saveEditedVideoByFilePath:(id)a0 withResultBlock:(id /* block */)a1;
+ (id)genVideoCompositionWithVideoPath:(id)a0 avAsset:(id)a1 attr:(id)a2 targetSize:(struct CGSize { double x0; double x1; })a3;
+ (id)genVideoCompositionWithVideoPath:(id)a0 avAsset:(id)a1 attr:(id)a2;
+ (BOOL)isSearchMusicAfterInputEnabled;
+ (id)genVideoCompositionOutputConfigWithVideoEncodeParams:(id)a0 videoCompositionAttr:(id)a1 videoComposition:(id)a2 VideoEncodeTaskParams:(id)a3;
+ (id)genAnimationToolWithAttr:(id)a0 videoSize:(struct CGSize { double x0; double x1; })a1 isForceCreate:(BOOL)a2;
+ (id)genAnimationToolWithOverlayLayer:(id)a0 videoSize:(struct CGSize { double x0; double x1; })a1 isProportionalScale:(BOOL)a2;
+ (BOOL)isBackgroundTaskEnabled;
+ (BOOL)isMavEncodeTaskKeepsProcessInBackgroundEnabled;
+ (BOOL)isMavEncodeTaskAutoRetryEnabled;
+ (BOOL)isVideoAssetFileValid:(id)a0;
+ (BOOL)isMusicRecommendUsingMass;
+ (BOOL)MAV_forceCreateAnimationToolForHDRAsset;
+ (BOOL)MAV_canSoftEncodeOverlayLayerBGMAsset;
+ (void)recordObject:(id)a0 timeOffset:(double)a1;
+ (void)resetLyricsLayerTimeOffsetRecursive:(id)a0;
+ (void)resetLyricsLayersTimeOffset:(id)a0;

@end
