@class NSString, NSArray, NSDictionary;

@interface AWEPOIVirgoOptiRuleModel : NSObject

@property (copy, nonatomic) NSString *ruleID;
@property (copy, nonatomic) NSArray *conditions;
@property (copy, nonatomic) NSString *expression;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSDictionary *results;
@property (readonly, nonatomic) BOOL isValidRule;

- (void).cxx_destruct;
- (id)initWithRule:(id)a0;

@end
