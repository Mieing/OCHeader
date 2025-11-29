@interface HMDBatteryMonitor : HMDMonitor

@property (nonatomic) double lastRecordTimestamp;
@property (nonatomic) double lastRecordBatteryLevel;
@property (nonatomic) double sessionStartBatteryLevel;
@property (nonatomic) double sessionUsedBatteryLevel;
@property (nonatomic) double minuteRecordinterval;
@property BOOL didAddObserver;

+ (id)sharedMonitor;

- (void)updateConfig:(id)a0;
- (unsigned long long)reporterPriority;
- (void)openBatteyMonitorInMainThread;
- (void)batteryLevelDidChange:(id)a0;
- (void)batteryStateDidChange:(id)a0;
- (id)recordForSpecificScene:(id)a0;
- (void)didEnterScene:(id)a0;
- (void)willLeaveScene:(id)a0;
- (id)refresh;
- (void)stop;
- (void)start;
- (void)dealloc;
- (void)didEnterBackground:(id)a0;
- (void)willEnterForeground:(id)a0;
- (Class)storeClass;

@end
