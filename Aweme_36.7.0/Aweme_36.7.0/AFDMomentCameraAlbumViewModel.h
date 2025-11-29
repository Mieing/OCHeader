@class UIImage, NSString;
@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService;

@interface AFDMomentCameraAlbumViewModel : AFDMomentCameraBaseViewModel <CAKPhotoLibraryChangeObserver, AFDMomentCameraFlowServiceSubscriber, CAKAlbumViewControllerDelegate, CAKAlbumViewControllerDataSource>

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isEnable) BOOL enable;
@property (retain, nonatomic) UIImage *albumButtomCover;
@property (nonatomic) BOOL isDefaultCover;
@property (nonatomic) BOOL showFetchLoading;
@property (nonatomic) int fetchTaskID;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL shouldFetchWhenBtnShow;
@property (nonatomic) BOOL isUploadFlow;
@property (nonatomic) BOOL needShowAlbumVC;
@property (nonatomic) BOOL needReleaseAlbumVC;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (nonatomic) BOOL hasRegisterChangeObserver;
@property (nonatomic) double filterStartTime;
@property (nonatomic) double filterEndTime;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (id)listViewConfigForAlbumViewController:(id)a0;
- (BOOL)albumViewControllerHiddenForFooter:(id)a0;
- (BOOL)albumViewControllerHiddenForSelectedAssetsView:(id)a0;
- (BOOL)albumViewControllerNeedFetchAlbumAssetsWhenClickNext:(id)a0;
- (BOOL)albumViewController:(id)a0 shouldSelectAlbumAsset:(id)a1;
- (void)albumViewController:(id)a0 didClickAlbumAssetCell:(id)a1;
- (void)albumViewControllerDidClickCancelButton:(id)a0;
- (BOOL)albumViewControllerHiddenForHeader:(id)a0;
- (double)albumViewControllerHeightForHeader:(id)a0;
- (id)albumViewControllerViewForHeader:(id)a0;
- (id)customEmptyViewForAlbumListVC:(id)a0;
- (void)albumViewController:(id)a0 didClickNextButtonWithSourceType:(long long)a1 fetchedAlbumAssets:(id)a2;
- (void)albumViewController:(id)a0 didDismissWithPanProgress:(double)a1;
- (void)flowServiceWillChangeToState:(long long)a0 fromState:(long long)a1;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)configViewAppear:(BOOL)a0;
- (void)trackerClickAlbumBtn;
- (void)userDidOpenAlbumVC;
- (void)cancelFetchImage;
- (void)p_fetchAndConfigPhotoAsset:(id)a0;
- (void)p_fetchLastPhotoAsTheCoverIfNeedWhenBtnShow:(BOOL)a0;
- (void)fetchLastPhotoAsTheCoverIfNeed;
- (void)p_addPhotoLibraryObserveIfNeed;
- (void)p_resetFilterTime;
- (BOOL)p_filterAsset:(id)a0;
- (BOOL)albumViewControllerEnableFinlterAssetAbility;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (void)dealloc;

@end
