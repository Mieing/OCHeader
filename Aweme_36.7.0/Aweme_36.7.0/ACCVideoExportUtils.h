@interface ACCVideoExportUtils : NSObject

+ (BOOL)isAssetsSupportFastImport:(id)a0;
+ (struct CGSize { double x0; double x1; })exportVideoSizeWithProject:(id)a0 isPublish:(BOOL)a1;
+ (struct CGSize { double x0; double x1; })videoSizeForPublishModel:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;
+ (struct CGSize { double x0; double x1; })videoSizeForVideoData:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1 forceUseSourceScale:(BOOL)a2 baseScale:(double)a3 isRecord:(BOOL)a4 diff:(id)a5;
+ (struct CGSize { double x0; double x1; })videoSizeForVideoData:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1 forceUseSourceScale:(BOOL)a2 baseScale:(double)a3 isRecord:(BOOL)a4;
+ (unsigned long long)p_totalRotateWithVideoData:(id)a0;
+ (unsigned long long)p_rotateWithAVAsset:(id)a0 videoData:(id)a1;
+ (struct CGSize { double x0; double x1; })videoSizeForPublishModel:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1 usePublishState:(BOOL)a2;
+ (struct CGSize { double x0; double x1; })videoSizeForVideoData:(id)a0 suggestedSize:(struct CGSize { double x0; double x1; })a1;

@end
