@class NSString, JsWorkerIOS, NSMutableDictionary, BDECRabbiFlyDynamicSupervisor, BDECRabbiFlyJSWorkerTokenStatus;

@interface BDECRabbiFlyJSWorker : NSObject <ErrorCallback, MessageCallback, BDECRabbiFlyIJSWorker>

@property (nonatomic) unsigned long long jsEngineType;
@property (weak, nonatomic) BDECRabbiFlyDynamicSupervisor *supervisor;
@property (retain, nonatomic) JsWorkerIOS *worker;
@property (retain, nonatomic) BDECRabbiFlyJSWorkerTokenStatus *multiStatus;
@property (copy, nonatomic) NSString *multiToken;
@property (retain, nonatomic) NSMutableDictionary *singleStatusMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)evaluateJavaScript:(id)a0;
- (void)setGlobalProperties:(id)a0;
- (void)tryLoadJSEntryAndCallPostMessage:(id)a0 event:(id)a1 msgType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)unloadJSEntry:(id)a0;
- (id)initWithType:(unsigned long long)a0 token:(id)a1 supervisor:(id)a2;
- (id)status:(id)a0;
- (void)loadGlobalProperties;
- (void)loadJSModule;
- (void)loadJSEngine;
- (void)evaluateJavaScript:(id)a0 filename:(id)a1;
- (id)generateProcessDataMessage:(id)a0 event:(id)a1;
- (id)generateCallActionMessage:(id)a0 event:(id)a1;
- (id)generateSendEventMessage:(id)a0 event:(id)a1;
- (void)callPostMessage:(id)a0 event:(id)a1 msgType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)appendBaseInfo:(id)a0 dynamicModel:(id)a1;
- (void)callPostMessageAndPendingEventList:(id)a0 event:(id)a1 msgType:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)tryLoadJSEntry:(id)a0 reloadIfFailed:(BOOL)a1 callback:(id /* block */)a2;
- (void)terminate;
- (void)handleMessage:(id)a0;
- (void)resume:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)stop:(id)a0;
- (void)handleError:(id)a0;
- (void)dealloc;
- (void)registerModule:(Class)a0;
- (void)postMessage:(id)a0;

@end
