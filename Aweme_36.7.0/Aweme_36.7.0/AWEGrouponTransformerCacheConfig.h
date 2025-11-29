@interface AWEGrouponTransformerCacheConfig : NSObject

@property (nonatomic) long long strategy;
@property (nonatomic) double effectivePeriod;

- (id)initWithStrategy:(long long)a0 expiredDuration:(double)a1;
- (id)initWithStrategy:(long long)a0;

@end
