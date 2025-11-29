@class NSString, PIAContext, PIAMultiDelegate, PIASTLQueue, JsWorkerIOS, JSWorkerBridgeEngine, BDXBridge, NSObject, NSDictionary, TTBridgeRegister, IESBridgeEngine;
@protocol OS_dispatch_semaphore, PIAWorkerDelegate;

@interface PIAWorker : NSObject <BDXBridgeContainerProtocol, MessageCallback, ErrorCallback, WorkerDelegate, PIAContextLifeCycleMessage>

@property (copy, nonatomic) NSString *bdx_tasmBizID;
@property (retain, nonatomic) id bdx_methodControlManager;
@property (readonly, nonatomic) unsigned long long bdx_engineType;
@property (readonly, nonatomic) BDXBridge *bdx_bridge;
@property (readonly, copy, nonatomic) NSString *bdx_containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *workerID;
@property (copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) PIAMultiDelegate<PIAWorkerDelegate> *delegates;
@property (retain, nonatomic) JSWorkerBridgeEngine *bridgeEntry;
@property (nonatomic) BOOL finishLoading;
@property (retain, nonatomic) PIASTLQueue *traceQueue;
@property (weak) NSObject *engine;
@property (weak, nonatomic) PIAContext *context;
@property (readonly, copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *location;
@property (retain, nonatomic) NSDictionary *globalProps;
@property BOOL workerReady;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *signal;
@property (retain, nonatomic) PIASTLQueue *messageQueue;
@property (retain, nonatomic) PIASTLQueue *workerMessageQueue;
@property (copy, nonatomic) id /* block */ workerCallback;
@property (retain, nonatomic) TTBridgeRegister *bridgeRegister;
@property (retain, nonatomic) IESBridgeEngine *iesBridgeEngine;
@property (nonatomic) BOOL isWarmUp;
@property (retain, nonatomic) JsWorkerIOS *worker;
@property (copy, nonatomic) NSString *href;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseJSCore;

- (id)bdx_namespace;
- (id)bdx_URL;
- (void)createWorker;
- (id)initWithUserAgent:(id)a0 bizType:(id)a1 delegate:(id)a2;
- (void)evaluateScriptURL:(id)a0;
- (void)onPIAContextBindEngine:(id)a0 context:(id)a1;
- (void)onPIAContextBindEnv:(id)a0 context:(id)a1;
- (void)registerBridgeModule:(Class)a0 params:(id)a1;
- (void)evaluateScript:(id)a0 sourceURL:(id)a1;
- (id)getWorkerUserAgent;
- (void)p_registerPIAMessage;
- (id)initWithUserAgent:(id)a0 bizType:(id)a1 delegate:(id)a2 context:(id)a3;
- (void)p_removePIAMessage;
- (void)setupThirdPartyBridgeEntry;
- (id)fetchWithUrlSync:(id)a0;
- (id)loadAsync:(id)a0 completion:(id /* block */)a1;
- (void)setVanillaFetch:(id)a0;
- (BOOL)postWorkerMessage:(id)a0;
- (void)setTraceWithParams:(id)a0;
- (void)registerBridgeModule:(Class)a0;
- (void)terminate;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (void)handleError:(id)a0;
- (void)dealloc;
- (void)receivedMessage:(id)a0;
- (BOOL)postMessage:(id)a0;

@end
