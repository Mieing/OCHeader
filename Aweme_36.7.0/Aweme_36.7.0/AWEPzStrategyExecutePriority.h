@interface AWEPzStrategyExecutePriority : NSObject

@property (class, readonly, nonatomic) AWEPzStrategyExecutePriority *verifyWithoutQueryHighest;
@property (class, readonly, nonatomic) AWEPzStrategyExecutePriority *verifyWithoutQueryDefault;
@property (class, readonly, nonatomic) AWEPzStrategyExecutePriority *verifyWithLightWeightQuery;
@property (class, readonly, nonatomic) AWEPzStrategyExecutePriority *verifyWithUnlimitedQuery;
@property (class, readonly, nonatomic) AWEPzStrategyExecutePriority *nonVerify;

@property (nonatomic) long long rawValue;

+ (id)verifyWithLimitedQuery;

- (id)initWithTimeLimitSeconds:(long long)a0;
- (id)initWithRawValue:(long long)a0;

@end
