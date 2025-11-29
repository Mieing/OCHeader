@class NSString, NSDictionary, UICollectionView, AWEUILoadingView, AWELiveAcqCastSearchLiveStreamDataController;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastSearchLiveStreamViewController : AWELiveAcqCastVideoSearchBaseController <UICollectionViewDelegate, UICollectionViewDataSource>

@property (readonly, nonatomic) AWELiveAcqCastSearchLiveStreamDataController *dataController;
@property (readonly, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (readonly, copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMore;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (void)track_liveStreamShow:(id)a0;
- (void)track_searchShow;
- (id)initWithDataManager:(id)a0 viewModel:(id)a1 trackParams:(id)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;

@end
