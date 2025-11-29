@interface AWEPublishShareManager : NSObject

+ (BOOL)videoHasDescriptionMetadata:(id)a0;
+ (void)removeDesMetadataWithVideoURL:(id)a0 cacheDirPath:(id)a1 removeSrc:(BOOL)a2 completion:(id /* block */)a3;
+ (void)savePublishedAwemeIfNeeded:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (void)sharePublishedAwemeIfNeeded:(id)a0 publishModel:(id)a1;
+ (void)saveVideoIfNeededWithURL:(id)a0 metadata:(id)a1 outputURL:(id)a2 saveToAlbum:(BOOL)a3 needsURLAsset:(BOOL)a4 copyToSandbox:(BOOL)a5 completion:(id /* block */)a6;
+ (void)getAlbumWithName:(id)a0 completion:(id /* block */)a1;
+ (void)saveMetadataWithVideoURL:(id)a0 outputURL:(id)a1 data:(id)a2 completion:(id /* block */)a3;
+ (void)trackWatermarkShareDownloadEventWithAweme:(id)a0 platform:(id)a1 enterFrom:(id)a2 actionType:(id)a3 hasWatermark:(BOOL)a4 hasEndWatermark:(BOOL)a5;
+ (void)saveAwemeIfNeeded:(id)a0 publishModel:(id)a1 resources:(id)a2 completion:(id /* block */)a3;
+ (void)addAIWatermarkToResourcesIfNeeded:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (id)hasSingRenderImagePathWithPublishModel:(id)a0;
+ (id)saveToAlbumResourcesWithPublishViewModel:(id)a0;
+ (void)addLivePhotoWaterMarkWithPath:(id)a0 watermarkConfig:(id)a1 publishModel:(id)a2 completion:(id /* block */)a3;
+ (void)saveVideoIfNeededWithURL:(id)a0 saveToAlbum:(BOOL)a1 needsURLAsset:(BOOL)a2 copyToSandbox:(BOOL)a3 completion:(id /* block */)a4;
+ (void)modifyMetadateIfNeededWithVideoURL:(id)a0 publishModel:(id)a1 completion:(id /* block */)a2;
+ (void)muteAwemeIfNeeded:(id)a0 withVideoURL:(id)a1 publishModel:(id)a2 completion:(id /* block */)a3;
+ (void)configTranscodeParams:(id)a0 videoData:(id)a1;
+ (BOOL)fillAutoCaptionTemplateMeta:(id)a0 withPublishModel:(id)a1;
+ (void)trackSaveMetaInfoWith:(id)a0 fromVideo:(BOOL)a1;
+ (BOOL)addDetailLogOptimize;
+ (void)p_saveVideoInAlbumIfNeededWithURL:(id)a0 needsURLAsset:(BOOL)a1 sandboxURL:(id)a2 awemeAlbum:(id)a3 completion:(id /* block */)a4;
+ (BOOL)isLivePhoto:(id)a0 imageResource:(id)a1 videoResource:(id)a2;
+ (void)saveAwemeIfNeeded:(id)a0 publishModel:(id)a1 videoURLs:(id)a2 completion:(id /* block */)a3;
+ (void)saveLivePhotoWithVideoFilePath:(id)a0 imageFilePath:(id)a1 livePhotoImagePosition:(double)a2 metadata:(id)a3 completion:(id /* block */)a4;

@end
