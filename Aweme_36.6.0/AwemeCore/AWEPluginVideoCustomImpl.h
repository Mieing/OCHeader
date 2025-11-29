@class NSString, NSMutableDictionary, CAKModalTransitionDelegate;

@interface AWEPluginVideoCustomImpl : NSObject <BDPVideoPickerPluginDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (retain, nonatomic) NSMutableDictionary *callbackDict;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (id)albumViewControllerConfigForFooter:(id)a0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 didDismissWithPanProgress:(double)a1;
- (void)bdp_showVideoPickerWithModel:(id)a0 completion:(id /* block */)a1;
- (void)bdp_showAwemeVideoPickerWithModel:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
