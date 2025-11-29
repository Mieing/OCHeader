@interface AWESECAppJumpBasicCheckResult : NSObject

@property (nonatomic) unsigned long long startTime;
@property (nonatomic) unsigned long long riskLevel;
@property (nonatomic) unsigned long long timeCost;

- (id)init;
- (void)start;
- (void)end;

@end
