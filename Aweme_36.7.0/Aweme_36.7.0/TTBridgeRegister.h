@class NSArray, BDXThreadSafeDictionary, NSHashTable;
@protocol TTBridgeInterceptor, TTBridgeRegisterProtocol, TTBridgeDocumentor, TTBridgeEngine;

@interface TTBridgeRegister : NSObject {
    BDXThreadSafeDictionary *_methodDic;
    BDXThreadSafeDictionary *_domain2PrivateMethods;
}

@property (class, weak, nonatomic) id<TTBridgeDocumentor> documentor;
@property (class, weak, nonatomic) id<TTBridgeInterceptor> interceptor;

@property (weak, nonatomic) id<TTBridgeInterceptor> interceptor;
@property (retain, nonatomic) NSHashTable *interceptors;
@property (weak, nonatomic) id<TTBridgeDocumentor> documentor;
@property (copy, nonatomic) NSArray *namespaceOrdered;
@property (weak, nonatomic) id<TTBridgeRegisterProtocol> delegate;
@property (weak, nonatomic) id<TTBridgeEngine> engine;

+ (void)addInterceptor:(id)a0;
+ (void)removeInterceptor:(id)a0;
+ (BOOL)bridgeEngine:(id)a0 shouldHandleGlobalBridgeCommand:(id)a1;
+ (BOOL)bridgeEngine:(id)a0 shouldHandleLocalBridgeCommand:(id)a1;
+ (void)bridgeEngine:(id)a0 willExecuteBridgeCommand:(id)a1;
+ (BOOL)bridgeEngine:(id)a0 shouldCallbackUnregisteredCommand:(id)a1;
+ (void)bridgeEngine:(id)a0 willCallbackBridgeCommand:(id)a1;
+ (BOOL)bridgeEngine:(id)a0 shouldUseExternalAuthorizeForCommand:(id)a1;
+ (void)_doRegisterIfNeeded;
+ (id)sharedRegister;
+ (BOOL)isGlobalMethodsRegistered;
+ (void)ensureGlobalMethodsRegistered;
+ (id)belongingViewControllerForEngine:(id)a0;
+ (id)topViewControllerForEngine:(id)a0;

- (void)registerBridge:(id /* block */)a0;
- (BOOL)respondsToBridge:(id)a0;
- (id)methodInfoForBridge:(id)a0;
- (void)unregisterBridge:(id)a0;
- (void)executeCommand:(id)a0 engine:(id)a1 completion:(id /* block */)a2;
- (BOOL)respondsToCommand:(id)a0;
- (BOOL)respondsToCommand:(id)a0 engineType:(long long)a1;
- (id)methodInfoForCommand:(id)a0;
- (id)privateBridgesOfDomain:(id)a0;
- (void)registerMethod:(id)a0 engineType:(long long)a1 authType:(unsigned long long)a2 domains:(id)a3;
- (void)_registerMethod:(id)a0 methodNamespace:(id)a1 handler:(id /* block */)a2 handlerWithCommand:(id /* block */)a3 engineType:(long long)a4 authType:(unsigned long long)a5 domains:(id)a6 extraInfo:(id)a7;
- (void)executeCommand:(id)a0 engine:(id)a1 completion:(id /* block */)a2 preExecuteHander:(id /* block */)a3;
- (void)registerMethod:(id)a0 handler:(id /* block */)a1 engineType:(long long)a2 authType:(unsigned long long)a3 domains:(id)a4;
- (void)registerMethod:(id)a0 handlerWithCommand:(id /* block */)a1 engineType:(long long)a2 authType:(unsigned long long)a3 domains:(id)a4;
- (void)registerDomain:(id)a0 forPrivateMethods:(id)a1;
- (BOOL)respondsToBridge:(id)a0 engineType:(long long)a1;
- (BOOL)bridgeHasRegistered:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
