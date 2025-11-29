@class ACCCanvasAdaptor;

@interface AWEAlbumStudioViewModel : AWEAlbumDefaultViewModel

@property (retain, nonatomic) ACCCanvasAdaptor *canvasAdaptor;

+ (Class)aACCMidVideoCreationProtocolClass;

- (BOOL)shouldShowAssetsInReverseOrderForAlbumViewController:(id)a0;
- (id)configClipInputData:(id)a0 withRepoContainer:(id)a1;
- (void)present:(id)a0 animated:(BOOL)a1;
- (id)initWithInputData:(id)a0;
- (long long)iCloudCountWith:(id)a0;
- (BOOL)isAllLivePhotoAssets:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)goToNextWithMultiSelect:(BOOL)a0 collectionSectionModel:(id)a1 assets:(id)a2;
- (void)goToNextWithMultiSelect:(BOOL)a0;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (void)handlePhotosImportCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2;
- (id)aACCMidVideoCreationProtocol;
- (void)resetLivePhotoStatusIfNeeded:(id)a0;
- (BOOL)supportSlidesImportWithAssets:(id)a0;
- (long long)livePhotoCountInAssets:(id)a0;
- (BOOL)isInfiniAllowed;
- (id)p_commonVideoTrackInfoWithAssetArr:(id)a0 trackAsset:(id)a1;
- (void)convertShortVideoToImages;
- (void)applyLivePhotoDecisionWithContext:(id)a0 multiAssets:(BOOL)a1;
- (unsigned long long)willEnterEditPageModeWith:(id)a0 isMultiSelect:(BOOL)a1 contextParams:(id)a2;
- (BOOL)infiniNeedFetch:(id)a0;
- (void)p_goToNextWithMultiSelect:(BOOL)a0 publishViewModel:(id)a1 selectedAssets:(id)a2 isAIMemories:(BOOL)a3;
- (void)fetchLocationiInfo:(id)a0;
- (void)handleAIClipCompletion:(id)a0 repoContainer:(id)a1 clipInputData:(id)a2 error:(id)a3;
- (void)handleLivePhotoCompletion:(id)a0 repoContainer:(id)a1 context:(id)a2 error:(id)a3;
- (void)handleVideosImportCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2;
- (void)handleLivePhoto2VideoCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2;
- (void)handleSlidesWithCompletion:(id)a0 repoContainer:(id)a1 error:(id)a2;
- (void)trackNextClick:(id)a0 withMode:(unsigned long long)a1 publishModel:(id)a2 withMultiSelect:(BOOL)a3;
- (void)present:(id)a0 animated:(BOOL)a1 scene:(id)a2;
- (void)livePhotoExceptionModeWithResults:(id)a0 repoContainer:(id)a1 error:(id)a2;
- (BOOL)p_isAIClipByAsset:(id)a0 contextParams:(id)a1;
- (BOOL)isLivePhotoModeAllowed:(id)a0;
- (id)getNextPageForTrackWithInputData:(id)a0 FinalAssets:(id)a1 contextParams:(id)a2;
- (void)trackAIClipNextClick:(id)a0;
- (void)trackNormalNextClick:(id)a0 withMode:(unsigned long long)a1 publishModel:(id)a2 withMultiSelect:(BOOL)a3;
- (id)customAlbumViewForFriendsDaily;
- (id)getGeneratePlaceHolderAssets;
- (void)trackToolPerformanceAlbumNextWithMulti:(BOOL)a0 inputData:(id)a1 finalAssets:(id)a2 contextParams:(id)a3;
- (void).cxx_destruct;
- (id)footerTitle;

@end
