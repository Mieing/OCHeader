@class NSString, NSMutableDictionary, CAKModalTransitionDelegate;

@interface AWEPluginMediaCustomImpl : NSObject <BDPMediaPickerPluginDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) NSMutableDictionary *callbackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 didDismissWithPanProgress:(double)a1;
- (void)bdp_showMediaPickerWithModel:(id)a0 completion:(id /* block */)a1;
- (id)dealImageDataWithFetchedAlbumAssetsV2:(id)a0 albumViewController:(id)a1;
- (id)dealImageDataWithFetchedAlbumAssets:(id)a0 albumViewController:(id)a1;
- (id)dealVideoDataWithFetchedAlbumAssets:(id)a0 albumViewController:(id)a1;
- (void)dismissVCAnimatedWithViewController:(id)a0 images:(id)a1 videos:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
