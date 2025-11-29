@class NSMutableSet, NSMutableDictionary;

@interface IESStaticContainer : IESContainer <CameraKit.ServiceContainerType>

@property (retain, nonatomic) NSMutableSet *registeredStaticServices;
@property (retain, nonatomic) NSMutableDictionary *multiRegisteredService;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock;

- (void)registerService:(id /* block */)a0 to:(id)a1;
- (id)initWithParentContainer:(id)a0;
- (id)resolveCurrentContainerObject:(id)a0;
- (void)registerServiceArray:(id /* block */)a0 to:(id)a1;
- (id)resolveViaStaticProviders:(id)a0;
- (id)handleSingleMethod:(SEL)a0 withProtocols:(id)a1 isOldMethod:(BOOL)a2;
- (id)handleNormalMethod:(SEL)a0 withProtocols:(id)a1 isOldMethod:(BOOL)a2;
- (id)handleWeakMethod:(SEL)a0 withProtocols:(id)a1 isOldMethod:(BOOL)a2;
- (id)performSelector:(SEL)a0 withparameterCount:(unsigned long long)a1;
- (void).cxx_destruct;

@end
