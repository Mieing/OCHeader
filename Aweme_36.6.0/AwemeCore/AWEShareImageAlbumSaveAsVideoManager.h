@class NSString;

@interface AWEShareImageAlbumSaveAsVideoManager : NSObject <ACCImageAlbumSaveAsVideoManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableSaveImageAlbumToVideoWithAweme:(id)a0;
+ (void)pureSaveImageAlbumToVideoWithAweme:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;
+ (void)saveRealLivePhotoWithAlbumImageModel:(id)a0 aweme:(id)a1 needWaterMark:(BOOL)a2 waterMarkConfig:(id)a3 completion:(id /* block */)a4;
+ (void)saveRealLivePhotoAsVideoWithAlbumImageModel:(id)a0 aweme:(id)a1 needWaterMark:(BOOL)a2 waterMarkConfig:(id)a3 music:(id)a4 completion:(id /* block */)a5;
+ (void)generateLivePhotoVideoDataWithVideo:(id)a0 image:(id)a1 aweme:(id)a2 needWaterMark:(BOOL)a3 waterMarkConfig:(id)a4 music:(id)a5 publishModel:(id)a6 isReedit:(BOOL)a7 completion:(id /* block */)a8;
+ (struct CGSize { double x0; double x1; })outputSizeWithFileURL:(id)a0;
+ (void)pollTrackImportQuality:(id)a0;
+ (void)p_logErrorWithError:(id)a0 msg:(id)a1;
+ (void)p_downloadMusicWithMusic:(id)a0 then:(id /* block */)a1;
+ (void)p_logInfoWithMsg:(id)a0;
+ (id)saveImageAlbumToVideoWithImageAlbumPublishModel:(id)a0 isSilentTask:(BOOL)a1 updateSourceModel:(id /* block */)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
+ (id)saveLivePhotoToVideoWithPublishModel:(id)a0 isSilentTask:(BOOL)a1 updateSourceModel:(id /* block */)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)pureSaveImageAlbumToVideoWithAweme:(id)a0 enterFrom:(id)a1 latestImageModels:(id)a2 completion:(id /* block */)a3;
+ (void)updateAllClipVideoImageModelsWithAweme:(id)a0 completion:(id /* block */)a1;
+ (id)p_contextPool;
+ (void)p_trackDownloadStatusWithContext:(id)a0 error:(id)a1 isStart:(BOOL)a2 isCancel:(BOOL)a3;
+ (void)p_handlerTaskDoneWithContext:(id)a0;
+ (void)p_runFetchAllResourcesStageWithContext:(id)a0;
+ (void)p_checkPhotoLibraryPermissionThen:(id /* block */)a0;
+ (void)p_reMarkAIGCWaterMarkUesPublishModelFrom:(id)a0 to:(id)a1;
+ (void)p_runExportAndSaveStageWithContext:(id)a0;
+ (void)updateWithNeedUpdatedImageAlbumImageModels:(id)a0 clipVideoImageModels:(id)a1;
+ (BOOL)isVideoFormatWithAlbumImageModel:(id)a0;
+ (void)loadClipsIfNeedWithItemID:(id)a0 needLoadClipVideoModels:(id)a1 completion:(id /* block */)a2;
+ (void)requestClipsWithItemID:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
+ (void)p_downloadImageAbumClipsWithPublishModel:(id)a0 albumList:(id)a1 draftId:(id)a2 isMixedSlides:(BOOL)a3 imageSizeRecorder:(id /* block */)a4 then:(id /* block */)a5;
+ (void)p_exportImageAbumDataForMultiProjectsWithContext:(id)a0 completion:(id /* block */)a1;
+ (void)p_exportImageAbumData:(id)a0 to:(id)a1 completion:(id /* block */)a2;
+ (void)p_runGenerateMixedSlidesDataWithContext:(id)a0;
+ (void)p_runGenerateMVEditDataStageWithContext:(id)a0;
+ (void)p_runGenerateCanvansEditDataStageWithContext:(id)a0;
+ (void)p_setupForLVAudioFrameWithPublishModel:(id)a0 isMV:(BOOL)a1 editService:(id)a2 then:(id /* block */)a3;
+ (void)p_updateMusicWithPublishModel:(id)a0 editService:(id)a1 completion:(id /* block */)a2;
+ (void)p_downloadAndSaveWithAlbumModel:(id)a0 toFilePath:(id)a1 needSaveVideo:(BOOL)a2 completion:(id /* block */)a3;
+ (void)p_downloadAIGCImageWithURL:(id)a0 filePath:(id)a1 completion:(id /* block */)a2;
+ (void)p_downloadNormalImageWithURLs:(id)a0 filePath:(id)a1 completion:(id /* block */)a2;
+ (BOOL)livePhotoAddWatermarkAfterMergeEnabled;
+ (void)generateLivePhotoVideoDataWithMusicDurationLoop:(id)a0;
+ (void)generateLivePhotoVideoDataWithOriginalMethod:(id)a0;
+ (void)addTransitionEffectsToMainVideo:(id)a0 nleModel:(id)a1 needMergeImage:(BOOL)a2 loopCount:(long long)a3;
+ (double)livePhotoTransitionEffectDuration;
+ (void)saveImageAlbumToVideoWithAweme:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;


@end
