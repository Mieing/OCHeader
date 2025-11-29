@interface AWEMRUnconsumedCoolDownStrategyDataModel : NSObject

@property (nonatomic) long long exitTime;
@property (nonatomic) long long countLimit;

- (BOOL)isValid;
- (id)initWithDictionary:(id)a0;

@end
