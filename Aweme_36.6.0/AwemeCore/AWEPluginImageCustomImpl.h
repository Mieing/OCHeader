@class AWEPhotosPreviewViewController, NSMutableDictionary, NSString, BDPUniqueID, CAKModalTransitionDelegate;

@interface AWEPluginImageCustomImpl : NSObject <BDPImagePickerPluginDelegate, BDPPreviewImagePluginDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate, AWEPluginImageCAKAlbumBottomViewDelegate>

@property (retain, nonatomic) NSMutableDictionary *callbackDict;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) AWEPhotosPreviewViewController *photosPreviewVC;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) BOOL enableDetailConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isOriginalImageSelected;

+ (id)sharedPlugin;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (id)albumViewControllerConfigForFooter:(id)a0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)a0;
- (id)albumViewControllerViewForFooter:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 didDismissWithPanProgress:(double)a1;
- (void)ironManpreviewImageWithThumbnailURLs:(id)a0 imageURLs:(id)a1 model:(id)a2;
- (id)getImageReqConfigsWithModel:(id)a0;
- (void)showMenu:(id)a0;
- (id)bdp_getPHAssetWithImage:(id)a0;
- (void)bdp_showImagePickerWithModel:(id)a0 completion:(id /* block */)a1;
- (void)trackImageMonitorWithErrorCode:(long long)a0 errMsg:(id)a1 detailConfig:(BOOL)a2;
- (void)dismissAlbumController:(id)a0 images:(id)a1 callbackObject:(id /* block */)a2;
- (void)bdp_previewImageWithModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
