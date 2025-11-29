@class NSString, ACCCanvasAdaptor;
@protocol ACCMVTemplateManagerProtocol;

@interface AWEAlbumDefaultViewModel : AWEAlbumBaseViewModel

@property (retain, nonatomic) NSString *convertTaskId;
@property (nonatomic) BOOL isMultiLivePhoto;
@property (copy, nonatomic) id /* block */ convertAssetModelsCompletion;
@property (copy, nonatomic) id /* block */ prepareAIVideoClipPrerequisiteCompletion;
@property (retain, nonatomic) id<ACCMVTemplateManagerProtocol> mvTemplateManager;
@property (retain, nonatomic) ACCCanvasAdaptor *canvasAdaptor;

+ (Class)aACCMidVideoCreationProtocolClass;

- (BOOL)shouldShowAssetsInReverseOrderForAlbumViewController:(id)a0;
- (id)p_getLivePhotoRequestOptions;
- (void)present:(id)a0 animated:(BOOL)a1;
- (id)initWithInputData:(id)a0;
- (void)trackNextEvent:(id)a0 isMultiSelect:(BOOL)a1;
- (BOOL)checkSlidesAssetsCountWithAsset:(id)a0;
- (BOOL)checkSlidesDurationWhenSelectAsset:(id)a0;
- (long long)iCloudCountWith:(id)a0;
- (BOOL)isAllLivePhotoAssets:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)goToNextWithMultiSelect:(BOOL)a0;
- (void)trackSelectAsset:(id)a0 fromPreview:(BOOL)a1;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (void)updateBottomNextButtonWithButton:(id)a0 fromPreview:(BOOL)a1;
- (void)handlePhotosImportCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2;
- (id)aACCMidVideoCreationProtocol;
- (void)resetLivePhotoStatusIfNeeded:(id)a0;
- (void)requestVideoForAsset:(id)a0 completion:(id /* block */)a1;
- (void)optimizeInputData:(id)a0;
- (BOOL)p_isAIClipByAsset:(id)a0;
- (void)trackToolPerformanceAlbumNextWithMulti:(BOOL)a0 inputData:(id)a1 finalAssets:(id)a2;
- (void)p_nextForMultiAssetsPixaloop:(id)a0;
- (void)p_nextForAIClipAppendWithFetchedAssets:(id)a0;
- (void)p_nextForAIClipWithFetchedAssets:(id)a0;
- (void)p_nextForPhotoToVideo:(id)a0 isMultiSelect:(BOOL)a1;
- (void)p_nextForSelectVideoCompletionWithAssetArray:(id)a0;
- (void)p_nextForSelectPhotoCompletion:(id)a0;
- (void)p_nextForStoryPhotoWithAsset:(id)a0;
- (void)p_nextForStoryVideoWithAssetArray:(id)a0;
- (BOOL)supportSlidesImportWithAssets:(id)a0;
- (BOOL)p_isAIClip;
- (BOOL)shouldSelectIntoSlidesWihtAsset:(id)a0;
- (void)updateBottomNextButtonForJingXuanWithButton:(id)a0 fromPreview:(BOOL)a1;
- (void)updateButtonTittleInsert:(id)a0;
- (BOOL)enableSizeAdjustForNextButton:(id)a0 fromPreview:(BOOL)a1;
- (void)p_adjustBtnIfNeeded:(id)a0;
- (long long)livePhotoCountInAssets:(id)a0;
- (void)p_trackerUploadNextEventWithLabel:(id)a0;
- (BOOL)isInfiniAllowed;
- (void)p_handleImageAlbumModePublishWithAssets:(id)a0;
- (void)p_handleSelectedAssetsWithPhotoToVideo:(id)a0 completion:(id /* block */)a1;
- (void)handleNext:(id)a0 isMultiSelect:(BOOL)a1;
- (void)handleLivePhotoNext:(id)a0 isMultiSelect:(BOOL)a1;
- (void)handleMultiLivePhotoNext:(id)a0 isMultiSelect:(BOOL)a1;
- (BOOL)isVcTypeSupportImportIntoSlides;
- (void)handleLivePhotoCompletion:(id)a0 repoContainer:(id)a1 isMultiSelect:(BOOL)a2 error:(id)a3;
- (void)handleLivePhotoException:(id)a0 isMultiSelect:(BOOL)a1;
- (void)livePhotoExceptionModeWithResults:(id)a0 repoContainer:(id)a1 isMultiSelect:(BOOL)a2 error:(id)a3;
- (void)p_fetchAssetsFinishedForAIClip:(id)a0;
- (void)handleStoryPhotoNextInInfiniWithAssetModel:(id)a0;
- (void)handleStoryPhotoNextWithAssetModel:(id)a0;
- (id)p_commonVideoTrackInfoWithAssetArr:(id)a0 trackAsset:(id)a1;
- (void)handleTarotCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2;
- (void)handleAssetsForAIClip:(id)a0;
- (void)handleMultiImportisInfini:(id)a0 taskId:(id)a1 createId:(id)a2 convertId:(id)a3;
- (void)handleAIClipCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2;
- (void)openAIVideoClipViewControllerSourceAssetArray:(id)a0 musicList:(id)a1 taskID:(id)a2 createID:(id)a3 convertID:(id)a4 initialError:(id)a5 completion:(id /* block */)a6;
- (BOOL)isNeedSceneForTrackInputData:(id)a0 finalAssets:(id)a1;
- (id)getNextPageForTrackWithInputData:(id)a0 FinalAssets:(id)a1;
- (void)updateACCMusicForPublishModelWithMusic:(id)a0;
- (BOOL)p_isOnePhoto;
- (void).cxx_destruct;
- (id)footerTitle;

@end
