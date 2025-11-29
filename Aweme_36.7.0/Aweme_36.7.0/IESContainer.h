@class NSMutableDictionary, NSHashTable, NSString;
@protocol IESServiceRegister, IESServiceProvider;

@interface IESContainer : NSObject <SwiftIdentifierSupport, IESServiceRegister, IESServiceProvider>

@property (retain, nonatomic) NSMutableDictionary *services;
@property (retain, nonatomic) NSMutableDictionary *blocksNeedServicesResponse;
@property (retain, nonatomic) id<IESServiceProvider> parentContainer;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } serviceDataLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } blockDataLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } childDataLock;
@property (retain, nonatomic) NSHashTable *childContainers;
@property (weak) IESContainer *friendContainer;
@property (readonly, nonatomic) id<IESServiceRegister> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveObject:(id)a0;
- (id)provideBlockNeedServiceResponse:(id /* block */)a0 forProtocol:(id)a1;
- (id)tryResolveObject:(id)a0;
- (void)registIdentifiers:(id)a0 scope:(long long)a1 provider:(id /* block */)a2;
- (void)registIdentifiers:(id)a0 scope:(long long)a1 instance:(id)a2;
- (id)initWithParentContainer:(id)a0;
- (id)identifierFor:(id)a0;
- (id)identifierFromClassOrProtocol:(id)a0;
- (void)responseToBlockWithServiceInstance:(id)a0 serviceKey:(id)a1;
- (id)resolveObjectInThisChain:(id)a0;
- (id)resolveCurrentContainerObject:(id)a0;
- (id)resolveParentContainerObject:(id)a0;
- (id)tryResolveObjectInThisChain:(id)a0;
- (void)removeBlockNeedServiceResponse:(id)a0 withRelatedServiceKey:(id)a1;
- (void)registerProvider:(id /* block */)a0 forProtocol:(id)a1 scope:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addChild:(id)a0;

@end
