@class UIView, NSString, CAKModalTransitionDelegate;
@protocol ACCTextLoadingViewProtcol;

@interface CECMomentCameraAlbumHelper : NSObject <CAKAlbumViewControllerDelegate, CAKAlbumViewControllerDataSource, CECMomentCameraAlbumHelperProtocol>

@property (retain, nonatomic) CAKModalTransitionDelegate *transitionDelegate;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ selectedBlock;
@property (nonatomic) BOOL showFetchLoading;
@property (nonatomic) int fetchTaskID;
@property (weak, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewController:(id)a0 didClickAlbumAssetCell:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (BOOL)albumViewControllerHiddenForHeader:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 didDismissWithPanProgress:(double)a1;
- (void)p_bindObserver;
- (void)albumRequestForAuditingWithCallback:(id /* block */)a0;
- (id)createAlbumNavigationController;
- (void)setAlbumEventWithDismissBlock:(id /* block */)a0 selectedBlock:(id /* block */)a1;
- (void)cancelFetchImage;
- (void)albumRequestAuthority:(id /* block */)a0;
- (void)showRequestAlert;
- (void)showGoToSettingsAlertWithTitle:(id)a0 content:(id)a1 confirmText:(id)a2 cancelText:(id)a3 confirmBlock:(id /* block */)a4 cancelBlock:(id /* block */)a5;
- (void)p_fetchAndConfigLivePhotoAsset:(id)a0;
- (void)p_fetchAndConfigPhotoAsset:(id)a0;
- (id)p_getLivePhotoRequestOptions;
- (void).cxx_destruct;
- (id)init;

@end
