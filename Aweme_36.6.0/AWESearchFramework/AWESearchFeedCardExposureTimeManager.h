@class NSTimer, NSMutableArray;

@interface AWESearchFeedCardExposureTimeManager : NSObject

@property (nonatomic) BOOL isNotShowFinish;
@property (retain, nonatomic) NSMutableArray *modelQueue;
@property (retain, nonatomic) NSTimer *checkTimer;
@property (nonatomic) long long maxQueueCount;
@property (nonatomic) double intervalTime;
@property (nonatomic) BOOL isWaiting;
@property (nonatomic) BOOL isCanShowFeedback;
@property (nonatomic) BOOL isFinish;

+ (BOOL)isCanShowFeedbackInfo:(id)a0;
+ (id)sharedManager;

- (void)removeModel:(id)a0;
- (void)closeTimer;
- (void)insertModel:(id)a0;
- (void)clearAllModels;
- (void)startOrStopCheck;
- (double)transIntervalTimeSecondPeer;
- (void)timerCheckQueue;
- (BOOL)fetchNeedToCostShowEvent;
- (BOOL)fetchIsShowFinish;
- (void)newRefreshLoad;
- (void)endRefreshLoad;
- (void)receiveFeedbackShowSuccessEvent;
- (void)waitQuestionnaireLoad;
- (void)receiveLoadResult:(id)a0;
- (void)setUp;
- (void).cxx_destruct;
- (void)clear;
- (id)init;
- (void)dealloc;
- (void)setupTimer;

@end
