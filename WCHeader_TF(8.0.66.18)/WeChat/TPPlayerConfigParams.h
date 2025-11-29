@interface TPPlayerConfigParams : NSObject

@property (nonatomic) long long bufferMinTotalDurationMs;
@property (nonatomic) long long bufferMaxTotalDurationMs;
@property (nonatomic) long long preloadTotalDurationMs;
@property (nonatomic) long long minBufferingDurationMs;
@property (nonatomic) long long minBufferingTimeMs;
@property (nonatomic) long long maxBufferingTimeMs;
@property (nonatomic) long long reduceLatencyAction;
@property (nonatomic) float reduceLatencySpeed;
@property (nonatomic) long long bufferStrategy;

- (id)init;

@end
