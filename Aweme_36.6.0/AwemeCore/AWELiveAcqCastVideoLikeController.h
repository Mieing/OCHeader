@class UICollectionView, NSString, AWEFeedRefreshFooter, AWELiveAcqEmptyView, AWEUILoadingView, UICollectionViewFlowLayout, AWELiveAcqCastVideoLikeDataManager;
@protocol AWEUserProfileTabVCDelegate, AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoLikeController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) BOOL initialLoadMoreEnabled;
@property (retain, nonatomic) AWELiveAcqCastVideoLikeDataManager *dataManager;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEFeedRefreshFooter *footer;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) BOOL selecting;
@property (nonatomic) unsigned long long vcState;
@property (retain, nonatomic) AWELiveAcqEmptyView *emptyView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) BOOL showFavoriteList;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (void)p_endRefreshingWithMore:(BOOL)a0 list:(id)a1 error:(id)a2;
- (id)aAWEPadRTVAdapter;
- (void)p_updateViewControllerState:(unsigned long long)a0;
- (BOOL)p_isCurrentUser;
- (BOOL)p_shouldUseFooterPlaceholderForState:(unsigned long long)a0;
- (void)_loadMoreData;
- (void)_refreshData;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)viewDidLayoutSubviews;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (double)footerInset;
- (void)_setupUI;

@end
