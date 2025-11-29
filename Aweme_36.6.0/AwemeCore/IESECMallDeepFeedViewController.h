@class NSString, IESECMallDeepFeedNode, IESECTracker, IESECMallDeepFeedContainerView, IESECMallDeepFeedRequestManager;

@interface IESECMallDeepFeedViewController : UIViewController <IESECSKUServiceProtocol, IESECMallDeepFeedContextProvider, IESECMallDeepFeedContainerViewDelegate>

@property (nonatomic) BOOL isAppearing;
@property (retain, nonatomic) IESECTracker *tracker;
@property (retain, nonatomic) IESECMallDeepFeedNode *node;
@property (retain, nonatomic) IESECMallDeepFeedRequestManager *requestManager;
@property (retain, nonatomic) IESECMallDeepFeedContainerView *containerView;
@property (nonatomic) unsigned long long displayTime;
@property (nonatomic) unsigned long long timeOnPage;
@property (copy, nonatomic) NSString *registerSystemVolumeChangedIdentifier;
@property (nonatomic) BOOL hasClickBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams;
- (void)configBtmTrackerV2;
- (double)transitionCornerRadius;
- (id)deepFeedFilters;
- (void)startAutoPlay;
- (void)stopAutoPlay;
- (id)getBtmIDWithActionType:(unsigned long long)a0 index:(long long)a1 enterNewPage:(BOOL)a2;
- (void)skudSpecsChangedWithSKUInfo:(id)a0;
- (id)btmIDWithBtmInfo:(id)a0 enterNewPage:(BOOL)a1;
- (void)didAddCartWithSKUInfo:(id)a0;
- (id)initWithFeedNode:(id)a0 requestManager:(id)a1;
- (void)applicationWillResignActive:(id)a0;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)applicationDidBecomeActive:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (void)loadView;
- (void)setupUI;
- (void)setCanAutoPlay:(BOOL)a0;

@end
