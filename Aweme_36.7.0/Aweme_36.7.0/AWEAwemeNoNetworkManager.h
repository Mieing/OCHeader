@class NSArray, BFCancellationTokenSource, NSString, NSDate, NSMutableArray, AWENetworkPingTask;

@interface AWEAwemeNoNetworkManager : NSObject

@property (retain, nonatomic) BFCancellationTokenSource *requestingTokenSource;
@property (retain, nonatomic) AWENetworkPingTask *pingTask;
@property (retain, nonatomic) NSDate *lastSuccessDetectionDate;
@property (nonatomic) unsigned long long recentDetectionResult;
@property (nonatomic) unsigned long long detectionStage;
@property (copy, nonatomic) id /* block */ statusCompletionBlock;
@property (retain, nonatomic) NSMutableArray *disposeTokens;
@property (nonatomic) BOOL shouldEnableByPassDetection;
@property (copy, nonatomic) NSArray *detectSources;
@property (nonatomic) BOOL markByPassDetectionOnNetChanged;
@property (copy, nonatomic) NSString *currentDisplayingItemID;

+ (double)timeDelayFirstFrameWithFlag:(BOOL)a0;
+ (id)sharedInstance;

- (void)startNetworkDetection;
- (void)startNetworkByPassOnlyDetectionIfNeeded;
- (void)onFeedContentReceived:(BOOL)a0 withError:(id)a1;
- (BOOL)isInDetectingProcess;
- (BOOL)isInNoNetworkState;
- (void)checkNoNetworkNoticeStatusWithDelay:(double)a0 completion:(id /* block */)a1;
- (void)handleConnectionChanged:(id)a0;
- (void)handleResignActiveNotification;
- (void)cancelCurrentDetectionRequest;
- (void)startNetworkDetectionWithPingOnly:(BOOL)a0;
- (void)broadcastResult;
- (void)broadcastWithResult:(unsigned long long)a0;
- (void)startWithCompletion:(id /* block */)a0 pingOnly:(BOOL)a1;
- (id)startTaskWithDelay:(double)a0;
- (double)detectionTimeout;
- (id)targetURLs;
- (id)startNoNetworkDetectionWithTimeout:(double)a0 targetURL:(id)a1 cancellationToken:(id)a2;
- (double)freqLimitOnSuccess;
- (BOOL)shouldStartNewDetection:(double)a0;
- (void).cxx_destruct;
- (void)performBlock;
- (BOOL)isDetectionEnabled;
- (double)startDelay;

@end
