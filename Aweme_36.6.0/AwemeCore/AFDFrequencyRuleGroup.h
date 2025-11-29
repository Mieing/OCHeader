@class NSArray;

@interface AFDFrequencyRuleGroup : AFDFrequencyRule

@property (nonatomic) BOOL hasSetUidSpecific;
@property (nonatomic) BOOL hasSetStorage;
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic) long long groupType;

- (void)setUidSpecific:(BOOL)a0;
- (id)ruleOfID:(id)a0;
- (BOOL)available;
- (void).cxx_destruct;
- (void)setStorage:(id)a0;
- (void)reset;

@end
