@interface IESLiveRoomStatusDecisionEngine : IESLivePrivacyDecisionEngine

- (id)evaluateWithRequest:(id)a0 policies:(id)a1 conditionProvider:(id)a2;
- (BOOL)isIntentMatched:(id)a0 withRequest:(id)a1;
- (BOOL)isSourceMatched:(id)a0 withRequest:(id)a1;
- (BOOL)isConditionMatched:(id)a0 context:(id)a1;
- (BOOL)isEventMatched:(id)a0 withRequest:(id)a1;
- (id)mergeWithRequest:(id)a0 mergePolicies:(id)a1 allMatchPolicies:(id)a2;

@end
