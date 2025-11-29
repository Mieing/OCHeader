@class BDDispatcherBase;

@interface BDSchemeDispatcher : BDDispatcherBase

@property (retain, nonatomic) BDDispatcherBase *backupDispatcher;

+ (id)pluginManagerWithDiContext:(id)a0;
+ (BOOL)isSupportScheme:(id)a0 diContext:(id)a1;
+ (void)registerSupportSchemes:(id)a0 diContext:(id)a1;
+ (void)registerModuleName:(id)a0 actionList:(id)a1 diContext:(id)a2;
+ (void)registerRedirectModule:(id)a0 action:(id)a1 toModule:(id)a2 toAction:(id)a3 diContext:(id)a4;
+ (BOOL)registerPluginWithClassName:(id)a0 diContext:(id)a1;
+ (BOOL)registerPluginWithClassName:(id)a0 module:(id)a1 diContext:(id)a2;
+ (void)registerPluginPrefix:(id)a0 suffix:(id)a1 diContext:(id)a2;
+ (void)registerDispatcherBlock:(id /* block */)a0 diContext:(id)a1;
+ (void)registerEventBlock:(id /* block */)a0 diContext:(id)a1;
+ (void)registerGuardBlock:(id /* block */)a0 diContext:(id)a1;
+ (void)registerParseFinishHandler:(id /* block */)a0 forHostString:(id)a1 diContext:(id)a2;
+ (BOOL)accessInstanceVariablesDirectly;

- (BOOL)isSupportModuleActionDispatcher;
- (void)dispatchWithCompletionHandler:(id /* block */)a0;
- (BOOL)doCallbackWithStatus:(long long)a0 data:(id)a1 completionHandler:(id /* block */)a2;
- (void)dispatchWithPlugin:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithURL:(id)a0 sourceURL:(id)a1 sourceApplication:(id)a2 diContext:(id)a3;
- (void)dispatch;

@end
