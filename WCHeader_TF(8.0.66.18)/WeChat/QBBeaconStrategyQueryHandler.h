@interface QBBeaconStrategyQueryHandler : NSObject

@property (nonatomic) int retryTime;

+ (id)sharedInstance;

- (id)init;
- (void)checkStrategyQuery:(double)a0;
- (void)startStrategyQuery;
- (void)failQuery:(id)a0;
- (void)failWithResponse:(id)a0 reqPkg:(id)a1;
- (void)finishWithResponse:(id)a0 reqPkg:(id)a1;
- (BOOL)processCommonStrategy:(id)a0;
- (BOOL)processStrategy:(id)a0;

@end
