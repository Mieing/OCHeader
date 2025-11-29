@interface IESLiveAVResourceDecisionEngine : IESLivePrivacyDecisionEngine

- (id)evaluateWithRequest:(id)a0 policies:(id)a1 conditionProvider:(id)a2;
- (BOOL)isResourceMatched:(id)a0 withRequest:(id)a1;
- (BOOL)isIntentMatched:(id)a0 withRequest:(id)a1;
- (BOOL)isRoleMatched:(id)a0 withRequest:(id)a1;
- (BOOL)isBizTagMatched:(id)a0 withRequest:(id)a1;
- (BOOL)isSourceMatched:(id)a0 withRequest:(id)a1;
- (BOOL)isConditionMatched:(id)a0 context:(id)a1;

@end
