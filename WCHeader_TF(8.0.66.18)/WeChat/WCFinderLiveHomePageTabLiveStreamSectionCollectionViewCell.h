@class WCFinderFeedFlowView, NSArray, NSString, NSMutableDictionary, WCFinderLiveTabLiveStreamPageView, UICollectionView, NSMapTable, WCFinderLiveHomePageTabLiveStreamSectionViewModel;
@protocol WCFinderLiveHomePageTabLiveStreamSectionDelegate;

@interface WCFinderLiveHomePageTabLiveStreamSectionCollectionViewCell : WCFinderLiveFeedBaseStyleableCell <WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderLiveHomePageTabLiveStreamSectionViewModelDelegate, WCFinderLiveHomePageAggregationTabLiveStreamAdapterDelegate, UIScrollViewDelegate, WCFinderFlowTopTipsViewDelegate, WCFinderLiveHomePageAutoPlayProtocol, WCFinderLiveHomePageDataRefreshProtocol>

@property (retain, nonatomic) WCFinderLiveHomePageTabLiveStreamSectionViewModel *vm;
@property (retain, nonatomic) WCFinderLiveTabLiveStreamPageView *tabPageView;
@property (retain, nonatomic) NSMutableDictionary *pageAdapterDict;
@property (retain, nonatomic) NSMapTable *flowViewsCache;
@property (weak, nonatomic) id<WCFinderLiveHomePageTabLiveStreamSectionDelegate> delegate;
@property (readonly, nonatomic) WCFinderFeedFlowView *curFeedFlowView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *indexPathsForVisibleItems;
@property (readonly, nonatomic) UICollectionView *collectionView;

+ (id)cellIdentifier;

- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)initViewsIfNeeded;
- (void)updateWithVM:(id)a0;
- (void)checkLocationAuthorize;
- (void)jumpToTabInfo:(id)a0;
- (void)selectTabId:(unsigned long long)a0;
- (BOOL)canLocationAuthorizationViewShow:(unsigned long long)a0;
- (void)scrollToTop;
- (long long)numberOfTabPageInFinderTabPageView:(id)a0;
- (id)tabViewContainerInFinderTabPageView:(id)a0;
- (double)heightForTabViewContainerInFinderTabPageView:(id)a0;
- (id)finderTabPageView:(id)a0 tabViewAtIndex:(unsigned long long)a1;
- (double)finderTabPageView:(id)a0 heightForTabViewAtIndex:(unsigned long long)a1;
- (id)finderTabPageView:(id)a0 pageViewAtIndex:(unsigned long long)a1;
- (id)emptyTipsConfigInFinderTabPagView:(id)a0;
- (double)topInsetOfFinderTabPageView:(id)a0;
- (void)finderTabPageView:(id)a0 alphaOfTabContainerChanged:(double)a1;
- (void)finderTabPageView:(id)a0 switchFromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)finderTabPageViewWillSwitchPage:(id)a0;
- (void)checkRecoverTabPagesContentOffsetExceptCurrenTabPage;
- (double)heightForHeaderViewChangeAlphaInFinderTabPageView:(id)a0;
- (void)onLiveHomePageAggregationTabLiveStreamScrollDidScroll:(id)a0;
- (void)onLiveHomePageAggregationTabLiveStreamDidEndScrolling:(id)a0;
- (void)onLiveHomePageAggregationTabLiveStreamDidScrollToTop:(id)a0;
- (void)onLiveHomePageAggregationTabLiveStream:(id)a0 jumpToTabInfo:(id)a1;
- (void)onLiveHomePageAggregationTabLiveStream:(id)a0 clickRecommendUrl:(id)a1;
- (void)onLiveHomePageAggregationTabLiveStream:(id)a0 clickContact:(id)a1 feedVM:(id)a2;
- (void)onLiveHomePageAggregationTabLiveStream:(id)a0 selectElementVM:(id)a1 playableCell:(id)a2 indexPath:(id)a3;
- (void)onLiveHomePageAggregationTabLiveStream:(id)a0 aggregationCellClickJumpLive:(id)a1;
- (BOOL)shouldLiveHomePageAggregationTabLiveStreamHandleSelectAction:(id)a0;
- (void)onLiveHomePageAggregationTabLiveStream:(id)a0 aggregationCellClickJumpThemeTemplate:(id)a1 entryBuffer:(id)a2 jumpBypass:(id)a3;
- (void)onLiveHomePageAggregationTabLiveStreamFirstPageFinish:(id)a0;
- (void)onLiveHomePageAggregationTabLiveStream:(id)a0 switchSubTabFrom:(unsigned long long)a1 toSubTabId:(unsigned long long)a2;
- (void)onLiveHomePageAggregationTabLiveStream:(id)a0 forwardAction:(id)a1;
- (void)onLiveHomePageAggregationTabLiveStreamNeedAutoPlay:(id)a0;
- (void)onLiveHomePageAggregationTabLiveStreamCheckAutoPlay:(id)a0;
- (id)curPageAdapter;
- (void)autoPlayStop;
- (void)autoPlayStart;
- (void)onContainerSectionVMHomePageResetState;
- (void)onContainerSectionVMHomePageDeleteTid:(id)a0;
- (void)onContainerSectionVMDisAppear;
- (id)currentSelectTabInfo;
- (void)onLocationAuthorizationStatusUpdated;
- (void)reloadCityTabPage;
- (void)checkPreloadIfNeeded;
- (void)preloadTabPage:(id)a0 loadNearbyTab:(BOOL)a1;
- (void)preloadWithTabInfo:(id)a0 pullType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
