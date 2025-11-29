@class NSString, NSMutableArray;

@interface AWESolariaNearLineManager : NSObject <FantaDataCollectorListener>

@property (nonatomic) BOOL hasInit;
@property (nonatomic) BOOL isColdLaunchFirstRequest;
@property (retain, nonatomic) NSMutableArray *waitSendBodyQueue;
@property (retain, nonatomic) NSMutableArray *waitRunBodyQueue;
@property (nonatomic) BOOL isInRunTaskDelay;
@property (nonatomic) double setupTimeMs;
@property (nonatomic) double lastBackgroundMs;
@property (nonatomic) double lastForegroundMs;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } sendQueueMutex;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } runQueueMutex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)onAppDidEnterBackground:(id)a0;
- (void)onDataCollector:(id)a0 collectData:(id)a1;
- (BOOL)isLookEvent:(id)a0;
- (void)onAppWillEnterForeground:(id)a0;
- (void)onEvent:(id)a0 eventParams:(id)a1;
- (void)onAppForeground:(long long)a0 backgroundDuration:(long long)a1;
- (void)onAppBackground:(long long)a0 foregroundDuration:(long long)a1;
- (void)runWaitTask:(long long)a0 params:(id)a1;
- (void)onReportSuccess:(id)a0;
- (void)onReportFailed:(id)a0;
- (void)buildAndRequestNearLine:(id)a0 now:(long long)a1;
- (void)onAppTimeAlarm:(long long)a0;
- (void)sendBodyRunnable;
- (void)runBodyRunnable;
- (void)onAppForegroundReal:(id)a0;
- (void)onAppBackgroundReal:(id)a0;
- (void)onAppTimeAlarmReal:(id)a0;
- (void)onEventReal:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setupIfNeeded;

@end
