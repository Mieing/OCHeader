@class WCFinderRedDotCtrlInfo, NSString, WCFinderLiveDiscoveryCacheModel, UIView, WCFinderTabPageModel, WCFinderDiscoveryLiveTabPageViewModel;
@protocol WCFinderLiveDiscoveryMoreLiveViewControllerDelegate;

@interface WCFinderLiveDiscoveryMoreLiveViewController : MMCPUIViewController <WCFinderLocationServiceExt, WCFinderDiscoveryLiveTabPageViewModelDelegate, WCFinderRedDotExt, MMLimitedModeEntryViewControllerExt, WCFinderFeedBaseViewControllerProtocol>

@property (retain, nonatomic) UIView *placeHolderView;
@property (retain, nonatomic) WCFinderTabPageModel *liveModel;
@property (retain, nonatomic) WCFinderLiveDiscoveryCacheModel *cacheModel;
@property (nonatomic) BOOL isLocationServiceAuthrized;
@property (nonatomic) unsigned long long selectedSubTabId;
@property (retain, nonatomic) WCFinderDiscoveryLiveTabPageViewModel *viewModel;
@property (copy, nonatomic) id /* block */ cacheModelUpdateBlock;
@property (retain, nonatomic) WCFinderRedDotCtrlInfo *finderLiveEntryRedDotCtrlInfo;
@property (nonatomic) BOOL directlyOpenJumpInfoPage;
@property (weak, nonatomic) id<WCFinderLiveDiscoveryMoreLiveViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveCacheModel:(id)a0 tabId:(unsigned long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillBePushed:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willAppear;
- (void)willDisappear;
- (void)viewWillBePoped:(BOOL)a0;
- (void)viewWillBeDismissed:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillLayoutSubviews;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (id)navigationBarBackgroundColor;
- (long long)overrideUserInterfaceStyle;
- (id)cacheViewModel;
- (void)setRedDotModeObjectID:(id)a0;
- (void)refreshPage;
- (void)onBackButtonClicked:(id)a0;
- (void)onSearchClicked;
- (void)_openJumpInfoPageWithCtrlInfo:(id)a0;
- (void)onFinderLocationServiceAuthorizationStatusDidChange:(BOOL)a0;
- (void)onFinderGetLiveTabsInfoFinished:(BOOL)a0;
- (void)checkAbnormalLiveIfNeeded;
- (void)finderRedDotDataChangedWithPathKey:(id)a0;
- (void)limitedModeEntryViewControllerViewDidBePoped:(id)a0;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (void).cxx_destruct;

@end
