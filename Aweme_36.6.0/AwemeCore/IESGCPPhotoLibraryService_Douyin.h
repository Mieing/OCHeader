@class NSString, CAKModalTransitionDelegate;

@interface IESGCPPhotoLibraryService_Douyin : NSObject <UINavigationControllerDelegate, CAKAlbumViewControllerDataSource, CAKAlbumViewControllerDelegate, IESGCPPhotoLibraryService>

@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (nonatomic) BOOL enableMultiSelect;
@property (nonatomic) long long maxPhotoCount;
@property (copy, nonatomic) NSString *bottomViewTitle;
@property (copy, nonatomic) NSString *limitTips;
@property (copy, nonatomic) NSString *nextButtonTitle;
@property (nonatomic) double lastSelectTime;
@property (copy, nonatomic) id /* block */ multiSelectCompletionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showMultiSelectImagePickerWithMaxImageCount:(long long)a0 withPrivacyCert:(id)a1 bottomViewTitle:(id)a2 nextButtonTitle:(id)a3 limitTips:(id)a4 completion:(id /* block */)a5;
- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (id)albumViewControllerConfigForHeader:(id)a0;
- (id)albumViewControllerConfigForFooter:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 updateBottomNextButtonWithButton:(id)a1 fromPreview:(BOOL)a2;
- (void)showLibraryImagePicker;
- (void)checkAuthorizationWithrivacyCert:(id)a0 completion:(id /* block */)a1;
- (BOOL)isHEIFWithAsset:(id)a0;
- (id)getCoverImageIfNeededWithImageData:(id)a0 maxLength:(long long)a1;
- (void)getBatchImagesFromAssetModels:(id)a0 imagePicker:(id)a1;
- (void).cxx_destruct;

@end
