@interface AWEFeedPrecisionDowngradeErrorConfig : NSObject

@property (nonatomic) long long commonCapacity;
@property (nonatomic) double commonExpireTimeDuration;
@property (nonatomic) long long commonErrorCodeMaxCount;
@property (nonatomic) long long capacity;
@property (nonatomic) double expireTimeDuration;
@property (nonatomic) long long errorCodeMaxCount;

- (long long)commonCapacityCalculated;
- (double)commonExpireTimeDurationCalculated;
- (long long)commonErrorCodeMaxCountCalculated;
- (id)initWithCapaticy:(long long)a0 expireTimeDuration:(double)a1 errorCodeMaxCount:(long long)a2;
- (id)init;

@end
