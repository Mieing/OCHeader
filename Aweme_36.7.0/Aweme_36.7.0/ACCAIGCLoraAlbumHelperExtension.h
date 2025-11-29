@class NSMutableDictionary, NSArray, NSObject, CAKAlbumViewController, UIViewController, UIView, ACCAIGCLoraSuiteInfoModel, ACCAlbumEnlargeToastBottomView, AWEVideoPublishViewModel, NSNumber, ACCAIGCBottomCustomPreviewPage, ACCAlbumInputData, NSLock, ACCAIGCAlbumNavigationView;
@protocol OS_dispatch_queue, CAKAlbumListViewControllerProtocol;

@interface ACCAIGCLoraAlbumHelperExtension : ACCAlbumExtension

@property (weak, nonatomic) CAKAlbumViewController *albumController;
@property (weak, nonatomic) ACCAlbumInputData *inputData;
@property (weak, nonatomic) ACCAIGCAlbumNavigationView *navigationView;
@property (weak, nonatomic) ACCAlbumEnlargeToastBottomView *bottomView;
@property (weak, nonatomic) ACCAIGCBottomCustomPreviewPage *bottomPreviewPage;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) UIViewController<CAKAlbumListViewControllerProtocol> *currentVC;
@property (retain, nonatomic) ACCAIGCLoraSuiteInfoModel *loraModel;
@property (retain, nonatomic) NSNumber *targetTrackId;
@property (retain, nonatomic) NSMutableDictionary *trackingSavedOriginImage;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *albumOperateQueue;
@property (retain, nonatomic) NSLock *operateLock;
@property (retain, nonatomic) UIView *snapTransferView;
@property (nonatomic) BOOL isInPreviewPage;
@property (nonatomic) BOOL needStopRunAlgorithm;
@property (retain, nonatomic) NSNumber *minSelectCount;
@property (retain, nonatomic) NSArray *selectedAssets;
@property (nonatomic) BOOL isFromUploadClickAdd;
@property (nonatomic) BOOL enableLoraCameraRecord;
@property (nonatomic) BOOL needAfterDismissShowToast;

- (void)showPopover;
- (void)albumDidShowViewController:(id)a0;
- (void)showLoraCreateExampleViewController;
- (void)showLoraCreateExampleViewControllerWithIsFirstShow:(BOOL)a0;
- (void)tapCustomNextButton;
- (void)updateTitleWith:(BOOL)a0;
- (void)trackLocalCheckAssets:(double)a0 imageTotalCount:(unsigned long long)a1 imageValidCount:(unsigned long long)a2 imageInValidCount:(unsigned long long)a3 error:(id)a4;
- (BOOL)getValidFromResultDict:(id)a0 index:(unsigned long long)a1;
- (struct CGPoint { double x0; double x1; })getAlbumTopSize;
- (void)afterLocalCheckEnterAsyncPostPage;
- (void)dismissSnapMaskView;
- (BOOL)albumExtensionShouldBeLoaded:(id)a0;
- (void)albumDidLoadExtension:(id)a0 albumViewController:(id)a1;
- (void)albumDidHiddenViewController:(id)a0;
- (void)albumDidSelectAssetes:(id)a0 targetAsset:(id)a1;
- (void)albumDidDeleteAssetFromBottomView:(id)a0;
- (void)albumWillShowPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidLoadPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumDidHiddenPreviewControllerBottomView:(id)a0 previewAsset:(id)a1;
- (void)albumUpdateBottomNextButtonWithAlbumVC:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeAsset:(id)a0;

@end
