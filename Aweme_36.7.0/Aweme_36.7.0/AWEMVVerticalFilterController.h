@class NSMutableDictionary, UICollectionView, NSString, UIView;

@interface AWEMVVerticalFilterController : AWEDCFeedBaseController <UICollectionViewDelegate, UICollectionViewDataSource, AWEMVEventDispatchProtocol>

@property (retain, nonatomic) UICollectionView *colletionView;
@property (retain, nonatomic) UIView *verticalView;
@property (nonatomic) double lastOffsetY;
@property (nonatomic) BOOL isDragScrolling;
@property (retain, nonatomic) NSMutableDictionary *verticalCacheInfoMap;
@property (nonatomic) BOOL isVerticalViewShowed;
@property (copy, nonatomic) id /* block */ refreshBlock;
@property (nonatomic) BOOL needEnterLandingFilterID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)a0;
- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerScrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)containerScrollViewDidEndDecelerating:(id)a0;
- (void)containerScrollViewWillBeginDragging:(id)a0;
- (void)enterContainerWithModel:(id)a0;
- (void)containerViewDidAppear:(BOOL)a0;
- (void)setupNotification;
- (void)setupEvent;
- (void)onUIThemeDidChange;
- (id)mvPageContext;
- (void)onMVChannelFetchListDataStartWithType:(unsigned long long)a0;
- (void)enterLandingFilterIDIfNeeded;
- (void)trackVerticalFilterShowIfNeeded;
- (void)updateVerticalFilterOnScrollEnd;
- (void)refreshListWithOldVerticalID:(id)a0 newVerticalID:(id)a1;
- (id)verticalList;
- (void)trackVerticalFilterShow;
- (id)verticalViewBackgroundColor;
- (void)trackVerticalFilterClick;
- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)containerViewDidLayoutSubviews;
- (void)setupUI;
- (void)containerViewDidLoad;

@end
