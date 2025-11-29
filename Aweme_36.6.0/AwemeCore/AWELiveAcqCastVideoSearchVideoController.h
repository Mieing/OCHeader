@class AWELiveAcqCastVideoSearchDataManager, NSString, UICollectionView, NSDictionary, AWEUILoadingView;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastVideoSearchVideoController : AWELiveAcqCastVideoSearchBaseController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (retain, nonatomic) AWELiveAcqCastVideoSearchDataManager *dataManager;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (id)initWithDataManager:(id)a0 viewModel:(id)a1 trackParams:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
