@class HMDTTMonitor;

@interface IESGurdMonitorManager : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;
@property (nonatomic) long long flushCount;

+ (id)sharedManager;

- (void)setupMonitor;
- (void)monitorEvent:(id)a0 category:(id)a1 metric:(id)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
