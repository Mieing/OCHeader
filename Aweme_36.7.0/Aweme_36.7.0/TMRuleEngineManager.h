@class NSString;

@interface TMRuleEngineManager : NSObject <BDRuleEngineDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updateCustomEnvWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
+ (void)registerCustomEnvWithKey:(id)a0 type:(unsigned long long)a1 value:(id)a2;
+ (void)registerCustomEnvWithKey:(id)a0 type:(unsigned long long)a1 builder:(id /* block */)a2;
+ (void)registerLocalNetworkFunctions;
+ (void)registerPasteboardFunctions;
+ (void)start;
+ (id)sharedInstance;
+ (void)appWillEnterForeground;
+ (void)appDidEnterBackground;

- (void)report:(id)a0 tags:(id)a1 block:(id /* block */)a2;
- (void)log:(id)a0 metric:(id)a1 category:(id)a2 extra:(id)a3;
- (id)ruleEngineConfig;

@end
