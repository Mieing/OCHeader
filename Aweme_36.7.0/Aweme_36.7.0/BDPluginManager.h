@class NSString, NSMutableArray, NSMutableDictionary;

@interface BDPluginManager : NSObject

@property (retain, nonatomic) NSMutableArray *schemes;
@property (retain, nonatomic) NSMutableDictionary *pluginNameMap;
@property (retain, nonatomic) NSMutableDictionary *redirectActionsHash;
@property (retain, nonatomic) NSMutableDictionary *redirectModuleActionsHash;
@property (retain, nonatomic) NSMutableDictionary *parseFinishHandlerHash;
@property (retain, nonatomic) NSString *prefix;
@property (retain, nonatomic) NSString *suffix;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;
@property (nonatomic) BOOL registerSelf;
@property (copy, nonatomic) id /* block */ dispatcherHandler;
@property (copy, nonatomic) id /* block */ eventHandler;
@property (copy, nonatomic) id /* block */ guardHandler;

+ (void)clearAllPluginPool;
+ (id)sharedInstanceWithDIContext:(id)a0;
+ (id)sharedInstance;

- (id)checkRedirectModule:(id)a0 action:(id)a1;
- (id)checkRedirectByAction:(id)a0;
- (void)excuteParseFinishHandler:(id)a0;
- (void)registerPluginPrefix:(id)a0 suffix:(id)a1;
- (void)registerEventBlock:(id /* block */)a0;
- (BOOL)registerPluginWithClassName:(id)a0 module:(id)a1;
- (BOOL)_registerPlugin:(id)a0 keyStr:(id)a1;
- (void)registerSupportSchemes:(id)a0;
- (BOOL)isSupportScheme:(id)a0;
- (void)registerModuleName:(id)a0 actionList:(id)a1;
- (void)registerRedirectModule:(id)a0 action:(id)a1 toModule:(id)a2 toAction:(id)a3;
- (BOOL)registerPluginWithClassName:(id)a0;
- (void)registerDispatcherBlock:(id /* block */)a0;
- (void)registerSDGuardBlock:(id /* block */)a0;
- (id)pluginByModule:(id)a0;
- (void)registerParseFinishHandler:(id /* block */)a0 forHostString:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)defaultScheme;

@end
