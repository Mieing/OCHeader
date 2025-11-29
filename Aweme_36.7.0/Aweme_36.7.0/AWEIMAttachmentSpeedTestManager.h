@class NSString, BFCancellationTokenSource, BFTask, NSObject;
@protocol AWEIMSpeedTestUploadVideoStrategyProtocol, OS_dispatch_queue;

@interface AWEIMAttachmentSpeedTestManager : NSObject <AWEUserMessage>

@property (retain, nonatomic) id<AWEIMSpeedTestUploadVideoStrategyProtocol> speedTestStratety;
@property (retain, nonatomic) BFTask *dependencyTask;
@property (retain, nonatomic) BFCancellationTokenSource *cancelToken;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogoutWithUid:(id)a0;
- (int)limitSecond;
- (id)startSpeedTestIfNeed;
- (id)checkHasSpeedTestCacheOrNot;
- (id)beginSpeedTestTask;
- (id)createTaskSource;
- (id)fetchSpeedTestConfig;
- (id)startSpeedTestWithContext:(id)a0;
- (void)saveSpeedTest:(id)a0;
- (BOOL)checkEnableContinueWithTask:(id)a0;
- (id)getSaveSpeedTestCache;
- (BOOL)isOverDateWithPreDate:(id)a0 currentDate:(id)a1;
- (BOOL)isSameNetworkStatus:(id)a0;
- (id)speedTestDic;
- (id)completionSpeedTestTask;
- (int)abtestThreshold;
- (id)abtestSliceSize;
- (id)abtestSocketNum;
- (id)videoConfig;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
