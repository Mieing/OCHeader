@class AWEEcomAISearchResultBackgroundView, NSString, AWEUILoadingView, AWEEcomAISearchResultViewModel, AWEEcomAISearchResultHeaderView, AWEEcomSearchList, AWEEcomAISearchResultSuspensionLayerViewController, AWEEcomSearchVacantView;

@interface AWEEcomAISearchResultViewController : UIViewController <AWEEcomAISearchResultViewModelDelegate, AWEEcomAISearchResultLynxCardListControllerDelegate, AWERouterViewControllerProtocol, BTMPageManagableProtocol, UIScrollViewDelegate>

@property (retain, nonatomic) AWEEcomAISearchResultBackgroundView *backgroundView;
@property (retain, nonatomic) AWEEcomAISearchResultHeaderView *headerView;
@property (retain, nonatomic) AWEEcomSearchList *searchList;
@property (retain, nonatomic) AWEEcomAISearchResultSuspensionLayerViewController *suspensionLayer;
@property (retain, nonatomic) AWEEcomSearchVacantView *emptyView;
@property (retain, nonatomic) AWEEcomSearchVacantView *errorView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEEcomAISearchResultViewModel *viewModel;
@property (nonatomic) BOOL shouldAutomaticallyScrollToBottom;
@property (nonatomic) BOOL scrollViewIsAtBottom;
@property (nonatomic) BOOL scrollViewIsDragging;
@property (nonatomic) BOOL isScrollingToBottom;
@property (nonatomic) BOOL isScrollViewIsDragged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)safeAreaBottomOffset;

- (void)setAweui_viewControllerState:(unsigned long long)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (id)btm_pageIdentifier;
- (void)scrollViewDidEndScroll:(id)a0;
- (void)configBtmTracker;
- (id)trackerContext;
- (void)willConfigLynxCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)didConfigLynxCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)willDisplayLynxCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)didEndDisplayingLynxCell:(id)a0 withModel:(id)a1 atIndexPath:(id)a2;
- (void)setupThemeStyle;
- (void)refreshPageWithListUpdateMethod:(id)a0;
- (long long)preferUIThemeStyle;
- (void)addChildVC:(id)a0;
- (void)configureAutoScrollBottom;
- (void)bindPageData:(id)a0 listUpdateMethod:(id)a1;
- (void)switchPageState:(long long)a0;
- (void)updateLoadMoreFooter:(long long)a0;
- (void)sendAppendDataList:(id)a0 toLynxCard:(id)a1 isFullUpdate:(BOOL)a2;
- (void)registerEventCallBackForLynxCard:(id)a0 withModel:(id)a1;
- (void)unregisterEventCallBackForLynxCard:(id)a0;
- (double)getMaximumCOTCardDisplayHeight;
- (void)scrollToCOTCardBottom;
- (BOOL)isScrollViewAtBottom:(id)a0;
- (double)getCOTCardBottomOffset;
- (BOOL)isScrollViewAtBottom:(id)a0 withContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (double)excessContentHeightForContentSize:(struct CGSize { double x0; double x1; })a0 contentOffset:(struct CGPoint { double x0; double x1; })a1 frameHeight:(double)a2;
- (double)autoScrollToBottomThreshold;
- (void)handleExit:(long long)a0;
- (void)willStartNewSearch;
- (void)requestError:(id)a0 isLoadMore:(BOOL)a1;
- (void)requestEmpty:(id)a0;
- (void)updatePageForReason:(long long)a0 withListUpdateMethod:(id)a1;
- (void)appendContent:(id)a0 forItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)initWithViewModel:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)fetchData;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)dealloc;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (id)collectionView;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupSubviews;

@end
