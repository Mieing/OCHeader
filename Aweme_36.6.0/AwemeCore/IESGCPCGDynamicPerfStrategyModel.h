@class NSString;

@interface IESGCPCGDynamicPerfStrategyModel : NSObject

@property (copy, nonatomic) NSString *tuningParam;
@property (nonatomic) long long tuningValue;
@property (nonatomic) long long hitCount;
@property (nonatomic) long long freezePeriod;
@property (nonatomic) long long max;
@property (nonatomic) long long min;
@property (nonatomic) int currentHitCount;
@property (nonatomic) double lastHitTimestamp;

- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)isEqualToModel:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
