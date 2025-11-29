@class WCFinderLiveTabInfo, WCFinderNearbyMoreLivePageViewManager, NSString, WCFinderLivePageStayReporter;

@interface WCFinderLiveMoreLiveCityViewController : MMCPUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderNearbyMoreLivePageViewManagerDelegate>

@property (retain, nonatomic) WCFinderNearbyMoreLivePageViewManager *pageViewManger;
@property (nonatomic) int reportScene;
@property (retain, nonatomic) WCFinderLiveTabInfo *cityTabInfo;
@property (nonatomic) BOOL hasRefreshLiveTabInfo;
@property (retain, nonatomic) WCFinderLivePageStayReporter *exposeReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLiveTabInfo:(id)a0 fromScene:(int)a1;
- (void)dealloc;
- (void)onEnterBackground;
- (void)onEnterForeground;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (void)reloadFeedFlowView;
- (void)reportExpose:(BOOL)a0;
- (void)setLiveTabInfo:(id)a0;
- (id)finderMoreLiveFeedViewBgColor;
- (void)finderMoreLivePageViewMangerEnterLive:(id)a0 contentVM:(id)a1 isFold:(BOOL)a2 index:(unsigned long long)a3 isAutoPlaying:(BOOL)a4;
- (id)finderMoreLivePageViewMangerChannelExtra:(id)a0 contentVM:(id)a1 isFold:(BOOL)a2 index:(unsigned long long)a3;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
