@class NSString, AWESearchCachalotLynxPipeline, AWEPageContext;

@interface AWESearchDiscussViewController : AWESearchResultVerticalBaseViewController <AWESearchDynamicPreLayoutProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isTabSwitching;
@property (retain, nonatomic) AWEPageContext *pageContext;
@property (nonatomic) long long nonemptyResponseFinishCount;
@property (retain, nonatomic) AWESearchCachalotLynxPipeline *lynxPipeline;

+ (void)preprocessModel:(id)a0;
+ (BOOL)usePreLayoutLynxPipeline;

- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1 invalidateLayout:(BOOL)a2;
- (void)customRefreshResponseCompletion:(id /* block */)a0 withParams:(id)a1;
- (void)handleInsertCardsOperateWithInsertModel:(id)a0 atIndex:(long long)a1 completion:(id /* block */)a2;
- (Class)customDataControllerClass;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })customContentInsets;
- (double)loadMoreMarigin;
- (void)p_scrollSessionReset:(BOOL)a0;
- (void)customBeforeReloadCahcalotWithData:(id)a0 params:(id)a1;
- (void)customRefreshCachalotWithData:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (void)customEmptyResponseCompletion:(id /* block */)a0 withParams:(id)a1 isLoadMore:(BOOL)a2;
- (void)customBeforeRefreshCachalotWithViewModel:(id)a0 params:(id)a1;
- (BOOL)customShouldTurnOnAutoPreloadMoreWhenEndRefreshingCompleted;
- (void)customRefreshCachalotWithViewModel:(id)a0 params:(id)a1 completion:(id /* block */)a2;
- (id)passThroughExtraLog;
- (void)containerSwitchToTab:(long long)a0 withComplete:(id /* block */)a1;
- (BOOL)needUpdateSearchBackgroundWhenAppear;
- (long long)insertIndexForNewCard;
- (void)showCommentInputPanelWithLogExtra:(id)a0;
- (void)dismissCommentInputPanel;
- (void)deleteItemsAtIndexes:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateVerticalGlobalUIForRefresh:(id)a0;
- (void)setupPerformanceOptions;
- (void)commentCardDeleteNotification:(id)a0;
- (id)findComponentViewModelsWithBlock:(id /* block */)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })customContentInsetsWithBottomBar;
- (void)forceUnstickyAfterScroll;
- (BOOL)preferAppendData;
- (void)keepHeaderAndTabCardIfNeedWithParams:(id)a0;
- (BOOL)showInsertedCommentIfNeed;
- (void)triggerDynamicInsertWithKeyword:(id)a0;
- (void).cxx_destruct;
- (void)scrollToContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (void)dealloc;

@end
