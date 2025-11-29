@class BDPThreadSafeArray, BDXBridgeEventSubscriber, NSString;

@interface AWEPluginSecretPhoneCallCustomImpl : NSObject <BDXContainerLifecycleProtocol, BDPPhoneCallPluginDelegate>

@property (retain, nonatomic) BDPThreadSafeArray *containers;
@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerDidStartLoading:(id)a0;
- (void)p_unregisterContainerEvent:(id)a0;
- (id)modelWithContainerID:(id)a0;
- (id)modelWithBizKey:(id)a0;
- (id)modelWithSessionId:(id)a0;
- (void)openPhoneCallSecretPopup:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_subscribe;

@end
