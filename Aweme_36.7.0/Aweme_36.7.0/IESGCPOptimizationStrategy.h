@class NSDictionary, NSString, NSArray;

@interface IESGCPOptimizationStrategy : NSObject

@property (copy, nonatomic) NSDictionary *metaDict;
@property (nonatomic) unsigned long long priority;
@property (copy, nonatomic) NSString *strategyId;
@property (nonatomic) unsigned long long hitRegularThreshold;
@property (copy, nonatomic) NSArray *outputActions;
@property (nonatomic) unsigned long long hitRegularCount;

- (BOOL)isValidCondition;
- (void)parseActionModes;
- (BOOL)isValidOutput;
- (BOOL)isHitEnvironment:(id)a0;
- (BOOL)isHitStrategy:(id)a0;
- (BOOL)shouldExecute;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithConfiguration:(id)a0;

@end
