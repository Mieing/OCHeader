@class IESBridgeMethodRegistry, NSArray, NSMutableDictionary, NSHashTable;
@protocol IESBridgeEngineInterceptor, BDHMWebViewJSBMonitorAdapterProtocol, IESBridgeEngineDelegate, IESBridgeExecutor;

@interface IESBridgeEngine : NSObject

@property (class, readonly, nonatomic) NSHashTable *interceptors;

@property (weak, nonatomic) id<BDHMWebViewJSBMonitorAdapterProtocol> bdhm_jsbDelegate;
@property (retain, nonatomic) NSMutableDictionary *invokeMethodCallbacks;
@property (retain, nonatomic) NSMutableDictionary *messageMap;
@property (nonatomic) long long uniqueID;
@property (retain, nonatomic) NSMutableDictionary *protocolVersions;
@property (nonatomic) long long bridgeObjectsDeleted;
@property (weak, nonatomic) id<IESBridgeEngineDelegate> delegate;
@property (weak, nonatomic) id<IESBridgeEngineInterceptor> interceptor;
@property (readonly, weak, nonatomic) id<IESBridgeExecutor> executor;
@property (readonly, copy, nonatomic) NSArray *methods;
@property (retain, nonatomic) IESBridgeMethodRegistry *methodRegistry;

+ (void)bdx_engineReady;
+ (void)addInterceptor:(id)a0;
+ (void)removeInterceptor:(id)a0;
+ (void)p_bridgeEngine:(id)a0 willHandleBridgeMessage:(id)a1;
+ (void)p_bridgeEngine:(id)a0 willCallbackWithMessage:(id)a1;
+ (void)p_bridgeEngine:(id)a0 didCallbackWithMessage:(id)a1;
+ (void)p_bridgeEngine:(id)a0 didHandleBridgeMessage:(id)a1;

- (BOOL)canHandleMessage:(id)a0;
- (void)deleteAllPipers;
- (void)fireEvent:(id)a0 withParams:(id)a1 status:(long long)a2 callback:(id /* block */)a3;
- (void)invokeCallbackWithMessage:(id)a0 statusCode:(long long)a1 resultBlock:(id /* block */)a2;
- (void)invokeJSWithCallbackID:(id)a0 statusCode:(long long)a1 params:(id)a2;
- (void)registerHandler:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2;
- (void)handleBridgeMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)bdx_legacy_monitorInitWithExecutor:(id)a0;
- (void)bdx_invokeJSWithCallbackID:(id)a0 statusCode:(long long)a1 params:(id)a2;
- (void)bdx_fireEvent:(id)a0 withParams:(id)a1 status:(long long)a2 callback:(id /* block */)a3;
- (id)bdx_completionHandlerMaps;
- (void)handlerJS2NativeBridgeMessage:(id)a0;
- (id)completionHandlerMaps;
- (void)setCompletionHandler:(id /* block */)a0 forKey:(id)a1;
- (void)registerHandler:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2 methodNamespace:(id)a3;
- (void)registerJS2NativeHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2 methodNamespace:(id)a3;
- (void)_callbackWithBridgeMessage:(id)a0 resultBlock:(id /* block */)a1 statusCode:(long long)a2;
- (void)_willFireEventWithMessage:(id)a0;
- (void)_invokeJSHandleMessageFromAppMethodWithMessage:(id)a0 callback:(id /* block */)a1;
- (void)fireEvent:(id)a0 withParams:(id)a1 callback:(id /* block */)a2;
- (void)_willHandleBridgeMessage:(id)a0;
- (void)executeMethodWithMessage:(id)a0;
- (id)bridgeMethodForJS2NativeMessage:(id)a0 statusCode:(long long *)a1;
- (id)callBackBridgeMessageForBridgeMessage:(id)a0 statusCode:(long long)a1;
- (void)authorizeMessage:(id)a0 method:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isAuthorizeMethodUsingInternalAuthManagerForJS2NativeMessage:(id)a0 method:(id)a1;
- (void)_willFetchQueueWithInfo:(id)a0;
- (void)handleBridgeMessage:(id)a0;
- (void)_didFetchQueueWithInfo:(id)a0;
- (void)trackService:(id)a0 statusCode:(long long)a1 category:(id)a2 version:(id)a3;
- (id)createAuthInfo:(id)a0;
- (void)executeMethod:(id)a0 withMessage:(id)a1;
- (void)_didHandleBridgeMessage:(id)a0;
- (void)_willCallbackWithMessage:(id)a0;
- (void)_didCallbackWithMessage:(id)a0;
- (void)_didFireEventWithMessage:(id)a0;
- (void)_preprocessMessage:(id)a0;
- (void)_enumerateInterceptorsUsingSelector:(SEL)a0 WithBridgeMessage:(id)a1;
- (id)bridgeMethods;
- (void)fireEvent:(id)a0 withParams:(id)a1;
- (void)flushBridgeMessagesFromURL:(id)a0;
- (void)puzzle_registerJS2NativeHandlerBlock:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2 methodNamespace:(id)a3;
- (void)puzzle_addBridgeMethodSync:(id)a0;
- (void)puzzle_registerHandler:(id /* block */)a0 forJSMethod:(id)a1 authType:(unsigned long long)a2 methodNamespace:(id)a3;
- (void).cxx_destruct;
- (id)initWithExecutor:(id)a0;

@end
