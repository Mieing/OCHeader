@class NSString, UICollectionView, AWEFeedRefreshFooter, AWEUILoadingView, AWELiveAcqCastLiveStreamDataController, AWELiveAcqEmptyView;
@protocol AWELiveAcqCastVideoViewModelProtocol;

@interface AWELiveAcqCastLiveStreamController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) AWELiveAcqCastLiveStreamDataController *dataController;
@property (readonly, nonatomic) id<AWELiveAcqCastVideoViewModelProtocol> viewModel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEFeedRefreshFooter *footer;
@property (retain, nonatomic) AWELiveAcqEmptyView *emptyView;
@property (nonatomic) BOOL initialLoadMoreEnabled;
@property (nonatomic) BOOL selecting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (void)initDataWithCompletion:(id /* block */)a0;
- (void)__createComponents;
- (void)p_endRefreshingWithMore:(BOOL)a0 list:(id)a1 error:(id)a2;
- (void)__configComponents;
- (id)aAWEPadRTVAdapter;
- (void)__refreshDataWithCompletion:(id /* block */)a0;
- (void)__loadMoreData;
- (void)track_liveStreamShow:(id)a0;
- (void)startLoadMoreAction;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
