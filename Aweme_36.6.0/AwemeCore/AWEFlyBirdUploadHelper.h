@class NSString, CAKModalTransitionDelegate;
@protocol AWEStudioFlyBirdSelectionModel;

@interface AWEFlyBirdUploadHelper : NSObject <CAKAlbumViewControllerDelegate, CAKAlbumViewControllerDataSource>

@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) id<AWEStudioFlyBirdSelectionModel> selectionModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHelper;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 updateBottomNextButtonWithButton:(id)a1 fromPreview:(BOOL)a2;
- (id)generateInfoDictForImage:(id)a0 videoPath:(id)a1 needBase64:(BOOL)a2;
- (id)saveImageToCache:(id)a0 phAsset:(id)a1;
- (BOOL)p_validAssetModelForVideo:(id)a0;
- (double)p_isExceededMaxSelectableDuration:(id)a0 withSelectAlbumAsset:(id)a1;
- (void)copyVideoToCache:(id)a0 phAsset:(id)a1 completionHandler:(id /* block */)a2;
- (void)showAlbumChooseVC:(id)a0;
- (void).cxx_destruct;
- (void)cleanCache;

@end
