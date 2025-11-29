@class NSString;

@interface AWEAIGCUGCFusionUtils : NSObject <AWEAIGCUGCFusionUtilsProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowLawViewController;
+ (void)showLawViewControllerWithConfirmBlock:(id /* block */)a0 didDismissBlock:(id /* block */)a1;
+ (void)bachCheckWithAsset:(id)a0 filePath:(id)a1 completionBlock:(id /* block */)a2;
+ (BOOL)shouldUploadSingleOriginalImage:(id)a0;
+ (id)buildUploadOriginalResourcesFromResourceList:(id)a0;
+ (BOOL)shouldRemoveTaskAfterRemoveLoadingPage:(id)a0;
+ (id)getOriginRelativePath:(id)a0;
+ (BOOL)shouldConsumeOriginalRawImageFromQueryForA2BTransition;
+ (BOOL)isAIGCUGCNeedA2BTransitionScene:(id)a0;
+ (BOOL)shouldTriggerA2BTransitionOptimize:(id)a0;
+ (BOOL)sideslipEnableRefetch:(id)a0;
+ (BOOL)shouldRecoverVolumeAfterRemoveLoading:(id)a0;
+ (id)referenceVideoExpConfig;
+ (id)referenceVideoTypeHintTextFromType:(id)a0;
+ (BOOL)isAIGCUGCFusionRepoAIGCHitAB:(id)a0;
+ (BOOL)shouldInspirationUseAICreationUIStyle;
+ (void)uploadReferenceVideoAndImagesWithExportResult:(id)a0 imagePaths:(id)a1 uploadSchedulerReceiveBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)requestAuthorizationWithActionBlock:(id /* block */)a0 denyBlock:(id /* block */)a1 requestedActionBlock:(id /* block */)a2 allowLimited:(BOOL)a3;
+ (unsigned long long)aigcUGCFusionCreationToolsMediaTypeWithText:(id)a0;
+ (void)chooseMultiMediaFromAlbumWithConfig:(id)a0;
+ (void)chooseMediaFromAlbumWithPublishViewModel:(id)a0 extraDictionary:(id)a1 imageCompletionBlock:(id /* block */)a2 videoCompletionBlock:(id /* block */)a3 beforePreviewBlock:(id /* block */)a4 requestedAuthorizationActionBlock:(id /* block */)a5 enterBlock:(id /* block */)a6 dismissBlock:(id /* block */)a7 beforeAlbumDismissCompletionBlock:(id /* block */)a8;
+ (BOOL)isAIGCSupportUniformEffectSideslip:(id)a0;
+ (BOOL)shouldCancelAutoSelectMusicWithPublishViewModel:(id)a0;
+ (BOOL)enableAIMateNoDraftWithTaskInfo:(id)a0;
+ (void)handleTaskInfoWithTaskInfo:(id)a0 rawOriginalImagesAbsolutePaths:(id)a1 rawOriginalVideosAbsolutePaths:(id)a2 completionBlock:(id /* block */)a3;
+ (BOOL)isAIGCUGCNeedImage2VideoTransitionSceneWithRepository:(id)a0;
+ (BOOL)sideslipCreationVideoEnableRefetch:(id)a0;
+ (id)getOriginAbsolutePath:(id)a0;
+ (id)getResultAbsolutePath:(id)a0;
+ (id)getOriginVideoRelativePathWithRepository:(id)a0;
+ (id)getResultVideoAbsolutePathWithRepository:(id)a0;
+ (BOOL)isAIGCUGCFusionEffectGeneratePhotoWithAllImageExist:(id)a0;
+ (BOOL)isLegacyEffectNeedInsertSideslipForEffectRender:(id)a0;
+ (BOOL)sideslipCreationPicEnableRefetch:(id)a0;
+ (id)getAIGCUGCFusionCommonID;
+ (BOOL)sideslipCreationVideoEnableRefetch:(id)a0 needServerKey:(BOOL)a1;
+ (BOOL)isNonUGCFusionVideoEffectOrLivePhotoOrLora:(id)a0;
+ (void)chooseReferenceMediaFromAlbumWithPublishViewModel:(id)a0 extraDictionary:(id)a1 imageCompletionBlock:(id /* block */)a2 videoCompletionBlock:(id /* block */)a3 beforePreviewBlock:(id /* block */)a4 albumDismissCompletionBlock:(id /* block */)a5 enterBlock:(id /* block */)a6 beforeAlbumDismissCompletionBlock:(id /* block */)a7;
+ (BOOL)mediaShouldReplaceAssetWithPublishViewModel:(id)a0 targetAsset:(id)a1;
+ (id)formatSecondsToString:(double)a0;
+ (void)videoBachCheckWithAVasset:(id)a0 videoIdentifier:(id)a1 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 completionBlock:(id /* block */)a4;
+ (void)bachCheckAddLoadingWithAsset:(id)a0 filePath:(id)a1 completionBlock:(id /* block */)a2;
+ (void)exportVideoFramesWithAsset:(id)a0 startTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 endTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 completion:(id /* block */)a3;
+ (struct CGSize { double x0; double x1; })limitedFrameSizeWithoutRotation:(id)a0;
+ (id)convert16BitImagesTo8Bit:(id)a0;
+ (id)convertSingleImage16BitTo8Bit:(id)a0;
+ (void)innerChooseReferenceMultiMediaFromAlbumWithConfig:(id)a0;
+ (void)handleChooseVideoCompletionWithAlbum:(id)a0 assetLists:(id)a1 chooseAlbumConfig:(id)a2;
+ (void)handleChooseImagesCompletionWithAlbum:(id)a0 assetLists:(id)a1 chooseAlbumConfig:(id)a2;
+ (void)batchBachCheckAddLoadingWithAsset:(id)a0 completionBlock:(id /* block */)a1;
+ (void)serialBachCheckWithAsset:(id)a0 currentIndex:(long long)a1 totalCount:(long long)a2 singleFailBlock:(id /* block */)a3 singleSuccessBlock:(id /* block */)a4 totalSuccessBlock:(id /* block */)a5;
+ (BOOL)isAIGCUGCEdit:(id)a0;
+ (BOOL)needShieldAIGCTemplate:(id)a0;
+ (id)getRecommendEffectModel:(id)a0;
+ (id)getRecommendEffectModelForLegacyEffect:(id)a0;
+ (id)getOriginImageRelativePathWithRepository:(id)a0;
+ (BOOL)isHitEditDownloadWatermarkWithPublishModel:(id)a0;
+ (BOOL)isHitEditDownloadVideoWatermarkWithPublishModel:(id)a0;
+ (BOOL)hasWatermarkLivephotoDataWithPublishModel:(id)a0;
+ (BOOL)hasWatermarkVideoDataWithPublishModel:(id)a0;
+ (BOOL)isCommonAndPicWithPublishModel:(id)a0;
+ (BOOL)isCommonUGCFusionEffectWithPublishModel:(id)a0;


@end
