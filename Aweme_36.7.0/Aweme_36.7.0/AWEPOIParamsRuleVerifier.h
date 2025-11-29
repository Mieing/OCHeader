@class NSMutableDictionary;

@interface AWEPOIParamsRuleVerifier : NSObject

@property (class, readonly, nonatomic) NSMutableDictionary *ruleMap;

+ (void)registerRuleVerifier:(id)a0;
+ (void)verifyEventParam:(id)a0 ruleModel:(id)a1 error:(id *)a2;

@end
