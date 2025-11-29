@class NSString;

@interface BUDBSingleCondition : BUDBCondition

@property (copy, nonatomic) NSString *field;
@property (retain, nonatomic) id value;
@property (nonatomic) unsigned long long type;

- (id)conditionStringForGroup;
- (id)conditionString;
- (id)_type;
- (void).cxx_destruct;

@end
