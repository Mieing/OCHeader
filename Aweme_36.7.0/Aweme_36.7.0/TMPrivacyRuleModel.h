@class NSString, NSDictionary;

@interface TMPrivacyRuleModel : NSObject

@property (copy, nonatomic) NSString *ruleKey;
@property (copy, nonatomic) NSDictionary *ruleConfig;

- (id)jsonDict;
- (void).cxx_destruct;

@end
