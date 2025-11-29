@class NSString, BDPPromise, BDPRuntimeApp, BDPUniqueID, BDPMultiDelegateProxy;
@protocol BDPBusinessEnginePublishProtocol;

@interface BDPNativeAppBusinessEngine : NSObject <BDPBusinessEngineProtocol, BDPMessengerPrototol, BDPBusinessEngineMetricsProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPRuntimeApp *runtime;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPBusinessEnginePublishProtocol> *publishDelegates;
@property (nonatomic) BOOL isPreloadCoreFinish;
@property (nonatomic) BOOL isFFramePluginPreloadFinish;
@property (weak, nonatomic) BDPPromise *domreadyPromise;
@property (readonly, nonatomic) long long loadServiceScriptCount;
@property (readonly, nonatomic) double loadServiceScriptTotalDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribeHandler:(id)a0 pageID:(long long)a1 dest:(unsigned long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (void)evaluateScript:(id)a0 pageID:(long long)a1 dest:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)subscribeToAnnieView:(id)a0 data:(id)a1 completion:(id /* block */)a2;
- (void)setupRuntime:(id)a0;
- (void)recordTimeline:(id)a0 uniqueID:(id)a1;
- (void)runtime:(id)a0 publish:(id)a1 param:(id)a2;
- (void)reportTrackerMessageWithEvent:(id)a0 params:(id)a1;
- (void)runtimeOnDocumentReady;
- (void)subscribeToAnnieView:(id)a0 pageID:(long long)a1 data:(id)a2 completion:(id /* block */)a3;
- (void)page:(id)a0 publish:(id)a1 param:(id)a2;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
