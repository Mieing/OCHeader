@class HMDTTMonitor;

@interface TMMonitor : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;

+ (id)defaultMonitor;

- (void)tm_trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void).cxx_destruct;

@end
