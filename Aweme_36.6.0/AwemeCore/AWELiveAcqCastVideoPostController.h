@class AWELiveAcqCastVideoPostDataManager, AWELiveAcqCastVideoMixDataManager, UICollectionView, NSString, UICollectionViewFlowLayout, AWEUILoadingView, NSError;
@protocol AWEUserProfileTabVCDelegate, AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoPostController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>

@property (nonatomic) BOOL initialLoadMoreEnabled;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) NSError *refreshError;
@property (nonatomic) BOOL selecting;
@property (retain, nonatomic) AWELiveAcqCastVideoMixDataManager *mixDataManager;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id<AWEUserProfileTabVCDelegate> delegate;
@property (retain, nonatomic) AWELiveAcqCastVideoPostDataManager *dataManager;
@property (nonatomic) BOOL isPlayletUser;
@property (nonatomic) BOOL firstLoaded;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (void)initDataWithCompletion:(id /* block */)a0;
- (void)_refreshDataWithCompletion:(id /* block */)a0;
- (void)p_endRefreshingWithMore:(BOOL)a0 list:(id)a1 error:(id)a2;
- (id)aAWEPadRTVAdapter;
- (id)sectionsArray;
- (unsigned long long)sectionTypeForIndex:(unsigned long long)a0;
- (unsigned long long)indexForSectionType:(unsigned long long)a0;
- (id)getConfigedCellIndexPath:(id)a0;
- (void)refreshMixData;
- (void)startLoadMoreAction:(BOOL)a0;
- (void)_loadMoreData;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)a0;
- (void)reloadData;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (BOOL)isCurrentUser;
- (double)footerInset;
- (void)_setupUI;

@end
