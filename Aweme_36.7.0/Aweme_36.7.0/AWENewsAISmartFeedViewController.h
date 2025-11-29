@class AWENewsAISmartFeedViewModel, AWENewsAISmartFeedNetWorkErrorPage, AWENewsAISmartFeedEmptyPage, AWENewsAISmartFeedPageContext, BDXBridgeEventSubscriber, NSString, AWENewsAISmartLoadMoreFooterView, AWENewsAISmartFeedRefreshHeaderView, AWENewsAISmartFeedTrackRefreshHeaderView, AWECommonFeedContainerViewController;

@interface AWENewsAISmartFeedViewController : UIViewController <AWEUserMessage, AWENewsAISmartFeedViewModelDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) AWECommonFeedContainerViewController *commonContainerVC;
@property (retain, nonatomic) AWENewsAISmartFeedViewModel *viewModel;
@property (retain, nonatomic) AWENewsAISmartFeedNetWorkErrorPage *networkErrorPage;
@property (retain, nonatomic) AWENewsAISmartFeedEmptyPage *emptyPage;
@property (retain, nonatomic) AWENewsAISmartFeedPageContext *context;
@property (retain, nonatomic) AWENewsAISmartFeedRefreshHeaderView *refreshHeader;
@property (retain, nonatomic) AWENewsAISmartFeedTrackRefreshHeaderView *trackRefreshHeader;
@property (retain, nonatomic) AWENewsAISmartLoadMoreFooterView *loadMoreFooter;
@property (nonatomic) unsigned long long feedCurrentState;
@property (retain, nonatomic) BDXBridgeEventSubscriber *dislikePanelShowSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *deleteTrackCardSubscriber;
@property (retain, nonatomic) BDXBridgeEventSubscriber *willShowCardSubscriber;
@property (nonatomic) BOOL hasInitFetch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didFinishLoginWithUid:(id)a0;
- (id)logExtraDict;
- (id)getScrollView;
- (void)beginRefresh;
- (void)p_bindViewModel;
- (void)p_addEmptyPage;
- (void)p_removeErrorOrEmptyPageIfNeeded;
- (void)updateContainerVC:(id)a0;
- (void)p_configUIComponent;
- (void)p_loadPlaceholderView;
- (void)p_addNetworkErrorEmptyPage;
- (void)p_registerEvent;
- (id)initWithPageContext:(id)a0;
- (void)p_beginRefreshing;
- (void)p_initData;
- (BOOL)p_isDiscovery;
- (BOOL)p_isMyTrack;
- (void)p_updateCurrState:(unsigned long long)a0;
- (BOOL)p_isTrackDetail;
- (void)p_showCardCount;
- (void)p_unRegisterEvent;
- (void)p_dataControllerLoadMore;
- (void)p_configureRefreshHeaderIfNeeded;
- (void)p_updateRefreshHeaderAfterFetchWithArray:(id)a0 error:(id)a1;
- (void)p_finalizeUIAfterFetchWithArray:(id)a0 error:(id)a1;
- (void)p_refreshData;
- (void)p_showDislikePanelWithParams:(id)a0;
- (id)p_visibleSectionViewModels;
- (void)insertCardModels:(id)a0 atIndex:(id)a1 animated:(BOOL)a2;
- (void)clearPlaceHolderAndDisplayCard;
- (void)removeDisplayCardModels:(id)a0 animated:(BOOL)a1;
- (void)scrollToCollectionViewTopAnimated:(BOOL)a0;
- (void)feedScrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (id)dataController;
- (void)p_addObservers;

@end
