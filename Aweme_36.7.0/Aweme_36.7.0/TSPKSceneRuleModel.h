@class NSString, NSDictionary, NSSet;

@interface TSPKSceneRuleModel : NSObject

@property (nonatomic) long long ruleId;
@property (copy, nonatomic) NSString *ruleName;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSSet *ruleIgnoreCondition;

+ (id)createWithDictionary:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
