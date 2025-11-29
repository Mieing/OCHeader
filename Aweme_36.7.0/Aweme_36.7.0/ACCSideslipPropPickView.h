@class ACCSideslipPropPickLoadMoreView, NSString, AWEBinding, ACCSideslipPropPickCollectionView;
@protocol ACCSideslipPropPanelPickViewCapability, ACCSideslipPropPanelService, IESServiceProvider, ACCSideslipPropPanelTrackerService, ACCSideslipPropPanelUIConfigService, ACCSideslipPropPanelListDataProvider, ACCSideslipPropPanelPrefetchService;

@interface ACCSideslipPropPickView : UIView <ACCSideslipPropPickCollectionViewSubscriber, ACCSideslipPropPickCollectionViewDataSource, ACCSideslipPropPanelPickViewCapabilityDelegate, ACCSideslipPropPickViewProtocol>

@property (retain, nonatomic) id<IESServiceProvider> sideslipServiceProvider;
@property (weak, nonatomic) id<ACCSideslipPropPanelPickViewCapability> sideslipPickViewService;
@property (weak, nonatomic) id<ACCSideslipPropPanelService> sideslipPropPanelService;
@property (weak, nonatomic) id<ACCSideslipPropPanelPrefetchService> sideslipPrefetchService;
@property (weak, nonatomic) id<ACCSideslipPropPanelTrackerService> sideslipTrackerService;
@property (weak, nonatomic) id<ACCSideslipPropPanelUIConfigService> uiConfigService;
@property (weak, nonatomic) id<ACCSideslipPropPanelListDataProvider> listDataService;
@property (retain, nonatomic) ACCSideslipPropPickCollectionView *pickCollectionView;
@property (retain, nonatomic) ACCSideslipPropPickLoadMoreView *loadMoreView;
@property (nonatomic) double hiddenCoefficient;
@property (weak, nonatomic) AWEBinding *pickCollectionViewEnableBinding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_bindService;
- (void)sideslipPropPickCollectionView:(id)a0 willShowFocusIndex:(long long)a1 sencondaryIndexes:(id)a2 withReason:(unsigned long long)a3;
- (void)sideslipPropPickCollectionView:(id)a0 willBeginScrollWithReason:(unsigned long long)a1 scrollDirection:(unsigned long long)a2;
- (void)sideslipPropPickCollectionView:(id)a0 didScrollWithReason:(unsigned long long)a1;
- (void)sideslipPropPickCollectionView:(id)a0 didEndScrollWithReason:(unsigned long long)a1;
- (void)sideslipPropPickCollectionView:(id)a0 prefetchItemsAtIndexPaths:(id)a1;
- (void)sideslipPropPickCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)sideslipPropPickCollectionViewWillEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)sideslipPropPickCollectionViewDidScroll:(id)a0 collectionView:(id)a1 visibleCells:(id)a2;
- (void)sideslipPropPickCollectionView:(id)a0 didUpdateTriggerReason:(unsigned long long)a1;
- (void)updateHiddenCoefficient:(double)a0;
- (id)initWithSideslipServiceProvider:(id)a0;
- (void)sideslipPropPanelPickViewCapability:(id)a0 autoLocatedWithAnimated:(BOOL)a1 completion:(id /* block */)a2;
- (void)sideslipPropPanelPickViewCapability:(id)a0 locateAtIndex:(long long)a1 animated:(BOOL)a2 isUserTap:(BOOL)a3 completion:(id /* block */)a4;
- (void)sideslipPropPanelPickViewCapabilityReloadData:(id)a0;
- (void)sideslipPropPanelPickViewCapability:(id)a0 reloadItemsAtIndexes:(id)a1 completion:(id /* block */)a2;
- (void)sideslipPropPanelPickViewCapability:(id)a0 insertItemIndexes:(id)a1 completion:(id /* block */)a2;
- (void)sideslipPropPanelPickViewCapability:(id)a0 removeItemIndexes:(id)a1 completion:(id /* block */)a2;
- (BOOL)shouldHideMoreIconWhileLoading:(id)a0;
- (long long)numberOfItemInSideslipPropPickCollectionView:(id)a0;
- (id)sideslipPropPickCollectionView:(id)a0 cellModelAtIndex:(long long)a1;
- (id)reusableCellClassesInSideslipPropPickCollectionView:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)addSubview:(id)a0;
- (BOOL)isDisplayingPlaceHolder;

@end
