@class NSString, NSMutableDictionary, AWESelectPhotoViewController, CAKModalTransitionDelegate;

@interface AWEUploadPhotoManager : NSObject <AWESelectPhotoViewControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate, AWEUploadPhotoManager>

@property (weak, nonatomic) AWESelectPhotoViewController *selectPhotoVC;
@property (retain, nonatomic) id source;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *uploadPath;
@property (retain, nonatomic) NSMutableDictionary *uploaded;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (nonatomic) BOOL multiSelect;
@property (nonatomic) unsigned long long maxSelectCount;
@property (nonatomic) double timeNextButtonPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)uploadPhotosWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)uploadImages:(id)a0 params:(id)a1 eachProgress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)uploadPhotos:(id)a0 params:(id)a1 eachProgress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)uploadImages:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)assetModelWithPath:(id)a0;
+ (void)uploadImage:(id)a0 thumbnailBase64:(id)a1 parameters:(id)a2 completion:(id /* block */)a3;
+ (void)uploadPhotos:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (id)topViewController;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewController:(id)a0 didClickAlbumAssetCell:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)selectPhotoViewControllerDidCancel;
- (void)selectPhotoViewControllerDidConfirmWithSelection:(id)a0;
- (void)uploadPhotos:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
