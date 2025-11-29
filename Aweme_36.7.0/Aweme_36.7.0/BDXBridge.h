@class NSMutableDictionary, NSDictionary, BDXThreadSafeDictionary, BDXBridgeProtocolManager, BDXBridgeRegister, BDXBridgeDispatcher;
@protocol BDXBridgeEngineAdapterProtocol;

@interface BDXBridge : NSObject

@property (class, readonly, nonatomic) Class engineClass;
@property (class, readonly, nonatomic) BOOL isDevelopmentMode;
@property (class, readonly, nonatomic) BDXThreadSafeDictionary *globalMethods;
@property (class, readonly, copy, nonatomic) NSDictionary *registeredGlobalMethods;

@property (readonly, nonatomic) NSMutableDictionary *localMethods;
@property (retain, nonatomic) BDXBridgeRegister *localRegister;
@property (retain, nonatomic) BDXBridgeDispatcher *dispatcher;
@property (retain, nonatomic) BDXBridgeProtocolManager *protocolManager;
@property (readonly, nonatomic) id<BDXBridgeEngineAdapterProtocol> engine;
@property (readonly, copy, nonatomic) NSDictionary *registeredLocalMethods;

+ (void)registerGlobalMethod:(id)a0;
+ (void)addInterceptor:(id)a0;
+ (id)interceptors;
+ (void)removeInterceptor:(id)a0;
+ (void)registerEngineClass:(Class)a0 inDevelopmentMode:(BOOL)a1;
+ (void)addExecutorClass:(Class)a0;
+ (id)executorClasses;
+ (void)enumerateInterceptorsWithSEL:(SEL)a0 block:(id /* block */)a1;
+ (void)registerGlobalMethod:(id)a0 useAsyncQueue:(BOOL)a1;
+ (id)standardBridgeMethodNames;
+ (id /* block */)wrappedCallHandlerWithMethod:(id)a0;
+ (void)registerExecutorClasses:(id)a0 inDevelopmentMode:(BOOL)a1;
+ (void)registerDefaultGlobalMethodsWithFilter:(id /* block */)a0;
+ (void)registerInteralMethods;
+ (BOOL)shouldRegisterMethodFromFramework;
+ (void)deregisterGlobalMethodNamed:(id)a0;
+ (id)defaultQueue;

- (void)registerLocalMethod:(id)a0;
- (void)fireEventWithEventName:(id)a0 params:(id)a1;
- (void)deregisterLocalMethodNamed:(id)a0;
- (id)mergedMethodsForEngineType:(unsigned long long)a0;
- (id)bdx_bridge_monitor_initWithContainer:(id)a0;
- (void).cxx_destruct;
- (id)initWithContainer:(id)a0;
- (void)fireEvent:(id)a0;

@end
