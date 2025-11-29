@class NSString, CAKAlbumViewController, ACCExtractAbilityManager;

@interface ACCAlbumPreloadExtension : ACCAlbumExtension

@property (weak, nonatomic) CAKAlbumViewController *albumController;
@property (weak, nonatomic) ACCExtractAbilityManager *extractManager;
@property (retain, nonatomic) NSString *taskID;
@property (nonatomic) BOOL didFirstRenderFinished;
@property (nonatomic) BOOL didHandleSingleModePreload;
@property (nonatomic) BOOL enablePreload;
@property (nonatomic) unsigned long long currentVcType;

- (void)albumDidShowViewController:(id)a0;
- (double)videoSize:(id)a0;
- (BOOL)albumExtensionShouldBeLoaded:(id)a0;
- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void)albumDidSelectAssetes:(id)a0 targetAsset:(id)a1;
- (void)albumDidDeleteAssetFromBottomView:(id)a0;
- (void)albumDidLoadPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidDeselectAsset:(id)a0;
- (void)albumDidSwitchMultiSelectStatus:(BOOL)a0;
- (void)handleSingleModePreloadIfNeed;
- (void)tarotPreloadAssetHandler:(id)a0;
- (void)trackSingleModeUserChooseAlbumWithAssetModel:(id)a0;
- (void)tarotCancelPreloadAssetHandler:(id)a0;
- (void)cancelPreLoadAssetsHandler:(id)a0;
- (void)processFrameAndFeaturePreload:(id)a0;
- (void)CAKFMLSyncProgressWithModel:(id)a0;
- (long long)imageSize:(id)a0;
- (void)albumDidFinishFirstRender:(id)a0;
- (void)cancelAllPreLoadAssets;
- (void)albumDidClickNextButton:(id)a0;
- (id /* block */)successVideoHandler:(id)a0 startTime:(double)a1;
- (id /* block */)failureVideoHandler:(id)a0;
- (id /* block */)successImageHandler:(id)a0 startTime:(double)a1;
- (id /* block */)failureImageHandler:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
