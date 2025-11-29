@class NSTimer, NSString, NSArray, AWEGeneralSearchAIModeButton, AWEGeneralSearchAIButtonTipsModel, AWEGeneralSearchAIBallButton, AWEGeneralSearchAIButtonTipsDataManager, NSOperationQueue, AWEGeneralSearchAIButtonModel;

@interface AWEGeneralSearchAIModeManager : NSObject

@property (retain, nonatomic) AWEGeneralSearchAIButtonModel *aiButtonModel;
@property (retain, nonatomic) AWEGeneralSearchAIButtonTipsDataManager *tipsDataManager;
@property (retain, nonatomic) AWEGeneralSearchAIButtonTipsModel *tipsModel;
@property (nonatomic) long long continuousNotClickCount;
@property (nonatomic) double searchStayTimeInterval;
@property (nonatomic) double lastAppearTimeInterval;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic) BOOL shouldNotKeepRequestTips;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *foldTimer;
@property (nonatomic) double tipsShowTime;
@property (nonatomic) double foldTimerLeftTime;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) double keepAliveInterval;
@property (nonatomic) double showIntervalTime;
@property (nonatomic) double tipsFoldTime;
@property (nonatomic) double showExitTime;
@property (nonatomic) long long notShowClickCount;
@property (retain, nonatomic) AWEGeneralSearchAIModeButton *aiModeButton;
@property (retain, nonatomic) AWEGeneralSearchAIBallButton *aiBallButton;
@property (copy, nonatomic) NSString *lastFeedID;
@property (copy, nonatomic) NSArray *preSearchIDlist;
@property (copy, nonatomic) NSString *searchSessionid;
@property (copy, nonatomic) NSString *clarifiedQuery;
@property (copy, nonatomic) id /* block */ didClickAIBallButtonBlock;
@property (copy, nonatomic) id /* block */ didClickAIModeButtonBlock;

- (void)executeTask;
- (void)windowDidResignKeyNotification:(id)a0;
- (void)windowDidBecomeKeyNotification:(id)a0;
- (void)containerViewDidAppear;
- (void)containerViewDidDisAppear;
- (void)updateTipsShowConfig;
- (void)revertAIModeConfig;
- (void)startSearchStayTime;
- (void)scheduleNextTaskAfterDelay:(double)a0;
- (double)safeAreaBottom:(id)a0;
- (BOOL)aiModeButtonRight;
- (void)trackDeepThinkBallShow;
- (void)tipsDismissAfterDelay:(double)a0;
- (void)endSearchStayTime;
- (void)removeAIButton;
- (BOOL)shouldShowTipsView;
- (void)requestGuideTips;
- (void)trackDeepThinkBannerShow;
- (void)foldTipsToAIBallButton;
- (void)foldTipsToAIModeButton;
- (void)trackDeepThinkBannerClick;
- (void)trackDeepThinkBallClick;
- (void)updateAIModeButtonWith:(id)a0 containerView:(id)a1;
- (void)containerViewScrollWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)AIRoundFinished;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive;
- (id)init;
- (void)applicationWillResignActive;
- (void)addObservers;
- (void)stopTask;

@end
