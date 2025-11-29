@class LynxTemplateData, NSString, NSDictionary, NSSet, BDLynxBridgeRegistry, NSMutableArray, LynxView;
@protocol BDHMLynxJSBMonitorAdapterProtocol;

@interface BDLynxBridge : NSObject

@property (class, nonatomic) BOOL shouldUseMapRegistry;

@property (weak, nonatomic) id<BDHMLynxJSBMonitorAdapterProtocol> bdhm_jsbDelegate;
@property (readonly, copy, nonatomic) NSString *namescope;
@property (readonly, copy, nonatomic) NSString *namescope;
@property (retain, nonatomic) NSMutableArray *methods;
@property (retain, nonatomic) NSMutableArray *executors;
@property (copy) NSString *namescope;
@property (nonatomic) BOOL isMapRegistry;
@property (readonly, weak, nonatomic) LynxView *lynxView;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (retain, nonatomic) LynxTemplateData *globalPropsData;
@property (copy, nonatomic) NSSet *directPerformMethods;
@property (retain, nonatomic) BDLynxBridgeRegistry *methodRegistry;

+ (void)registerGlobalHandler:(id /* block */)a0 forMethod:(id)a1;
+ (void)secnf_swizzleMethods;
+ (void)secnf_enablePlugin;
+ (void)secplugin_swizzleMethods;
+ (void)secplugin_enablePlugins;
+ (void)registerGlobalHandler:(id /* block */)a0 forMethod:(id)a1 namescope:(id)a2;
+ (void)registerGlobalHandler:(id /* block */)a0 forMethod:(id)a1 authType:(long long)a2;
+ (void)registerGlobalHandler:(id /* block */)a0 forMethod:(id)a1 namescope:(id)a2 authType:(long long)a3;
+ (void)registerGlobalSessionHandler:(id)a0 forMethod:(id)a1 namescope:(id)a2 authType:(long long)a3;
+ (void)callEvent:(id)a0 containerID:(id)a1 params:(id)a2;
+ (void)registerGlobalSessionHandler:(id /* block */)a0 forMethod:(id)a1 namescope:(id)a2;
+ (void)_registerHandler:(id /* block */)a0 sessionHandler:(id /* block */)a1 forMethod:(id)a2 namescope:(id)a3 intoMethods:(id)a4 intoRegistry:(id)a5;
+ (void)callEvent:(id)a0 containerID:(id)a1 params:(id)a2 code:(long long)a3;
+ (void)p_puzzle_registerHandler:(id /* block */)a0 sessionHandler:(id /* block */)a1 forMethod:(id)a2 namescope:(id)a3 intoMethods:(id)a4 intoRegistry:(id)a5;

- (void)attachLynxView:(id)a0;
- (void)callEvent:(id)a0 params:(id)a1;
- (id /* block */)secnf_getHandlerWithMessage:(id)a0 namescope:(id)a1;
- (id /* block */)secnf_getSessionHandlerWithMessage:(id)a0 namescope:(id)a1;
- (void)secnf_fixMessage:(id)a0 namescope:(id)a1;
- (void)_executeMethodWithMessage:(id)a0 callback:(id /* block */)a1;
- (void)secplugin_executeMethodWithMessage:(id)a0 callback:(id /* block */)a1;
- (void)registerHandler:(id /* block */)a0 forMethod:(id)a1;
- (void)addExecutor:(id)a0;
- (BOOL)respondsToMessage:(id)a0;
- (BOOL)canHandleMessage:(id)a0;
- (id)bdx_legacy_monitorInitWithLynxView:(id)a0;
- (id)initWithLynxView:(id)a0;
- (id)initWithoutLynxView;
- (id)_findMethodInMapForMessage:(id)a0;
- (void)callEvent:(id)a0 params:(id)a1 code:(long long)a2;
- (void)registerHandler:(id /* block */)a0 forMethod:(id)a1 namescope:(id)a2;
- (id /* block */)_getSessionHandlerWithMessage:(id)a0;
- (id /* block */)_getHandlerWithMessage:(id)a0;
- (BOOL)_handleWithLynx:(id)a0 handler:(id /* block */)a1 sessionHandler:(id /* block */)a2 message:(id)a3 callback:(id /* block */)a4;
- (id /* block */)_getHandlerWithMessage:(id)a0 namescope:(id)a1;
- (id /* block */)_getSessionHandlerWithMessage:(id)a0 namescope:(id)a1;
- (void)registerSessionHandler:(id /* block */)a0 forMethod:(id)a1 namescope:(id)a2;
- (void)puzzle_registerHandler:(id /* block */)a0 sessionHandler:(id /* block */)a1 forMethod:(id)a2 namescope:(id)a3;
- (void)puzzle_executeMethodWithMessage:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (id)allMethods;

@end
