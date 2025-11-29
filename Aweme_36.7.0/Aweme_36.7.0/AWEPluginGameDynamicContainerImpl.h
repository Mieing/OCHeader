@class BDXBridgeEventSubscriber, NSMapTable, NSString;

@interface AWEPluginGameDynamicContainerImpl : NSObject <BDPGameDynamicContainerPluginDelegate, BDXContainerLifecycleProtocol>

@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } containerLock;
@property (retain, nonatomic) NSMapTable *bulletContainerDic;
@property (retain, nonatomic) BDXBridgeEventSubscriber *eventSubscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidStartLoading:(id)a0;
- (void)containerDidFirstScreen:(id)a0;
- (void)registerMessage;
- (void)publishBDXEventWithName:(id)a0 params:(id)a1;
- (double)calculateWithDict:(id)a0 value:(id)a1 total:(double)a2;
- (void)publishContainerInfoEventWithUniqueID:(id)a0;
- (id)calculateCoordinateWithContainer:(id)a0;
- (void)handleEventLynxPublishToTMG:(id)a0;
- (void)handleEventLynxPublishToClient:(id)a0;
- (void)updateContainerLayout:(id)a0 params:(id)a1;
- (id)getValueFromDic:(id)a0 key:(id)a1;
- (id)getContainerWithID:(id)a0;
- (id)generateContainerInfoWithContainer:(id)a0;
- (void)getContainerInfosWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)handleClientEventPageReady:(id)a0;
- (void)handleClientEventSetInterfaceOrientationMask:(id)a0;
- (void)injectGameMethodWithContainer:(id)a0;
- (void)showBulletCardWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)updateContainerFrameWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)closeBulletContainerWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void)publishEventWithParams:(id)a0 uniqueID:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
