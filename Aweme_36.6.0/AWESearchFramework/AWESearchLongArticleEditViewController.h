@class UIView, NSString, AWESearchEditPageBottomBar, NSTimer, AWEUITextLoadingView, AWEVideoPublishViewModel, AWEUILoadingView, AWESearchEditPageNaviBar, AWESearchEditPageMiddleContentView, DUXVacantView, NSDictionary, AWESearchEditPageTrackManager;

@interface AWESearchLongArticleEditViewController : UIViewController <AWEStudioPageProtocol>

@property (retain, nonatomic) AWESearchEditPageNaviBar *naviBar;
@property (retain, nonatomic) AWESearchEditPageBottomBar *bottomBar;
@property (retain, nonatomic) AWESearchEditPageMiddleContentView *middleContentView;
@property (retain, nonatomic) UIView *maskView;
@property (retain, nonatomic) DUXVacantView *errorView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEUITextLoadingView *nextLoadingView;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (readonly, copy, nonatomic) NSString *enterFrom;
@property (readonly, copy, nonatomic) NSString *enterMethod;
@property (readonly, copy, nonatomic) NSString *searchKeyword;
@property (readonly, nonatomic) BOOL disableShowTitleTips;
@property (nonatomic) BOOL receiveMidPageError;
@property (readonly, copy, nonatomic) NSDictionary *shareParams;
@property (readonly, copy, nonatomic) NSString *urlFromShare;
@property (copy, nonatomic) NSString *logId;
@property (copy, nonatomic) NSString *markDownInfo;
@property (copy, nonatomic) NSString *coverImageUrl;
@property (copy, nonatomic) NSString *hashCode;
@property (retain, nonatomic) NSTimer *launchEditTimer;
@property (retain, nonatomic) AWESearchEditPageTrackManager *trackManager;
@property (nonatomic) double startTimeStamp;
@property (copy, nonatomic) NSDictionary *trackerParams;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) id /* block */ cancelButtonClickedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)searchAIGCPostLongImageTextConfig;
+ (double)nextButtonWaitTime;

- (BOOL)configWithRouterParamDict:(id)a0;
- (id)currentPagePublishViewModel;
- (void)dismissLoadingView;
- (void)addNotification;
- (void)applicationWillResignActiveNotification;
- (id)editConfig;
- (void)startCoverInfoRequestWithShareParamsIfNeeded;
- (void)startShareInfoRequestWithSearchID:(id)a0 params:(id)a1;
- (id)cotCardFold;
- (id)logTag:(SEL)a0;
- (void)subscribeBridgeEvents;
- (void)dismissNextLoadingView;
- (void)leaveAISearchResultEditPageWithLeaveMethodType:(unsigned long long)a0;
- (void)showNextLoadView;
- (void)requestCoverImageWithLogId:(id)a0;
- (void)sendEventToGetLongArticleImageIfNeeded;
- (double)navigationBarHeight;
- (void)stopTimer;
- (void).cxx_destruct;
- (void)startTimer;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)setupUI;
- (double)bottomBarHeight;
- (void)showLoadingView;
- (void)showErrorView;

@end
