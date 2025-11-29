@class AWEMVExportSession, ACCCutSameMattingManager, AWEDealWithServerPhotoManager, ACCCutsameAutoFillFrameManager;
@protocol ACCMusicModelProtocol;

@interface AWEAlbumMVCutSameViewModel : AWEAlbumBaseViewModel

@property (retain, nonatomic) AWEDealWithServerPhotoManager *manager;
@property (retain, nonatomic) AWEMVExportSession *mvExportSession;
@property (retain, nonatomic) id<ACCMusicModelProtocol> originalFromMusic;
@property (nonatomic) long long retryCount;
@property (retain, nonatomic) ACCCutSameMattingManager *mattingManager;
@property (retain, nonatomic) ACCCutsameAutoFillFrameManager *autoFillFrameManager;
@property (nonatomic) BOOL isMultiSelection;
@property (nonatomic) double startPickTimestamp;
@property (nonatomic) double firstSelectionTimestamp;

+ (Class)aAWEStudioDouyinLiteAdapterClass;

- (id)initWithInputData:(id)a0;
- (BOOL)validAssetModelForVideo:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)goToNextWithMultiSelect:(BOOL)a0;
- (BOOL)checkValidForAssetModel:(id)a0;
- (void)trackSelectAsset:(id)a0 fromPreview:(BOOL)a1;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (void)updateBottomNextButtonWithButton:(id)a0 fromPreview:(BOOL)a1;
- (void)didSelectAlbumAsset:(id)a0 withViewController:(id)a1 sourceType:(long long)a2;
- (id)p_hintForMVAlgorithm:(id)a0;
- (void)p_preDownloadMVMusicWithMusicId:(id)a0;
- (void)nextActionForCutSame:(id)a0;
- (void)p_nextForMV:(id)a0;
- (BOOL)isServerGamePlayTemplate;
- (BOOL)isLocalGamePlayTemplate;
- (BOOL)p_checkVideoValidForCutSame:(id)a0;
- (void)handleAssetsForCutSame:(id)a0;
- (BOOL)p_checkEnableCutSame;
- (void)p_cutSameStraightToEditWithSelectedAssets:(id)a0;
- (BOOL)p_checkEnableCutSameChangeMaterialVC;
- (void)p_toCutSameChangeMaterialVCWithSelectedAssets:(id)a0 completion:(id /* block */)a1;
- (void)jumpToPreviewWithImportAssets:(id)a0;
- (id)aAWEStudioDouyinLiteAdapter;
- (void)handleMVExportWithTemplate:(id)a0 selectedAssets:(id)a1 completion:(id /* block */)a2;
- (void)p_toMVNormalStyle:(id)a0 selectedAssets:(id)a1 completion:(id /* block */)a2;
- (void)p_MVJumpToEditPageWithModel:(id)a0 mvOutputModel:(id)a1 videoData:(id)a2;
- (void)p_dismissLoadingAndShowMVGenerateError:(id)a0 templateModelId:(id)a1;
- (void)configMVWithPublishModel:(id)a0 UserResources:(id)a1 mvMode:(id)a2 templateEffectModel:(id)a3 enterVideoEditorBlock:(id /* block */)a4;
- (unsigned long long)cartoonTypeForFragmentWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)clearCache;
- (id)footerTitle;

@end
