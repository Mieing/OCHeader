@class UIView, NSString, IESECGoodsCommentHeader, UICollectionView, IESECFullLoadingView, IESECKOLEvaluationViewControllerConfiguration, IESECTracker;
@protocol IESECCommentKOLEvaluationDataManagerProtocol, IESECCommentKOLEvaluationFeedRedirector, IESHYContainerProtocol;

@interface IESECKOLEvaluationViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, IESECCollectionViewLayoutDelegate, IESECGoodsCommentHeaderActionDelegate, IESECCommentKOLEvaluationFeedRedirectorDelegate, IESHYHybridViewLifecycleProtocol> {
    IESECKOLEvaluationViewControllerConfiguration *_configuration;
    IESECGoodsCommentHeader *_navigationBarView;
    UICollectionView *_collectionView;
    IESECFullLoadingView *_pageLoadingView;
    BOOL _isLoading;
    id<IESECCommentKOLEvaluationDataManagerProtocol> _dataManager;
    id<IESECCommentKOLEvaluationFeedRedirector> _feedRedirector;
    IESECTracker *_tracker;
    BOOL _firstScrollAction;
    UIView<IESHYContainerProtocol> *_hybridContainer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tapClose;
- (void)setupTracker;
- (void)loadMoreData;
- (void)videoFeedScrollDidEndAtIndex:(long long)a0;
- (id)collectionView:(id)a0 layoutForSection:(long long)a1;
- (id)createHybridContainer;
- (void)tapShare;
- (void)tapShoppingCart;
- (void)tapTitle;
- (void)tapMore;
- (void)trackPageEnter;
- (void)setupRefreshControl;
- (void)finishRefreshing;
- (id)cellModelWithEvaluationModel:(id)a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)initWithConfiguration:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (void)setupSubviews;

@end
