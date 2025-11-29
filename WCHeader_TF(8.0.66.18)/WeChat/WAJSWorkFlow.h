@class WasmAdaptor, NSThread, NSMutableDictionary, NSString, JSContext, WAJSCoreService, NSArray;

@interface WAJSWorkFlow : WAJSNativeBufferBase <WXFileLoaderDelegate>

@property (retain, nonatomic) NSThread *thread;
@property (retain) NSMutableDictionary *timerObjs;
@property (retain, nonatomic) NSString *lastJSError;
@property (nonatomic) BOOL runningApi;
@property (retain, nonatomic) WasmAdaptor *wasmAdaptor;
@property (nonatomic) unsigned int subContextId;
@property (retain) NSMutableDictionary *subContexts;
@property (retain, nonatomic) JSContext *context;
@property (copy, nonatomic) NSString *libWorkerType;
@property (weak, nonatomic) WAJSCoreService *service;
@property (nonatomic) unsigned int workerId;
@property (retain, nonatomic) NSArray *apiList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getBundle;

- (id)init:(id)a0 workerId:(unsigned int)a1 service:(id)a2;
- (id)init:(id)a0 workerId:(unsigned int)a1 service:(id)a2 isLibFile:(BOOL)a3 isPreload:(BOOL)a4;
- (void)runThread:(id)a0;
- (void)sendErrorEvent:(id)a0 stack:(id)a1 contextId:(unsigned int)a2;
- (void)initJSContext:(id)a0 isLibFile:(BOOL)a1 isPreload:(BOOL)a2;
- (void)setUpWorkerContext;
- (void)sendExceptionError:(id)a0 toContext:(id)a1;
- (unsigned int)getContextId:(id)a0;
- (void)loadLibFile:(id)a0 preloadType:(unsigned int)a1;
- (void)sendMessage:(id)a0;
- (void)sendJSInvokerMessage:(id)a0;
- (void)executeOnWorker:(id)a0;
- (void)executeBlockOnWorkerImpl:(id /* block */)a0;
- (void)executeBlockOnWorker:(id /* block */)a0;
- (void)stopWorker;
- (void)internalStopWorker;
- (void)workThread_reportPubLibCoverageIfNeeded;
- (void)setupTimerBlock:(id)a0;
- (unsigned int)addTimer:(unsigned int)a0 withTime:(float)a1 isRepeat:(BOOL)a2;
- (void)onTimer:(id)a0;
- (void)injectTimerBridge;
- (unsigned long long)getJSFootprintMemoryInBytes;
- (id)getFileData:(id)a0;
- (void).cxx_destruct;

@end
