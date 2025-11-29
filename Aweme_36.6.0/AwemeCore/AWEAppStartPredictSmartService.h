@class NSString, NSObject;
@protocol OS_dispatch_queue, AWEStorageServiceKVInterface;

@interface AWEAppStartPredictSmartService : HTSService <AWEAppStartPredictSmartService> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (nonatomic) long long appStartTimeMs;
@property (nonatomic) BOOL updateWhenBackground;
@property (nonatomic) BOOL updateGap;
@property (nonatomic) double reportRate;
@property (nonatomic) long long span;
@property (nonatomic) long long startStrategy;
@property (retain, nonatomic) NSString *scene;
@property (nonatomic) BOOL hasReport;
@property (nonatomic) BOOL hasPredict;
@property (nonatomic) BOOL isFirstEnterForeground;
@property (retain, nonatomic) id<AWEStorageServiceKVInterface> kvStorageHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue;
@property (nonatomic) BOOL dailyPredictEnable;
@property (nonatomic) BOOL weeklyPredictEnable;
@property (nonatomic) long long weeklySpan;
@property (retain, nonatomic) id lastResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)abTestConfig;
+ (id)getInstance;

- (void)runWithConfigBuilder:(id /* block */)a0 completion:(id /* block */)a1;
- (void)reportAndPredict;
- (id)predictSync;
- (void)reportMonitorData;
- (void)reportWeeklyMonitorData;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (id)init;
- (void)prepare;
- (id)serviceName;
- (void)applicationWillEnterForeground;
- (BOOL)enabled;
- (void)dealloc;
- (void)setupService;

@end
