@class NSMutableSet;

@interface BUDBGroupCondition : BUDBCondition

@property (retain, nonatomic) NSMutableSet *conditions;
@property (nonatomic) unsigned long long connector;

- (id)conditionString;
- (void)addCondition:(id)a0;
- (void).cxx_destruct;
- (id)initWithCondition:(id)a0;
- (id)_connector;

@end
