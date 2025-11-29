@class NSString, UIViewController, CAKModalTransitionDelegate;

@interface AWELivePhotoLibraryServiceImpl : NSObject <UINavigationControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate, IESLivePhotoLibraryService>

@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (weak, nonatomic) UIViewController *hostVC;
@property (nonatomic) BOOL enableMultiSelect;
@property (nonatomic) long long maxPhotoCount;
@property (nonatomic) long long minVideoSeconds;
@property (nonatomic) long long maxVideoSeconds;
@property (copy, nonatomic) NSString *bottomViewTitle;
@property (copy, nonatomic) NSString *limitTips;
@property (copy, nonatomic) NSString *nextButtonTitle;
@property (copy, nonatomic) id /* block */ multiSelectCompletionBlock;
@property (copy, nonatomic) id /* block */ mixMultiSelectBlock;
@property (nonatomic) BOOL isMultiMixSelect;
@property (copy, nonatomic) id /* block */ dataStartProcessBlock;
@property (nonatomic) BOOL shouldSwapPreviewAndSelect;
@property (nonatomic) BOOL enablePreview;
@property (copy, nonatomic) id /* block */ assetCompletion;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showImagePickerWithPrivacyHybridCert:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (void)showVideoPickerWithPrivacyHybridCert:(id)a0 withContext:(id)a1 withCompletion:(id /* block */)a2;
- (void)showImagePickerWithHostVC:(id)a0 withPrivacyCert:(id)a1 completion:(id /* block */)a2;
- (void)showMultiSelectImagePickerWithMaxImageCount:(long long)a0 withPrivacyCert:(id)a1 bottomViewTitle:(id)a2 nextButtonTitle:(id)a3 limitTips:(id)a4 completion:(id /* block */)a5;
- (void)showMultiSelectPickerWithMaxImageCount:(long long)a0 videoMinSeconds:(long long)a1 videoMaxSeconds:(long long)a2 privacyCert:(id)a3 bottomViewTitle:(id)a4 nextButtonTitle:(id)a5 limitTips:(id)a6 startProcessBlock:(id /* block */)a7 completion:(id /* block */)a8;
- (void)showImagePickerWithPrivacyCert:(id)a0 withCompletion:(id /* block */)a1;
- (void)showPhotoPickerWithPrivacyCert:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)showVideoPickerWithPrivacyCert:(id)a0 withCompletion:(id /* block */)a1;
- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewController:(id)a0 didClickAlbumAssetCell:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (id)albumViewControllerConfigForHeader:(id)a0;
- (id)albumViewControllerConfigForFooter:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 didDismissWithPanProgress:(double)a1;
- (void)albumViewController:(id)a0 updateBottomNextButtonWithButton:(id)a1 fromPreview:(BOOL)a2;
- (void)getBatchImagesFromAssetModels:(id)a0 imagePicker:(id)a1;
- (void)showImagePickerWithHostVC:(id)a0 withPrivacyCert:(id)a1 withContext:(id)a2 completion:(id /* block */)a3;
- (void)showPhotoPickerWithPrivacyCert:(id)a0 options:(unsigned long long)a1 hostVC:(id)a2 withContext:(id)a3 completion:(id /* block */)a4;
- (void)p_showLibraryImagePicker;
- (void)checkAuthorizationWithrivacyCert:(id)a0 withContext:(id)a1 completion:(id /* block */)a2;
- (void)p_newShowLibraryImagePicker;
- (BOOL)isOnlySupportImageResource;
- (BOOL)isOnlySupportVideoResource;
- (BOOL)isSupportImageAndVideoResource;
- (void)getMixSelectDataFromAssetModels:(id)a0 imagePicker:(id)a1;
- (void)showPhotoPickerWithPrivacyHybridCert:(id)a0 options:(unsigned long long)a1 withContext:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
