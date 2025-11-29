@class AWEVideoPublishViewModel, UIViewController, ACCAIGCBottomCustomPreviewPage, NSArray, ACCAlbumMultiReferenceBottomView, CAKAlbumViewController, ACCAlbumInputData;
@protocol CAKAlbumListViewControllerProtocol;

@interface ACCAIGCReferenceMediaAlbumHelperExtension : ACCAlbumExtension

@property (weak, nonatomic) CAKAlbumViewController *albumController;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (weak, nonatomic) ACCAlbumMultiReferenceBottomView *bottomView;
@property (weak, nonatomic) ACCAIGCBottomCustomPreviewPage *bottomPreviewPage;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) UIViewController<CAKAlbumListViewControllerProtocol> *currentVC;
@property (nonatomic) BOOL isInPreviewPage;
@property (retain, nonatomic) NSArray *selectedAssets;

- (id)minSelectCount;
- (id)maxSelectCount;
- (void)albumDidClickSelectAssetsButtonWithSelectedAssetes:(id)a0 targetAsset:(id)a1 isSelected:(BOOL)a2;
- (void)tapCustomNextButton;
- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void)albumDidHiddenViewController:(id)a0;
- (void)albumDidSelectAssetes:(id)a0 targetAsset:(id)a1;
- (void)albumDidDeleteAssetFromBottomView:(id)a0;
- (void)albumWillShowPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidLoadPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidHiddenPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumUpdateBottomNextButtonWithAlbumVC:(id)a0;
- (void)updateBottomWith:(BOOL)a0;
- (void)callCompleteHandler;
- (void)albumDidLoadBottomView:(id)a0;
- (void).cxx_destruct;

@end
