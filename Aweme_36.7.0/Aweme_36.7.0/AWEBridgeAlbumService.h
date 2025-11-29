@class NSString, CAKAlbumViewController, CAKModalTransitionDelegate;

@interface AWEBridgeAlbumService : NSObject <CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate>

@property (weak, nonatomic) CAKAlbumViewController *albumViewController;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (nonatomic) unsigned long long maxSelectionCount;
@property (nonatomic) long long scene;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isiOS14PhotoLimited;
+ (void)showRequestAlbumAuthorityAlertWithCompletion:(id /* block */)a0;
+ (void)showRequestExifAuthorityAlertWithCompletion:(id /* block */)a0;
+ (void)showAlertWithTitle:(id)a0 content:(id)a1 confirmText:(id)a2 cancelText:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
+ (void)albumRequestAuthorityWithCompletion:(id /* block */)a0;
+ (void)albumRequestExifAuthorityWithCompletion:(id /* block */)a0;

- (void)finishWithResultModel:(id)a0 status:(id)a1;
- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (double)albumViewControllerHeightForHeader:(id)a0;
- (id)albumViewControllerViewForHeader:(id)a0;
- (void)albumViewModelDidInit:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)goToNextWithSelectedAssets:(id)a0;
- (id)writeImageDataToDisk:(id)a0 extension:(id)a1;
- (void)buildLocationPicInfoForAsset:(id)a0 completionHandler:(id /* block */)a1;
- (id)configAlbumPickerWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)imageDataForImage:(id)a0;

@end
