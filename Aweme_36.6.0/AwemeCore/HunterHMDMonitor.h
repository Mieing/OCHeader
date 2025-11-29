@class HMDTTMonitor;

@interface HunterHMDMonitor : NSObject

@property (retain, nonatomic) HMDTTMonitor *defaultManager;

+ (void)reportWithEventName:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
