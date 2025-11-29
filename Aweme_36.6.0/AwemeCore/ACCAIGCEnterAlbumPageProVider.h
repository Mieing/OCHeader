@class UIImageView, UIViewController, AWEAssetsCropAndClipManager;
@protocol ACCOpenAlbumAssetsProtocol, ACCRecordPropService, CAKAlbumViewControllerProtocol;

@interface ACCAIGCEnterAlbumPageProVider : NSObject

@property (retain, nonatomic) UIImageView *screenImageView;
@property (nonatomic) BOOL istrack;
@property (retain, nonatomic) id<ACCOpenAlbumAssetsProtocol> openAlbumAssetsProtocol;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (copy, nonatomic) id /* block */ completeShootBlock;
@property (nonatomic) BOOL bachAlgorithmRunning;
@property (retain, nonatomic) AWEAssetsCropAndClipManager *cropAndClipManager;
@property (retain, nonatomic) UIViewController *fullscreenCropVC;
@property (weak, nonatomic) id<CAKAlbumViewControllerProtocol> albumVC;

+ (id)sharedManager;

- (void)handleDismissIntermediatePageNotification:(id)a0;
- (void)openAlbumAndCreationType:(long long)a0 isFromType:(long long)a1 publishViewModel:(id)a2 extensionDic:(id)a3 enterBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5;
- (void)enterEditorPagefilePaths:(id)a0 publishViewModel:(id)a1 completion:(id /* block */)a2;
- (void)creatAlbumIsFromType:(long long)a0 publishViewModel:(id)a1 extensionDic:(id)a2 enterBlock:(id /* block */)a3 dismissBlock:(id /* block */)a4;
- (void)creatCreationisFromType:(long long)a0 publishViewModel:(id)a1 extensionDic:(id)a2 enterBlock:(id /* block */)a3 dismissBlock:(id /* block */)a4;
- (void)enterEditorPageWithPublishViewModel:(id)a0 localImagePaths:(id)a1 enterBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;
- (BOOL)shouldAddILASDKExtension;
- (id)handleAlbumAIGCSyncTrackDicIsFromType:(long long)a0 effectModel:(id)a1 publishViewModel:(id)a2;
- (id)cameraCustomCellConfigisFromType:(long long)a0 publishViewModel:(id)a1 extensionDic:(id)a2;
- (void)handleCompleteSelectionHandler:(id)a0 assets:(id)a1 publishViewModel:(id)a2 extensionDic:(id)a3 fromLoraPage:(BOOL)a4;
- (void)checkSelectedImageIfNeededWithPublishModel:(id)a0 asset:(id)a1 filePath:(id)a2 extensionDic:(id)a3 completionBlock:(id /* block */)a4;
- (BOOL)shouldEnterAIGCUGCFusionPageWithExtensionDic:(id)a0;
- (void)enterAIGCUGCFusionPageWithPublishViewModel:(id)a0 extensionDic:(id)a1 asset:(id)a2 filePath:(id)a3;
- (void)multiStyleCheckAssets:(id)a0;
- (void)handleMultiHandler:(id)a0 assets:(id)a1 publishViewModel:(id)a2;
- (void)handleMixAssertHandler:(id)a0 assets:(id)a1 publishViewModel:(id)a2;
- (BOOL)isMainshoot:(id)a0;
- (void)asyncWaySelectedAssetsHandler:(id)a0 assets:(id)a1 fromPublishViewModel:(id)a2;
- (void)addScreenSnapshotViewToUIWindow;
- (void)removeScreenSnapshotViewToUIWindow;
- (id)p_storeRenderImageWithImageData:(id)a0 withName:(id)a1 publishViewModel:(id)a2;
- (void)handleVideoInfo:(id)a0 effectModel:(id)a1 isLivePhoto:(BOOL)a2 nextStep:(id /* block */)a3;
- (void)jumpClipVideoWithStaticImageURL:(id)a0 effectModel:(id)a1 assetSize:(struct CGSize { double x0; double x1; })a2 processAsset:(id)a3 videoDuration:(double)a4 isLivePhoto:(BOOL)a5 nextStep:(id /* block */)a6;
- (void)showCropOnFullscreenVC;
- (void)dismissFullscreenVCAndCropView;
- (void)openCreationisFromType:(long long)a0 publishViewModel:(id)a1 extensionDic:(id)a2 fromViewController:(id)a3;
- (id)handleCreationAIGCSyncTrackDicIsFromType:(long long)a0 effectModel:(id)a1 publishViewModel:(id)a2;
- (void)handleResultisFromType:(long long)a0 publishViewModel:(id)a1 extensionDic:(id)a2 context:(id)a3 creationData:(id)a4 uiControlHandler:(id)a5 fromViewController:(id)a6;
- (void)syncToUnityAIGCPropPreProcessModelfilePaths:(id)a0 publishViewModel:(id)a1;
- (BOOL)checkBlockAIGCUGCFusionCreateBodySelectionIfNeededWithPublishModel:(id)a0 bachCheckModel:(id)a1;
- (BOOL)cehckBachResultForAIFollowShoot:(id)a0 checkModel:(id)a1 resultImage:(id)a2;
- (void)trackNotPortraitToastShow:(id)a0;
- (void)openAlbumAndCreationType:(long long)a0 isFromType:(long long)a1 publishViewModel:(id)a2 extensionDic:(id)a3 dismissBlock:(id /* block */)a4;
- (void)openEditPageByImportAssets:(id)a0 creationType:(long long)a1 isFromType:(long long)a2 publishViewModel:(id)a3 extensionDic:(id)a4 completion:(id /* block */)a5;
- (void)openEditPageBySingleImagePaths:(id)a0 creationType:(long long)a1 isFromType:(long long)a2 publishViewModel:(id)a3 extensionDic:(id)a4 completion:(id /* block */)a5;
- (void)createAlbumSelectWith:(id)a0 extensionDic:(id)a1 enterBlock:(id /* block */)a2 shouldSelectedBlock:(id /* block */)a3 completeSelectBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5;
- (void)createUGCFusionAlbumWith:(id)a0 showLoraHeaderView:(BOOL)a1 shouldShowCamera:(BOOL)a2 extensionDic:(id)a3 enterBlock:(id /* block */)a4 shouldSelectedBlock:(id /* block */)a5 completeSelectBlock:(id /* block */)a6 completeShootBlock:(id /* block */)a7 useLoraBlock:(id /* block */)a8 dismissBlock:(id /* block */)a9 loraProfileDidSelectBlock:(id /* block */)a10;
- (void)openMediaReferenceAlbumWith:(id)a0 extensionDic:(id)a1 enterBlock:(id /* block */)a2 shouldSelectedBlock:(id /* block */)a3 completeSelectBlock:(id /* block */)a4 dismissBlock:(id /* block */)a5 albumConfigBuilder:(id /* block */)a6;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
