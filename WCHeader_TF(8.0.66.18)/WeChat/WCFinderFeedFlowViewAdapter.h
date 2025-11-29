@class WCFinderStreamLoadingState, NSString, MMUIViewController, NSMutableSet, WCFinderFeedFlowView, NSObject;
@protocol WCFinderFeedFlowViewAdapterDataSource, WCFinderFeedBaseViewControllerProtocol, WCFinderFeedFlowViewAdapterDeleagte, WCFinderFeedFlowAdapterFeedVisitor, WCFinderFeedFlowViewDataSource;

@interface WCFinderFeedFlowViewAdapter : NSObject <WCFinderFeedFlowViewDelegate, WCFinderStreamLoadingStateDelegate, WCFinderFeedFlowViewAdapterDataSourceDelegate, WCFinderStaticCoverCellMenuHandle, WCFinderFlowLayoutDelegate>

@property (weak, nonatomic) MMUIViewController<WCFinderFeedBaseViewControllerProtocol> *vc;
@property (retain, nonatomic) id<WCFinderFeedFlowViewAdapterDataSource, WCFinderFeedFlowViewDataSource> dataWrapper;
@property (retain, nonatomic) NSMutableSet *registerViews;
@property (nonatomic) int listVCScene;
@property (weak, nonatomic) id<WCFinderFeedFlowViewAdapterDeleagte> delegate;
@property (retain, nonatomic) WCFinderFeedFlowView *feedFlowView;
@property (retain, nonatomic) NSObject *dataSource;
@property (retain, nonatomic) WCFinderStreamLoadingState *loadingState;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long refreshTime;
@property (nonatomic) BOOL allowTopRefresh;
@property (nonatomic) BOOL allowPrefetch;
@property (weak, nonatomic) id<WCFinderFeedFlowAdapterFeedVisitor> feedVisitor;
@property (copy, nonatomic) id /* block */ fetchMoreData;
@property (retain, nonatomic) NSString *noMoreTips;
@property (retain, nonatomic) NSString *emptyTips;
@property (nonatomic) struct WCFinderFeedFlowViewHeaderComponment { Class headerClass; id /* block */ measurer; id /* block */ setupBlock; } headerComponment;
@property (nonatomic) struct WCFinderFeedFlowViewCellMenuComponment { id /* block */ menuGenerator; } menuComponment;
@property (nonatomic) long long columnCount;
@property (weak, nonatomic) id<WCFinderFeedFlowAdapterFeedVisitor> weakFeedVisitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)adapterWithVC:(id)a0 listVCScene:(int)a1;

- (id)init;
- (void)_updateLoadingState;
- (unsigned long long)_genFlowViewState;
- (void)onLoadingStateChanged:(id)a0;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)a0;
- (void)finderFeedFlowView:(id)a0 requestDataWithType:(unsigned long long)a1;
- (void)finderFeedFlowView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)a0;
- (id)finderFeedFlowViewCurrentViewController:(id)a0;
- (unsigned long long)finderFeedFlowViewState:(id)a0;
- (BOOL)finderFeedFlowView:(id)a0 layout:(id)a1 pinHeaderToVisibleBoundsAtSection:(unsigned long long)a2;
- (void)finderFeedFlowViewDidScroll:(id)a0;
- (id)cellConfigForFeed:(id)a0;
- (id)finderFeedFlowView:(id)a0 tipsType:(unsigned long long)a1 inState:(unsigned long long)a2;
- (BOOL)coverCellShouldHandleMenuGesgture:(id)a0 gesture:(id)a1;
- (id)getCollectionView;
- (void)updateFooterView;
- (struct WCFinderFeedFlowViewHeaderComponment { Class x0; id /* block */ x1; id /* block */ x2; } *)getHeaderComponment;
- (struct WCFinderFeedFlowViewCellMenuComponment { id /* block */ x0; } *)getMenuComponment;
- (void)ensureSupplementaryView:(Class)a0 kind:(id)a1;
- (BOOL)onStaticCoverCellShowMenu:(id)a0 gesture:(id)a1;
- (void)handleMenuItem:(id)a0;
- (void)collectionView:(id)a0 insets:(out struct UIEdgeInsets { double x0; double x1; double x2; double x3; } *)a1 forSection:(long long)a2;
- (long long)collectionView:(id)a0 flowLayout:(id)a1 columnForSection:(long long)a2;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
