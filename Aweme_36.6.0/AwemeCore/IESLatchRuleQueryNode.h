@class NSString, NSArray;

@interface IESLatchRuleQueryNode : NSObject

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSArray *values;
@property (copy, nonatomic) NSString *ruleOperator;
@property (nonatomic) unsigned long long sourceType;

- (void).cxx_destruct;
- (id)jsonRepresentation;

@end
