@class KPBattery, KPHeartbeatMainThread, NSObject;
@protocol OS_dispatch_queue;

@interface KiteProbeManager : NSObject

@property (retain, nonatomic) KPBattery *battery;
@property (retain, nonatomic) KPHeartbeatMainThread *heartbeatMainThread;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contextExecutionQueue;

+ (id)sharedManager;

- (void)execute:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)start;

@end
