@class NSString;

@interface AWEPOIParamConditionRule : AWEPOIParamsRule <AWEPOIParamsRuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ruleName;
- (id)formatParamConfig:(id)a0 params:(id)a1;
- (BOOL)verifyEventParam:(id)a0 ruleItem:(id)a1 error:(id *)a2 failedReason:(id *)a3;

@end
