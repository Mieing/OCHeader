@class MMMusicMVModel, NSString, MMMusicPostVideoTabView, MMScrollView, MMMusicPostVideoTabAlbumController, NSMutableArray, MMUIButton, MMMusicPostVideoTabFinderController;
@protocol MMMusicPostVideoVCDataSource, MMMusicPostVideoDelegate;

@interface MMMusicPostVideoViewController : MMUIHalfScreenViewController <MMMusicPostVideoTabViewDelegate, MMMusicPostVideoTabFinderControllerDelegate, MMMusicPostVideoTabFinderControllerDataSource, MMMusicPostVideoBasePageDelegate, MMMusicPostVideoTabAlbumControllerDelegate, MMMusicPostVideoTabAlbumControllerDataSource> {
    MMMusicPostVideoTabView *_tabView;
    MMScrollView *_scrollView;
    NSMutableArray *_arrPageInfo;
    unsigned long long _curMode;
    long long _curTabIndex;
    struct CGPoint { double x; double y; } startLocation;
    MMUIButton *m_searchBtn;
    BOOL isInFinderSearchMode;
    MMMusicMVModel *_mvModel;
}

@property (retain, nonatomic) MMMusicPostVideoTabAlbumController *tabAlbumVC;
@property (retain, nonatomic) MMMusicPostVideoTabFinderController *tabFinderVC;
@property (weak, nonatomic) id<MMMusicPostVideoVCDataSource> postVideoDataSource;
@property (weak, nonatomic) id<MMMusicPostVideoDelegate> postVideoDelegate;
@property (nonatomic) BOOL canAlbumShowPhoto;
@property (nonatomic) BOOL canMultiSelect;
@property (nonatomic) double minDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)getHeightByMode:(unsigned long long)a0;

- (id)initWithMVModel:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)currentSelectedViewController;
- (void)setMode:(unsigned long long)a0;
- (void)setMode:(unsigned long long)a0 alongside:(id /* block */)a1 completion:(id /* block */)a2;
- (BOOL)isFullScreenMode;
- (void)setModeWithoutAnim:(unsigned long long)a0;
- (void)setEditModeWithoutAnim;
- (void)setHalfModeWithoutAnim;
- (void)initView;
- (void)initPageInfo;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)setCurrEposideDuration:(double)a0;
- (void)updateCurrEposideDuration:(double)a0;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)a0;
- (void)reload;
- (void)reloadVisibleCellSelectedStatus;
- (void)onSelectLocalVideoAsset:(id)a0 thumbImage:(id)a1 thumbFrameInVCAcquireBlock:(id /* block */)a2 contentOffsetResetBlock:(id /* block */)a3;
- (void)onTabAlbumVCShortVideoTaken:(id)a0 localIdentifier:(id)a1 thumbImg:(id)a2 editVideoAttr:(id)a3 paramModel:(id)a4;
- (void)mmMusicPostVideoTabAlbumController:(id)a0 onLocalVideoAssetSelectedBtnChecked:(id)a1;
- (void)onTabAlbumAssetsChange:(id)a0;
- (id)tabAlbumGetSelectedArr;
- (void)onTabFinderSearch:(id)a0;
- (void)onEnterTabFinderSearchMode;
- (void)enterSearchModeHeight;
- (void)onExitTabFinderSearchMode;
- (void)onSelectFinderResultVideo:(id)a0 thumbImage:(id)a1 cellFrameInVCAcquireBlock:(id /* block */)a2 contentOffsetResetBlock:(id /* block */)a3;
- (void)onSelectFinderSearchResultVideo:(id)a0 thumbImage:(id)a1 cellFrameInVCAcquireBlock:(id /* block */)a2 contentOffsetResetBlock:(id /* block */)a3;
- (void)mmMusicPostVideoTabFinderController:(id)a0 onFinderCellSelectedBtnChecked:(id)a1;
- (id)tabFinderGetSelectedArr;
- (void)handleTabSelected:(long long)a0 tabConfig:(id)a1 manualyTappedType:(unsigned long long)a2 doubleClicked:(BOOL)a3;
- (void)handleSearchBtnTap;
- (void)onPageSelectVideo:(id)a0 thumbImage:(id)a1 cellFrameInVCAcquireBlock:(id /* block */)a2 contentOffsetResetBlock:(id /* block */)a3;
- (void)doClickCloseWithNeedAnimated:(BOOL)a0 action:(long long)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)onTapGes:(id)a0;
- (void)onPanGes:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)generatePreviewDataSoruce;
- (void).cxx_destruct;

@end
