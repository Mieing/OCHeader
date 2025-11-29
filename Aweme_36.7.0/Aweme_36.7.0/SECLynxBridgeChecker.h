@class NSString;

@interface SECLynxBridgeChecker : NSObject <SECHybridAPICheckDecisionProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)__preMatchRulesWithUrl:(id)a0 containerType:(unsigned long long)a1;
- (BOOL)__hitRuleGroup:(id)a0 bridgeContext:(id)a1;
- (BOOL)__isPatternMatched:(id)a0 url:(id)a1 type:(unsigned long long)a2;
- (BOOL)__hitSingleRule:(id)a0 bridgeContext:(id)a1;
- (void)preMatchRulesWithUrl:(id)a0 containerType:(unsigned long long)a1;
- (id)checkBridgeCallableWithBridgeContext:(id)a0 containerType:(unsigned long long)a1;

@end
