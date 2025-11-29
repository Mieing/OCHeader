@interface CepEngineManager : NSObject

+ (id)sharedInstance;

- (id)registerRulesWithHost:(id)a0 bizName:(id)a1 rules:(id)a2 config:(id)a3;
- (id)registerRuleWithHost:(id)a0 bizName:(id)a1 ruleName:(id)a2 rule:(id)a3 config:(id)a4;
- (void)unregisterRuleWithHost:(id)a0 bizName:(id)a1 ruleName:(id)a2;
- (void)registerCalbackWithHost:(id)a0 bizName:(id)a1 ruleName:(id)a2 callback:(id /* block */)a3;
- (void)unregisterCallbackWithHost:(id)a0 bizName:(id)a1 ruleName:(id)a2;
- (void)registerFunctionWithHost:(id)a0 bizName:(id)a1 functionName:(id)a2 function:(id /* block */)a3;
- (void)unregisterFunctionWithHost:(id)a0 bizName:(id)a1 functionName:(id)a2;
- (id)processEventWithHost:(id)a0 bizName:(id)a1 ruleName:(id)a2 eventName:(id)a3 event:(id)a4 eventTimestamp:(long long)a5;
- (void)onEventWithHost:(id)a0 bizName:(id)a1 ruleName:(id)a2 eventName:(id)a3 event:(id)a4 eventTimestamp:(long long)a5;
- (void)configEngine:(id)a0;
- (id)registerRulesWithBizName:(id)a0 rules:(id)a1 config:(id)a2;
- (id)registerRuleWithBizName:(id)a0 ruleName:(id)a1 rule:(id)a2 config:(id)a3;
- (void)unregisterRuleWithBizName:(id)a0 ruleName:(id)a1;
- (void)registerCalbackWithBizName:(id)a0 ruleName:(id)a1 callback:(id /* block */)a2;
- (void)unregisterCallbackWithBizName:(id)a0 ruleName:(id)a1;
- (void)registerFunctionWithBizName:(id)a0 functionName:(id)a1 function:(id /* block */)a2;
- (void)unregisterFunctionWithBizName:(id)a0 functionName:(id)a1;
- (id)processEventWithBizName:(id)a0 ruleName:(id)a1 eventName:(id)a2 event:(id)a3 eventTimestamp:(long long)a4;
- (void)onEventWithBizName:(id)a0 ruleName:(id)a1 eventName:(id)a2 event:(id)a3 eventTimestamp:(long long)a4;

@end
