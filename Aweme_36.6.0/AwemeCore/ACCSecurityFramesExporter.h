@interface ACCSecurityFramesExporter : NSObject

+ (id)securityExportQueue;
+ (void)p_exportFramesForSystemLivePhotoVideoWithPublishModel:(id)a0 scene:(id)a1 awemeId:(id)a2 completion:(id /* block */)a3;
+ (void)p_exportFramesForTakePhotoWithPublishModel:(id)a0 scene:(id)a1 awemeId:(id)a2 completion:(id /* block */)a3;
+ (void)p_exportFramesForRecordVideoWithPublishModel:(id)a0 scene:(id)a1 awemeId:(id)a2 completion:(id /* block */)a3;
+ (void)p_exportFramesForUploadVideoWithPublishModel:(id)a0 scene:(id)a1 awemeId:(id)a2 context:(id)a3 completion:(id /* block */)a4;
+ (void)exportFramesWithAssets:(id)a0 videoData:(id)a1 restrictDurationArr:(id)a2 frameType:(unsigned long long)a3 publishModel:(id)a4 scene:(id)a5 completion:(id /* block */)a6;
+ (BOOL)isInvalideFragmentInfoInModel:(id)a0;
+ (BOOL)isInvalideFragmentAssetPathInModel:(id)a0;
+ (void)uploadVideoFallbackTracker:(BOOL)a0 invalidFragment:(BOOL)a1 publishModel:(id)a2;
+ (void)exportFramesWithFragment:(id)a0 publishModel:(id)a1 scene:(id)a2 awemeId:(id)a3 context:(id)a4 completion:(id /* block */)a5;
+ (id)p_fileURLWithString:(id)a0;
+ (void)accessPathTrackerURL:(id)a0 isVideo:(BOOL)a1 success:(BOOL)a2 publishModel:(id)a3;
+ (unsigned long long)p_frameTypeForVideoDataWithPublishModel:(id)a0;
+ (void)p_exportFramesWithExportModel:(id)a0 publishModel:(id)a1 scene:(id)a2 awemeId:(id)a3 context:(id)a4 completion:(id /* block */)a5;
+ (void)exportVideoFramesWithPublishModel:(id)a0 scene:(id)a1 awemeId:(id)a2 context:(id)a3 completion:(id /* block */)a4;
+ (void)exportCustomStickerFramesWithPublishModel:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)exportPropsFramesWithPublishModel:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)exportBrushFramesWithPublishModel:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)exportVideoCoverFramesWithPublishModel:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)exportShareCommentFramesWithPublishModel:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (void)exportPicTemplateImageFramesWithPublishModel:(id)a0 scene:(id)a1 completion:(id /* block */)a2;
+ (id)p_extractInputDataFromImage:(id)a0 usePNG:(BOOL)a1;

@end
