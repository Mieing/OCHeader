@class HMDTTMonitor;

@interface BDUGLuckyMonitor : NSObject

@property (retain, nonatomic) HMDTTMonitor *monitor;

+ (void)initializeMonitor;
+ (id)sharedInstance;

- (void)trackService:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (void)setupHMDMonitor;
- (void).cxx_destruct;

@end
