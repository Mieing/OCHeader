@class NSHashTable, AWEUserWorkCellViewModelPool, NSString, AWEFavoriteAddVideoDataController, NSDictionary, AWEUILoadingView, NSMutableSet, DUXLoadingToast, UICollectionView, NSNumber, UIColor;

@interface AWEFavoriteFileAddNewVideoBaseViewController : UIViewController <AWEProfileCollectionViewDelegateWaterfallLayout, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) BOOL initialLoadMoreEnabled;
@property (retain, nonatomic) NSHashTable *animatedCoverCells;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) DUXLoadingToast *loadingToast;
@property (nonatomic) BOOL didSelectVideo;
@property (retain, nonatomic) NSMutableSet *selectedIndexSet;
@property (nonatomic) BOOL isDefaultSelectAll;
@property (retain, nonatomic) AWEUserWorkCellViewModelPool *viewModelPool;
@property (nonatomic) long long minimumNumberOfCellDisplayCount;
@property (nonatomic) long long layoutStyle;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) NSNumber *collectsId;
@property (retain, nonatomic) NSString *collectsName;
@property (copy, nonatomic) NSString *tagName;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) AWEFavoriteAddVideoDataController *fileVideoDataController;
@property (nonatomic) BOOL isManageMode;
@property (nonatomic) unsigned long long VCType;
@property (copy, nonatomic) id /* block */ isSelectedVideoCallback;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (BOOL)shouldHideNoMoreText;
- (id)previewingViewControllerForView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewingSourceRectForView:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)p_endRefreshingWithMore:(BOOL)a0 list:(id)a1 error:(id)a2;
- (BOOL)needShowLoadingView;
- (double)collectionviewTopPadding;
- (void)handleCellChooseButtonClickCollectionView:(id)a0 atIndexPath:(id)a1;
- (id)createNormalLayout;
- (id)createWaterfallLayout;
- (id)createSingleColumnLayout;
- (long long)computeLayoutStyle;
- (void)updateSelectedIndexSet;
- (void)fileVideoDataControllerRefresh:(id /* block */)a0;
- (void)updateCollectionViewDisabledVideoFooter;
- (id)initWithIsDefaultSelectAll:(BOOL)a0;
- (void)updateConfigSetting:(id)a0;
- (void)_loadMoreData;
- (void)_refreshData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)updateBackgroundColor;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)createLayout;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)showLoadingView;
- (void)refreshData;
- (void)_setupUI;
- (void)hideLoadingView;

@end
