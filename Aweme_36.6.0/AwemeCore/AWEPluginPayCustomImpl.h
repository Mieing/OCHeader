@class NSMapTable, NSString, BDXBridgeEventSubscriber, BDPThreadSafeArray;
@protocol BDPNewPaymentSubscribeDelegate;

@interface AWEPluginPayCustomImpl : NSObject <BDPPaymentPluginDelegate, AWEOpenURLMessage, BDXContainerLifecycleProtocol, BDPWarmBootMessage>

@property (copy, nonatomic) id /* block */ alipayCallback;
@property (weak, nonatomic) id<BDPNewPaymentSubscribeDelegate> delegate;
@property (retain, nonatomic) NSMapTable *timerTable;
@property (retain, nonatomic) BDPThreadSafeArray *lxPayModels;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (nonatomic) long long maxLxModalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidStartLoading:(id)a0;
- (void)removeModel:(id)a0;
- (void)didOpenURL:(id)a0 sourceApplication:(id)a1 annotation:(id)a2;
- (void)cleanWarmCacheWithUniqueID:(id)a0;
- (void)p_unregisterContainerEvent:(id)a0;
- (id)modelWithContainerID:(id)a0;
- (id)modelWithSessionID:(id)a0;
- (BOOL)canOpenLxModalWithUniqueID:(id)a0;
- (void)openModalContainerTimeOut:(id)a0;
- (void)bdp_requestPaymentWithParam:(id)a0 appID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_openPaymentDeskWithParam:(id)a0 appID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_requestLynxPaymentWithParam:(id)a0 completion:(id /* block */)a1;
- (void)bdp_industryUniversalCallWithParam:(id)a0 completion:(id /* block */)a1;
- (void)bdp_requestNewModalPaymentWithParam:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_updateNewModalPaymentWithParam:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)bdp_removeNewModalPaymentWithParam:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void)bdp_diamondPaymentWithParam:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)bdp_sendNewModalPaymentEvent:(id)a0;
- (void)bdp_setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
