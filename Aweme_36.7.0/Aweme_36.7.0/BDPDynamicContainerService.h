@class NSString, BDPThreadSafeDictionary;

@interface BDPDynamicContainerService : NSObject <BDPDynamicContainerService, BDPBootLifeCycleMessage>

@property (retain, nonatomic) BDPThreadSafeDictionary *APIInvokingPendingQueues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (BOOL)isBackgroundAllowAPI:(id)a0;

- (id)initService;
- (void)registerMessage;
- (void)applicationColdBootWithUniqueID:(id)a0 coldBootType:(unsigned long long)a1;
- (void)applicationFirstFrameDidShow:(id)a0;
- (void)applicationLCPArrive:(id)a0 timestamp:(double)a1;
- (void)applicationWarmBootDoneWithUniqueID:(id)a0;
- (void)applicationWorkBeforeCloseWithUniqueID:(id)a0;
- (void)openDynamicContainerWithParams:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sendBulletContainerEventWithParams:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)closeDynamicContainerWithParams:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getBulletContainerExtraWithParams:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)invokeEvent:(id)a0 uniqueID:(id)a1 containerId:(id)a2 param:(id)a3 completion:(id /* block */)a4;
- (void)applicationReadyToBoot:(id)a0;
- (void)updateLiveVideoContainer:(id)a0 status:(long long)a1;
- (void)preloadBulletResourcesWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)getContainerInfosWithParams:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)enableTransmitEventWithParams:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)disableTransmitEventWithParams:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)clearAllPendingAPI:(id)a0;
- (void)addPendingAPI:(id)a0 block:(id /* block */)a1;
- (void)executeAllPendingAPI:(id)a0;
- (id)processSchema:(id)a0 uniqueID:(id)a1;
- (void)p_executeBlockWithUniqueID:(id)a0 block:(id /* block */)a1 delay2LCP:(BOOL)a2;
- (BOOL)checkJSBAuth:(id)a0;
- (BOOL)enableDynamicContainerOpt;
- (void)exeDynamicContainerOptWithStrategy:(id)a0 uniqueID:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
