@class AWEPostLocatePitayaModel, NSString, AWEProfilePostJustWatchedView, AWEProfileJustWatchManager, NSNumber, NSIndexPath;

@interface AWEPostWorkJustWatchedController : AWEPostWorkBaseController <AWEProfileJustWatchDelegate, AWEPostWorkJustWatchedProtocol, AWEProfilePadEventSubscriber>

@property (retain, nonatomic) AWEPostLocatePitayaModel *locatePitayaModel;
@property (retain, nonatomic) NSNumber *justWatchedMixEpisode;
@property (retain, nonatomic) NSIndexPath *indexPathOfJustWatchedItem;
@property (copy, nonatomic) NSString *justWatchedMixID;
@property (retain, nonatomic) AWEProfilePostJustWatchedView *justWatchedView;
@property (retain, nonatomic) AWEProfileJustWatchManager *justWatchManager;
@property (nonatomic) BOOL hasClickedJustWatchedBtnSuccesses;
@property (nonatomic) BOOL justWatchViewShown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadUserPageAdapterClass;

- (void)containerScrollViewDidScroll:(id)a0;
- (void)containerCollectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)containerCollectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)onFetchListDataEndWithReason:(unsigned long long)a0 response:(id)a1 error:(id)a2;
- (id)aAWEPadUserPageAdapter;
- (void)enterFullScreenFromSplitScreen;
- (id)padService;
- (void)checkLocateAvailable;
- (void)justWatchLocateButtonDidChangeShown:(BOOL)a0 animated:(BOOL)a1;
- (void)collectPiyataTruthParamsIfNeeded;
- (void)prepareSmartServiceIfNeeded;
- (BOOL)justWatchOnDidScroll;
- (void)justWatchHighlightAnimation:(BOOL)a0;
- (BOOL)onWillDisplayCell:(id)a0 indexPath:(id)a1;
- (BOOL)allowPreloadLocateWithNeedRequest:(BOOL)a0 isShowLocateBtn:(BOOL)a1;
- (void)preloadLocateIfNeeded;
- (double)justWatchButtonMidY;
- (void)trackLocateBtnPositionDurationIfNeeded;
- (void)justWatchManager:(id)a0 locateButtonDidChangeShown:(BOOL)a1 animated:(BOOL)a2;
- (id)locatePreloadSmartService;
- (void)trackJustWatchAnchorShow;
- (void)eventTrack4JustWatched:(id)a0 extraParams:(id)a1;
- (void)relatedAnchorEventTrackWithName:(id)a0 otherParams:(id)a1;
- (void)tryToLocateToJustWatchedItem;
- (BOOL)scrollToJustWatchedItemIfCould;
- (void)startLocateAction;
- (double)getVisibleCenterOffsetY:(id)a0;
- (void)startLoadMorePreviousAction;
- (void)justWatchManager:(id)a0 watchedItemDidChangePosition:(unsigned long long)a1 animated:(BOOL)a2;
- (void)justWatchManagerTrackWatchedItemExpose:(id)a0;
- (void).cxx_destruct;
- (id)viewController;
- (id)viewModel;
- (void)dealloc;
- (void)containerViewDidLayoutSubviews;
- (id)previousPage;
- (id)dataController;
- (void)containerViewDidLoad;

@end
