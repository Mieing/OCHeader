@class NSError, NSDictionary, NSDate;

@interface AWELiveStreamNotRenderTraceElement : AWELiveBaseElement

@property (nonatomic) double startTime;
@property (retain, nonatomic) NSError *pullStreamError;
@property (nonatomic) BOOL hasReceiveFirstFrame;
@property (nonatomic) long long resumeType;
@property (nonatomic) long long willResumeType;
@property (nonatomic) long long sceneErrorCode;
@property (copy, nonatomic) NSDictionary *playerStateDetailInfo;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isScrolling;
@property (nonatomic) BOOL nodeOptimizeStarted;
@property (nonatomic) long long endDraggingTime;
@property (retain, nonatomic) NSDate *firstFrameDate;

- (void)initializeElement;
- (void)viewController_viewWillAppear;
- (void)viewController_viewDidAppear;
- (void)onUserQuitLiveRoom:(id)a0;
- (void)application_WillResignActive;
- (void)viewController_viewDidDisAppear;
- (void)prepareForDisPlay;
- (void)onUserEnterLiveRoom:(id)a0;
- (void)application_DidEnterBackground;
- (void)preloadElement;
- (void)streamPlayer_startToPlay;
- (id)performanceInfo;
- (void)viewController_viewWillDisAppear;
- (void)viewController_willBeginDragging:(id)a0;
- (void)viewController_willEndDragging:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (void)application_DidBecomeActive;
- (void)streamPlayer_firstFrame;
- (void)streamPlayer_willStopWithToken:(id)a0;
- (void)streamPlayer_finish;
- (void)streamPlayer_error:(id)a0;
- (void)preCheckPlayerStateIfNeeded;
- (void)collectionPreviewFeature;
- (BOOL)isTracing;
- (void)startMonitorWithResumeType:(long long)a0;
- (void)clearTrace;
- (void)reportMonitorEventIfNeeded:(long long)a0;
- (id)resumeTypeString:(long long)a0;
- (id)checkPlayerStateInfo;
- (id)netQualityInfo;
- (BOOL)isNoRender;
- (BOOL)ignorePlayerViewCheck;
- (void)trackAppLeave:(BOOL)a0;
- (void)viewController_endDecelerating:(id)a0 velocity:(struct CGPoint { double x0; double x1; })a1;
- (id)requestID;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;

@end
