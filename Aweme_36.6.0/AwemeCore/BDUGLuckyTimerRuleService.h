@class NSLock, NSMutableDictionary, NSString;

@interface BDUGLuckyTimerRuleService : NSObject <BDUGLuckyTimerRuleServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *ruleExecuteClassDic;
@property (retain, nonatomic) NSMutableDictionary *ruleListenerDic;
@property (retain, nonatomic) NSMutableDictionary *ruleDic;
@property (nonatomic) BOOL hasRegisterRuleExecuteClass;
@property (retain, nonatomic) NSLock *hasRegisterRuleLock;
@property (copy, nonatomic) NSString *gaiaMethodKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerRuleClass:(Class)a0;
- (void)__addSatisfyStatusChangeObserverWithRule:(id)a0;
- (id)registerRuleListener:(id)a0 rules:(id)a1;
- (void)unregisterRuleListener:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
