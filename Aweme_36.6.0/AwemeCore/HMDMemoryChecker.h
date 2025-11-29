@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HMDMemoryChecker : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *checkerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) struct { unsigned long long minRemainingVirtualMemory; unsigned long long dangerThreshold; unsigned long long growingStep; double checkInterval; double minNotifyInterval; BOOL manualMemoryWarning; int memorySurgeThresholdMB; } builder;
@property (nonatomic) unsigned long long actualThreshold;
@property (nonatomic) unsigned long long minRemainingVirtualMemory;
@property (nonatomic) double notifyTimestamp;
@property (nonatomic) unsigned long long lastMemoryUsage;

- (void)checkMemoryUsagePeriodly;
- (void)activateByBuilder:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; double x3; double x4; BOOL x5; int x6; })a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;

@end
