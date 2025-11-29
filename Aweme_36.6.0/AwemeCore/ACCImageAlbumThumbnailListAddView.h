@class UIViewController, CAKModalTransitionDelegate, NSString, CAKAlbumViewController, AWEVideoPublishViewModel, UIButton;
@protocol ACCImageAlbumThumbnailListAddViewDelegate;

@interface ACCImageAlbumThumbnailListAddView : UIView <CAKAlbumViewControllerDelegate, CAKAlbumViewControllerDataSource>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (nonatomic) BOOL isLightImage;
@property (nonatomic) BOOL isSmallImage;
@property (retain, nonatomic) UIButton *addImageButton;
@property (retain, nonatomic) CAKAlbumViewController *albumViewController;
@property (weak, nonatomic) UIViewController *fromViewController;
@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (weak, nonatomic) id<ACCImageAlbumThumbnailListAddViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (id)albumViewControllerConfigForFooter:(id)a0;
- (id)albumViewControllerConfigForSelectedAssetsView:(id)a0;
- (void)albumViewController:(id)a0 didSelectAlbumAsset:(id)a1 sourceType:(long long)a2;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 updateBottomNextButtonWithButton:(id)a1 fromPreview:(BOOL)a2;
- (void)albumViewController:(id)a0 previewControllerDidLoadForAlbumAsset:(id)a1 bottomView:(id)a2;
- (void)p_openAlbumViewController;
- (void)p_showPhotoLibraryPermissionRequestAlert;
- (id)p_initialSelectedAssetModelArray;
- (BOOL)p_validAssetModelForPhoto:(id)a0;
- (id)p_imageName;
- (void)handleAddImageAction:(id)a0;
- (id)initWithPublishViewModel:(id)a0 isLightImage:(BOOL)a1 isSmallImage:(BOOL)a2;
- (void).cxx_destruct;

@end
