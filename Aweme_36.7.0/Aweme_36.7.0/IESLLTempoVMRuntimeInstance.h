@class NSString, JsWorkerIOS, NSMutableDictionary, NSMutableArray;
@protocol IESLLTempoVMRuntimeInstanceDelegate;

@interface IESLLTempoVMRuntimeInstance : NSObject <MessageCallback, ErrorCallback>

@property (weak, nonatomic) id<IESLLTempoVMRuntimeInstanceDelegate> delegate;
@property (retain, nonatomic) JsWorkerIOS *worker;
@property (retain, nonatomic) NSString *workerId;
@property BOOL methodHasRegister;
@property BOOL onLoadHasFinished;
@property (retain, nonatomic) NSMutableArray *pendingItems;
@property (retain, nonatomic) NSMutableArray *pendingOnLoadItems;
@property (retain, nonatomic) NSMutableDictionary *commonBridges;
@property (nonatomic) BOOL enableCodeCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasDestroyed;
- (void)registerBridge:(id)a0;
- (void)createWorker;
- (id)initWithDelegate:(id)a0 workerId:(id)a1;
- (BOOL)setGlobalProperties:(id)a0;
- (void)finishOnLoad;
- (BOOL)invokeJSFunction:(id)a0 withMethodName:(id)a1 withParams:(id)a2 completeCallback:(id /* block */)a3;
- (BOOL)doInvokeJSFunction:(id)a0 methodName:(id)a1 params:(id)a2 needInvokeErrorCallback:(BOOL)a3 completeCallback:(id /* block */)a4;
- (BOOL)doSetGlobalProperties:(id)a0 needInvokeErrorCallback:(BOOL)a1 needPending:(BOOL)a2;
- (void)dealPendingOnLoadItems;
- (void)dealPendingItems;
- (void)handleErrorWithErrorCode:(long long)a0 errorMessage:(id)a1;
- (BOOL)invokeJSFunction:(id)a0 completeCallback:(id /* block */)a1;
- (BOOL)registerJSFunction:(id)a0 withJsFileName:(id)a1 withInitPropertiesMap:(id)a2;
- (BOOL)setGlobalPropertiesWithoutPending:(id)a0;
- (void)evaluateScript:(id)a0 cacheName:(id)a1;
- (void)handleMessage:(id)a0;
- (id)cachePath;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)handleError:(id)a0;
- (void)dealloc;
- (void)postMessage:(id)a0;

@end
