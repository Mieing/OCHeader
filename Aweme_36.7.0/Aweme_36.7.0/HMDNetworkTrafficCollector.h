@interface HMDNetworkTrafficCollector : NSObject

@property (nonatomic) BOOL isRunning;

+ (id)sharedInstance;
+ (void)recordTrafficInfo:(id)a0;

- (void)stop;
- (void)start;

@end
