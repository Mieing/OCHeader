@class WCFinderTabPageView, WCFinderEmptyTipsView, NSString, NSMutableDictionary, MultiMoreLiveEnterParams, WCFinderLivePageStayReporter, WCFinderDiscoveryLiveTabPageViewModel, UIColor;

@interface WCFinderMultiMoreLiveViewController : MMCPUIViewController <WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderDiscoveryLiveTabPageViewModelDelegate, WCFinderNearbyMoreLivePageViewManagerDelegate, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) WCFinderTabPageView *tabPageView;
@property (retain, nonatomic) WCFinderEmptyTipsView *emptyTipsView;
@property (retain, nonatomic) NSMutableDictionary *tabId2pageManagerDict;
@property (retain, nonatomic) UIColor *navigationBarColor;
@property (retain, nonatomic) WCFinderDiscoveryLiveTabPageViewModel *viewModel;
@property (retain, nonatomic) MultiMoreLiveEnterParams *customEnterParams;
@property (nonatomic) unsigned long long initSelectedTabId;
@property (nonatomic) unsigned long long initSelectedSubTabId;
@property (retain, nonatomic) WCFinderLivePageStayReporter *exposeReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCustomEnterParams:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePushOrPresent:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)onBackButtonClicked:(id)a0;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (unsigned long long)defaultSelectedTabIndex;
- (id)channelExtraWithManager:(id)a0 isClick:(BOOL)a1 contentVM:(id)a2 index:(unsigned long long)a3 isAutoPlaying:(BOOL)a4;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (id)currentStyleColor:(id)a0;
- (void)reloadTabPage:(unsigned long long)a0;
- (id)reportPassInfoDict;
- (void)reportExposeTabInfo:(id)a0 toTabInfo:(id)a1 isEnter:(BOOL)a2;
- (void)checkUpdateSubTabContextId:(unsigned long long)a0;
- (unsigned int)getTabType;
- (void)updateTitle;
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
- (void)onFinderGetLiveTabsInfoFinished:(BOOL)a0;
- (void)finderMoreLivePageViewManger:(id)a0 jumpToTabInfo:(id)a1;
- (id)finderMoreLiveFeedViewBgColor;
- (BOOL)finderMoreLivePageAlwaysDarkStyle;
- (void)finderMoreLivePageViewMangerEnterLive:(id)a0 contentVM:(id)a1 isFold:(BOOL)a2 index:(unsigned long long)a3 isAutoPlaying:(BOOL)a4;
- (id)finderMoreLivePageViewMangerChannelExtra:(id)a0 contentVM:(id)a1 isFold:(BOOL)a2 index:(unsigned long long)a3;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void).cxx_destruct;

@end
