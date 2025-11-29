@class RTVInteractionThrottlerConfig;

@interface RTVBarrierThrottler : RTVThrottler

@property (retain, nonatomic) RTVInteractionThrottlerConfig *config;

+ (id)throttlerWithConfig:(id)a0;

- (id)__doExecute:(BOOL *)a0;
- (id)initWithConfig:(id)a0;

@end
