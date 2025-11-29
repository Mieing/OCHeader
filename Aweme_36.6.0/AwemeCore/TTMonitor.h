@class NSObject;
@protocol OS_dispatch_queue;

@interface TTMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)shareManager;
+ (void)trackData:(id)a0 logTypeStr:(id)a1;
+ (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
+ (double)timeIntervalForKey:(id)a0;
+ (void)cancelTimingForKey:(id)a0;
+ (void)trackService:(id)a0 value:(float)a1 extra:(id)a2;
+ (BOOL)endTimingForKey:(id)a0 service:(id)a1 label:(id)a2;
+ (BOOL)endTimingForKey:(id)a0 service:(id)a1 label:(id)a2 duration:(double *)a3;
+ (void)setCacheSemaphoreEnable:(BOOL)a0;
+ (void)startWithAppkey:(id)a0;
+ (void)setMonitorProtocol:(id)a0;
+ (BOOL)cacheSemaphoreEnabled;
+ (id)cacheSemaphore;
+ (void)excuteStoredEventActions;
+ (void)dealEventAction:(id /* block */)a0;
+ (id)timingSemaphore;
+ (BOOL)isStart;
+ (void)startTimingForKey:(id)a0;
+ (void)setIsStart:(BOOL)a0;
+ (id)cachedEvents;
+ (id)timingDict;

- (void)hmdTrackData:(id)a0 logTypeStr:(id)a1;
- (void)hmdTrackService:(id)a0 attributes:(id)a1;
- (void)hmdTrackService:(id)a0 value:(id)a1 extra:(id)a2;
- (void)hmdTrackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (void)trackData:(id)a0 logTypeStr:(id)a1;
- (void)trackService:(id)a0 status:(long long)a1 extra:(id)a2;
- (void)trackService:(id)a0 value:(id)a1 extra:(id)a2;
- (void)trackService:(id)a0 attributes:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
