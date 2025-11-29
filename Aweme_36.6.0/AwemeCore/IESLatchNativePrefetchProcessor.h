@class IESLatchAttachState, NSString, NSArray, IESLatchPromiseDataHandler, NSMutableDictionary, NSDictionary, IESLatchFullLinkMonitor, NSMutableArray;
@protocol IESLatchNativePrefetchWorkerProtocol, IESLatchHybridContainerProtocol, IESLatchNativePrefetchProcessorDelegate;

@interface IESLatchNativePrefetchProcessor : NSObject <IESLatchFullLinkMonitorProtocol, IESLatchNativePrefetchWorkerDelegate, IESLatchNativePrefetchWorkerEventDelegate, IESLatchProcessorProtocol, IESLatchModuleDelegate, IESLatchLynxModuleWrapperDelegate>

@property (retain, nonatomic) id<IESLatchHybridContainerProtocol> container;
@property (retain, nonatomic) NSString *business;
@property (weak, nonatomic) id<IESLatchNativePrefetchProcessorDelegate> delegate;
@property (nonatomic) BOOL attached;
@property (copy, nonatomic) NSString *channel;
@property (retain, nonatomic) id<IESLatchNativePrefetchWorkerProtocol> worker;
@property (copy, nonatomic) NSDictionary *returnValue;
@property (retain, nonatomic) IESLatchPromiseDataHandler *promiseHandler;
@property (copy, nonatomic) NSArray *promiseNodes;
@property (copy, nonatomic) NSArray *promisePaths;
@property (retain, nonatomic) NSMutableArray *injectCallbackIDs;
@property (copy, nonatomic) id /* block */ attachHandler;
@property (retain, nonatomic) IESLatchAttachState *attachState;
@property (retain, nonatomic) NSMutableDictionary *callbackHandlerMap;
@property (retain, nonatomic) NSMutableDictionary *callbackResultMap;
@property (nonatomic) double startProcessorTime;
@property (nonatomic) double startAttachTime;
@property (nonatomic) double initjsFinishTime;
@property (retain, nonatomic) IESLatchFullLinkMonitor *fullLinkMonitor;
@property (retain, nonatomic) NSString *transferType;
@property (nonatomic) long long attachTimeout;
@property (retain, nonatomic) NSDictionary *cachedPrefMetric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopProcess;
- (void)worker:(id)a0 logInfo:(id)a1;
- (void)worker:(id)a0 didFinishLoadConfig:(id)a1 withError:(id)a2;
- (void)worker:(id)a0 didFinishPrefetchSchema:(id)a1 withError:(id)a2;
- (void)worker:(id)a0 didFinishPrefetchApi:(id)a1 withCacheStatus:(unsigned long long)a2;
- (void)worker:(id)a0 didFinishFetchData:(id)a1 withStatus:(unsigned long long)a2 error:(id)a3;
- (void)checkPageVersion:(id)a0 url:(id)a1;
- (void)onLatchMonitorFinish:(id)a0;
- (id)initWithContainer:(id)a0 business:(id)a1 delegate:(id)a2;
- (void)recordIODuration:(double)a0;
- (void)reportJsbPromiseResult:(id)a0;
- (void)attachWithCompletion:(id /* block */)a0;
- (void)reportWithPerfMetric:(id)a0;
- (void)reportWithResult:(id)a0;
- (BOOL)evaluateUrlJSData:(id)a0;
- (id)getGlobalProps;
- (id)getInitialPropsWithKey:(id)a0;
- (void)p_generateAttachStateIfNeededWithCode:(long long)a0;
- (id)p_getAttachSuccessResult;
- (void)p_monitorPrefetchCallbackIfNeeded;
- (void)p_checkIfDone;
- (void)p_generateAttachStateIfNeededWithCode:(long long)a0 message:(id)a1;
- (void)p_generateAttachStateIfNeededWithCode:(long long)a0 message:(id)a1 extra:(id)a2;
- (void)p_monitorPrefetchDuration;
- (void)p_generatePromiseNodesAndPathsWithValue:(id)a0;
- (BOOL)p_injectForPromiseNodesIfNeeded;
- (void)worker:(id)a0 onReturn:(id)a1;
- (void)worker:(id)a0 didCatchData:(id)a1 forCallbackID:(id)a2;
- (id)workerGetGlobalProps:(id)a0;
- (void)worker:(id)a0 startRequestforCallbackID:(id)a1;
- (id)latchContainer;
- (void).cxx_destruct;
- (id)containerID;

@end
