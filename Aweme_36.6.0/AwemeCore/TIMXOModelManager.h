@class NSString, NSDictionary, TIMXSDKInstance, NSLock, NSObject;
@protocol OS_dispatch_queue, TIMXInstanceDispatchQueuePoolProtocol;

@interface TIMXOModelManager : NSObject <TIMXInstanceScopeSingleton>

@property (retain, nonatomic) NSLock *storeDictionaryAccessLock;
@property (retain) NSDictionary *storeOfSubClass;
@property (retain, nonatomic) id<TIMXInstanceDispatchQueuePoolProtocol> queuePool;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *sharedRequestQueue;
@property (weak, nonatomic) TIMXSDKInstance *r;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedOperationQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedUnreadCountQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)storeModelWithClass:(Class)a0;
- (id)cacheInstance:(id)a0 ofClass:(Class)a1 withidentifier:(id)a2;
- (id)cachedInstanceWithClass:(Class)a0 identifier:(id)a1;
- (void)removeCachedInstanceWithClass:(Class)a0 identifier:(id)a1;
- (id)p_storeModelWithClass:(Class)a0;
- (void)removeAllCachedInstanceWithClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
