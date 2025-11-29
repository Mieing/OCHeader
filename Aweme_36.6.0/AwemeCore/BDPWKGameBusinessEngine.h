@class BDPWKGamePage, BDPRuntimeGame, NSString, BDPUniqueID, BDPMultiDelegateProxy;
@protocol BDPBusinessEnginePublishProtocol;

@interface BDPWKGameBusinessEngine : NSObject <BDPBusinessEngineProtocol>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPMultiDelegateProxy<BDPBusinessEnginePublishProtocol> *publishDelegates;
@property (retain, nonatomic) BDPWKGamePage *gamePage;
@property (retain, nonatomic) BDPRuntimeGame *wkRuntime;
@property (nonatomic) BOOL isPreloadCoreFinish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getCurrentPage;
- (void)subscribeHandler:(id)a0 pageID:(long long)a1 dest:(unsigned long long)a2 data:(id)a3 completion:(id /* block */)a4;
- (void)evaluateScript:(id)a0 pageID:(long long)a1 dest:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)setupRuntime:(id)a0;
- (void)recordTimeline:(id)a0 uniqueID:(id)a1;
- (void)runtime:(id)a0 publish:(id)a1 param:(id)a2;
- (void)setWebViewInspectable:(BOOL)a0;
- (void)onRemoteDebugConnected;
- (void).cxx_destruct;
- (id)runtime;
- (id)initWithUniqueID:(id)a0;

@end
