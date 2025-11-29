@class NSString, NSMutableDictionary, AWECloudAlbumSelectPanelViewController;

@interface AWECloudAlbumSelectViewModel : AWEAlbumBaseViewModel <AWECloudAlbumTableViewControllerDelegateProtocol>

@property (retain, nonatomic) AWECloudAlbumSelectPanelViewController *selectAlbumPanel;
@property (nonatomic) long long availableStorage;
@property (retain, nonatomic) NSMutableDictionary *assetsCache;
@property (nonatomic) BOOL nextBtnClicked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)maxUploadVideoDuration;
+ (long long)maxUploadCount;
+ (id)customTransitionDelegate;
+ (void)createAndShowResourcePanelWith:(id)a0 enterFrom:(id)a1 withNotification:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)trackAlbumUsedStorage:(long long)a0;
+ (double)maxStorage;
+ (void)trackAllowedUploadToPrivate:(BOOL)a0 enterFrom:(id)a1;
+ (void)setAuthorizationValue:(BOOL)a0;
+ (void)createAndShowResourcePanelWith:(id)a0 enterFrom:(id)a1 completion:(id /* block */)a2;

- (void)showPanel;
- (void)dismissPanel:(id /* block */)a0;
- (id)trackModel;
- (BOOL)shouldShowAssetsInReverseOrderForAlbumViewController:(id)a0;
- (id)initWithInputData:(id)a0;
- (BOOL)validAssetModelForVideo:(id)a0;
- (BOOL)shouldSelectAlbumAsset:(id)a0;
- (void)goToNextWithMultiSelect:(BOOL)a0;
- (BOOL)checkValidForAssetModel:(id)a0;
- (void)trackSelectAsset:(id)a0 fromPreview:(BOOL)a1;
- (void)trackPreviewControllerDidLoadForAlbumAsset:(id)a0;
- (BOOL)needFetchAlbumAssetsWhenClickNext;
- (BOOL)shouldSelectAlbumAsset:(id)a0 withSelectAllMode:(BOOL)a1;
- (void)updateBottomNextButtonWithButton:(id)a0 fromPreview:(BOOL)a1;
- (void)trackSelectAllBtnWillbeClicked:(id)a0;
- (BOOL)needDisplayGreyModeWithAsset:(id)a0;
- (BOOL)needStopSelectAllAssets:(id)a0;
- (void)p_nextForSelectVideoCompletionWithAssetArray:(id)a0;
- (void)uploadAssets:(id)a0 ToAlbum:(unsigned long long)a1 isFirstUpload:(BOOL)a2 complete:(id /* block */)a3;
- (BOOL)validForUploadCount;
- (void)trackUploadNotAllowed:(id)a0 WithErrorCode:(id)a1;
- (BOOL)validAssetModelSizeFor:(id)a0;
- (BOOL)validTotalAssetsModelSizeFor:(id)a0;
- (BOOL)validAssetModelForVideoWithoutNotify:(id)a0;
- (BOOL)validTotalAssetsModelSizeWithoutNotifyFor:(id)a0;
- (BOOL)validAssetModelSizeWithoutNotify:(id)a0;
- (double)maxUploadMediaSize;
- (double)calculateAssetSize:(id)a0;
- (double)maxAvailableStorageSpace;
- (void)goToNextHandler;
- (void)trackAddToAlbumClicked;
- (void)uploadSelectedAssetsInfoWith:(id)a0;
- (void)deleteUploadFailedAlbum:(unsigned long long)a0;
- (void)p_uploadAssets:(id)a0 ToAlbum:(unsigned long long)a1 isFirstUpload:(BOOL)a2 complete:(id /* block */)a3;
- (void)trackUploadClicked;
- (id)transferAWEAssetModelToImportModel:(id)a0;
- (BOOL)checkValidForAssetModelWithoutNotify:(id)a0;
- (void)trackNextClicked;
- (void).cxx_destruct;
- (id)footerTitle;

@end
