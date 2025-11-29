@interface TPJitterBufferConfig : NSObject

@property (nonatomic) int minDecreaseDurationMs;
@property (nonatomic) int maxIncreaseDurationMs;
@property (nonatomic) int perIncreaseDurationMs;
@property (nonatomic) int perDecreaseDurationMs;
@property (nonatomic) int adjustIntervalThresholdMs;
@property (nonatomic) int frozenThresholdMs;

- (id)init;
- (id)description;

@end
