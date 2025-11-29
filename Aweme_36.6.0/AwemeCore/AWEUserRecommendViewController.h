@class UIView, NSString, UIButton, AWEUserRecommendViewControllerContext, NSObject, UICollectionView, UILabel, NSNumber;
@protocol AWEUserRecommendTableViewModelProtocol, AWELiveRoomFinishedListenerProtocol;

@interface AWEUserRecommendViewController : UIViewController <AWEUserRecommendTableViewModelDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, AWEUserRecommendViewControllerProtocol>

@property (retain, nonatomic) NSNumber *requestLiveTimeStamp;
@property (retain, nonatomic) NSObject<AWELiveRoomFinishedListenerProtocol> *roomFinishListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *greyBackgroundView;
@property (retain, nonatomic) UILabel *recommendLabel;
@property (retain, nonatomic) UIButton *hideButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIButton *privacyButton;
@property (nonatomic) BOOL hasDisplayedFooterDuringLoading;
@property (retain, nonatomic) AWEUserRecommendViewControllerContext *context;
@property (nonatomic) BOOL hasNotifyScroll;
@property (retain, nonatomic) NSObject<AWEUserRecommendTableViewModelProtocol> *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)userRecommendViewHeight:(long long)a0;
+ (double)collectionViewHeightForType:(long long)a0;
+ (struct CGSize { double x0; double x1; })p_cellSizeForType:(long long)a0;

- (void)loadMore;
- (void)viewModelDidRefresh:(id)a0;
- (void)viewModelDidLoadMore:(id)a0 indexes:(id)a1;
- (void)viewModel:(id)a0 didRemoveModelsAtIndexes:(id)a1;
- (void)viewModel:(id)a0 didInsertModelsAtIndexes:(id)a1;
- (void)viewModel:(id)a0 didUpdateModelsAtIndexes:(id)a1;
- (BOOL)needReloadData;
- (struct CGSize { double x0; double x1; })p_cellSize;
- (void)refreshLiveStatus;
- (void)moveToParentViewController:(id)a0 superView:(id)a1;
- (void)p_liveRoomFinished:(id)a0;
- (void)p_getLiveStatusWithCompletion:(id /* block */)a0;
- (void)setupLiveRoomListener;
- (void)refreshLiveStatusIfNeeded;
- (BOOL)p_canShowFooter;
- (BOOL)p_canLoadMore;
- (void)storageRecommendInteractDate;
- (BOOL)p_isLoadingFooterVisible;
- (id)p_cellClasses;
- (void)p_leftScrollAtIndex:(long long)a0;
- (void)hideBtnClicked:(id)a0;
- (void)privacyButtonClicked:(id)a0;
- (void)p_setupUI;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithContext:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 atIndexPath:(id)a3;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)updateContentInset;
- (double)collectionViewHeight;

@end
