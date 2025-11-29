@interface IESLivePrivacyDecisionEngine : NSObject

+ (id)policyIdsWithPolicies:(id)a0;
+ (id)buildContextFromProvider:(id)a0 forCondition:(id)a1;
+ (id)extractRequiredFieldsFromCondition:(id)a0;

- (id)evaluateWithRequest:(id)a0 policies:(id)a1 conditionProvider:(id)a2;

@end
