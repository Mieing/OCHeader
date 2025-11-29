@class NSString, BDPBusinessServiceCenterPreloadContext, NSMapTable;

@interface BDPServiceCenter : NSObject <BDPBootLifeCycleMessage, BDPAllAppsDestructedMessage>

@property (retain, nonatomic) BDPBusinessServiceCenterPreloadContext *preloadContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMapTable *protocolClassTable;
@property (retain, nonatomic) NSMapTable *singletonTable;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } protoClzLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } singletonLock;

+ (void)allAppsHaveDestructed;
+ (id)defaultCenter;

- (void)bindProtocol:(id)a0 service:(Class)a1;
- (void)unbindProtocol:(id)a0;
- (Class)getServiceClassWithProtocol:(id)a0;
- (void)applicationWillBoot;
- (void).cxx_destruct;
- (void)removeService:(id)a0;
- (id)init;
- (id)getService:(id)a0;

@end
