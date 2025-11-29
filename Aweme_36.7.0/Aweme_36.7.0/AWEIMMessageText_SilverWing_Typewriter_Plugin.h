@class NSString, NSMutableString, AWEIMWaittingReplyLoadingView, NSDate, NSMutableArray;

@interface AWEIMMessageText_SilverWing_Typewriter_Plugin : AWEIMFlexComponent <AWEIMMessageTextPluginProtocol>

@property (retain, nonatomic) AWEIMWaittingReplyLoadingView *loadingView;
@property (nonatomic) BOOL shouldShowLoadingView;
@property (retain) NSMutableString *writedString;
@property (retain) NSMutableArray *waitWritingQueue;
@property (nonatomic) BOOL isWriting;
@property (nonatomic) BOOL isMultiSelected;
@property (nonatomic) BOOL isEnterFromReport;
@property (nonatomic) double receiveFirstPackageTime;
@property (nonatomic) unsigned long long firstPackageCount;
@property (nonatomic) double packageCount;
@property (nonatomic) double speed;
@property (nonatomic) double waitingCount;
@property (retain, nonatomic) NSMutableArray *hichesTime;
@property (retain, nonatomic) NSDate *lastEmptyWaitingQueueTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableFormatTypewriter;
+ (id)animationOptimizeConfig;
+ (BOOL)canCreateV2WithContext:(id)a0;
+ (double)initSpeed;
+ (double)expFactor;
+ (double)hitchThreshold;
+ (BOOL)canCreateComponentWithContext:(id)a0;
+ (double)maxSpeed;
+ (double)minSpeed;

- (void)multiSelectUpdateIsEditMode:(BOOL)a0;
- (id)attributedContent;
- (void)componentDidMounted:(id)a0;
- (void)cellVisibleLifeCycleChanged:(unsigned long long)a0;
- (void)afterRenderCellDidFinished;
- (void)p_addKVO;
- (BOOL)shouldFetchMessage:(id)a0;
- (BOOL)isOverTimeLimitWithCreateTime:(double)a0 now:(double)a1;
- (void)markWaiting;
- (void)markWriting;
- (void)trackOnScreenEarlyIfNeeded;
- (void)trackHitchesIfNeeded;
- (id)getLoadingStr;
- (void)appendWithText:(id)a0;
- (double)caculateCurrentSpeed;
- (void)keepWriting;
- (void).cxx_destruct;
- (id)displayMessage;
- (void)beginLoading;

@end
