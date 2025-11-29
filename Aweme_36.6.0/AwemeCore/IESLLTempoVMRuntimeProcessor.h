@class IESLLTempoContext, NSString, IESLLTempoUIView, TTBridgeRegister, IESLLTempoContextStore, IESLLTempoVMRuntimeInstance, IESLLTempoVMRuntimeBridgeEngine;
@protocol IESLLTempoVmRuntimeEventCenter, IESLLTempoEventManagerProviderLifecycleDelegate;

@interface IESLLTempoVMRuntimeProcessor : NSObject <IESLLTempoVMRuntimeInstanceDelegate, IESLLTempoVMRuntimeBridgeEngineDelegate, IESLLTempoEventManagerProviderProtocol>

@property (retain, nonatomic) IESLLTempoVMRuntimeInstance *worker;
@property (copy, nonatomic) NSString *workerId;
@property (copy, nonatomic) NSString *jsRuntimeStr;
@property (weak, nonatomic) IESLLTempoUIView *tempoView;
@property (weak, nonatomic) IESLLTempoContextStore *contextStore;
@property (retain, nonatomic) id<IESLLTempoVmRuntimeEventCenter> eventCenter;
@property (retain, nonatomic) TTBridgeRegister *bridgeRegister;
@property (retain, nonatomic) IESLLTempoVMRuntimeBridgeEngine *bridgeEngine;
@property (nonatomic) BOOL hasLoaded;
@property (weak, nonatomic) IESLLTempoContext *context;
@property (weak, nonatomic) id<IESLLTempoEventManagerProviderLifecycleDelegate> delegate;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *geckoVersion;
@property (copy, nonatomic) NSString *nodeTag;
@property (nonatomic) BOOL enableCleanRuntimeCodeCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)setGlobalProperties:(id)a0;
- (void)registerBridge;
- (void)sendEvent:(id)a0 params:(id)a1 isSticky:(BOOL)a2;
- (void)handleEventWithEventName:(id)a0 params:(id)a1 node:(id)a2;
- (void)preEvaluateScript:(id)a0 contextStore:(id)a1 globalProps:(id)a2 customBridge:(id)a3 tempoView:(id)a4;
- (void)handleEventWithMethodName:(id)a0 params:(id)a1 componentID:(id)a2;
- (void)createComponent:(id)a0 withComponentId:(id)a1 withData:(id)a2 withProps:(id)a3;
- (void)updateComponentWithComponentId:(id)a0 withData:(id)a1 withProps:(id)a2 WithPrevData:(id)a3 WithPrevProps:(id)a4 WithSource:(long long)a5;
- (void)destroyComponentWithComponentId:(id)a0;
- (void)loadWithInitData:(id)a0 globalProps:(id)a1;
- (void)finishOnLoad;
- (void)loadWithJsbMethods:(id)a0 JsbMethodblocks:(id)a1 tempoView:(id)a2 contextStore:(id)a3;
- (void)registerCustomBridge:(id)a0;
- (void)loadJsRuntimeScript:(id)a0;
- (void)onEngine:(id)a0 receiveError:(id)a1 errorCode:(long long)a2;
- (BOOL)invokeJSFunction:(id)a0 withMethodName:(id)a1 withParams:(id)a2 completeCallback:(id /* block */)a3;
- (void)onWorker:(id)a0 receiveError:(id)a1 errorCode:(long long)a2;
- (BOOL)invokeJSFunction:(id)a0 completeCallback:(id /* block */)a1;
- (BOOL)registerJSFunction:(id)a0 withJsFileName:(id)a1 withInitPropertiesMap:(id)a2;
- (void)evaluateScript:(id)a0 cacheName:(id)a1;
- (void)createRuntimeWorker;
- (void)loadJsbMethods:(id)a0 blocks:(id)a1;
- (void)registJSBMethods:(id)a0;
- (void)registJSBMethodBlocks:(id)a0;
- (id)generateJSEngineDataWithCardData:(id)a0 globalProps:(id)a1;
- (id)generateCacheName;
- (id)generateJSEngineDataWithGlobalProps:(id)a0;
- (void)invokeComponentMethodWithComponentId:(id)a0 withMethodName:(id)a1 withParams:(id)a2;
- (void)invokeComponentMethodWithComponentId:(id)a0 withMethodName:(id)a1 withParams:(id)a2 completeCallback:(id /* block */)a3;
- (void)updateWithUpdateData:(id)a0 globalProps:(id)a1 source:(long long)a2;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (id)initWithContainerID:(id)a0;
- (void)dealloc;
- (void)postMessage:(id)a0;

@end
