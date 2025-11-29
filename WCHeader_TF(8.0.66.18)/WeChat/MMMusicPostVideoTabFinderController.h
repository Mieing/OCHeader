@class NSMutableArray, NSString, MMMusicMVModel, MMMusicInfo, MMMusicFinderVideoTabView, MMScrollView, MMMusicSearchVideoController;
@protocol MMMusicPostVideoTabFinderControllerDataSource, MMMusicPostVideoTabFinderControllerDelegate;

@interface MMMusicPostVideoTabFinderController : MMMusicPostVideoTabBaseController <MMMusicSearchVideoControllerDelegate, MMMusicSearchVideoControllerDataSource, MMMusicPostVideoBasePageDelegate, MMMusicFinderVideoTabViewDelegate, MMMusicPostVideoTabFinderBaseControllerDataSource> {
    MMMusicSearchVideoController *_searchController;
    MMScrollView *_scrollView;
    NSMutableArray *_arrPageInfo;
    MMMusicFinderVideoTabView *_tabView;
    MMMusicMVModel *_mvModel;
    MMMusicInfo *m_musicInfo;
    double _currEposideDuration;
    long long _curTabIndex;
}

@property (nonatomic) BOOL canMultiSelect;
@property (weak, nonatomic) id<MMMusicPostVideoTabFinderControllerDataSource> dataSource;
@property (weak, nonatomic) id<MMMusicPostVideoTabFinderControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 mvModel:(id)a1 canMultiSelect:(BOOL)a2;
- (id)arrPanGestures;
- (void)updateCanMultiSelect:(BOOL)a0;
- (void)setCurrEposideDuration:(double)a0;
- (void)updateCurrEposideDuration:(double)a0;
- (void)updateDataSelectedStatus;
- (BOOL)updateDataSelectedStatusByUniqueId:(id)a0;
- (BOOL)isDurationEnoughAndShowTipsIfNotEnough:(id)a0;
- (void)initViews:(id)a0;
- (void)initPageInfo;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)enterTabFinderControllerSearchMode;
- (void)resignTabFinderControllerSearchResponder;
- (void)onSearch:(id)a0;
- (void)onEnterSearchMode;
- (void)onExitSearchMode;
- (void)onSelectSearchResultVideo:(id)a0 thumbImage:(id)a1 cellFrameInVCAcquireBlock:(id /* block */)a2 contentOffsetResetBlock:(id /* block */)a3;
- (void)mmMusicSearchVideoController:(id)a0 onSearchFinderCellSelectedBtnChecked:(id)a1;
- (void)onSwitchToThisPage:(BOOL)a0;
- (void)handleTabSelected:(long long)a0;
- (void)onPageSelectVideo:(id)a0 thumbImage:(id)a1 cellFrameInVCAcquireBlock:(id /* block */)a2 contentOffsetResetBlock:(id /* block */)a3;
- (void)mmMusicPostVideoTabFinderBasePageController:(id)a0 onTabFinderCellSelectedBtnChecked:(id)a1;
- (id)tabFinderBaseGetSelectedArr;
- (id)searchVideoSelectedArr;
- (id)generatePreviewDataSource;
- (id)generatePreviewDataSourceFromDataViewModel:(id)a0;
- (void)reloadVisibleCellSelectedStatus;
- (void).cxx_destruct;

@end
