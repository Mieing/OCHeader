@class BDPRuntimeInteractGame, NSString, BDPUniqueID, BDPMultiDelegateProxy;
@protocol BDPBusinessEnginePublishProtocol;

@interface BDPInteractGameBusinessEngine : NSObject <BDPBusinessEngineProtocol, BDPMessengerPrototol, BDPBusinessEngineMetricsProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPRuntimeInteractGame *runtime;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPBusinessEnginePublishProtocol> *publishDelegates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long loadServiceScriptCount;
@property (readonly, nonatomic) double loadServiceScriptTotalDuration;

- (void)subscribeHandler:(id)a0 pageID:(long long)a1 dest:(unsigned long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (void)evaluateScript:(id)a0 pageID:(long long)a1 dest:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setupRuntime:(id)a0;
- (void)recordTimeline:(id)a0 uniqueID:(id)a1;
- (void)runtime:(id)a0 publish:(id)a1 param:(id)a2;
- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
