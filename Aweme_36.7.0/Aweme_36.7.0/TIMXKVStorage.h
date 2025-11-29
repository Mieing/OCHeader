@class NSString, NSDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_semaphore, OS_dispatch_queue, TIMXCurrentUserCredentialProtocol;

@interface TIMXKVStorage : NSObject <TIMXKVStorageProtocol, TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (retain, nonatomic) NSDictionary *openedMMKV;
@property (retain, nonatomic) id<TIMXCurrentUserCredentialProtocol> currentUserImp;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sema;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *p_sharedOperationQueue_default;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)a0;

- (void)enumerateKeys:(id /* block */)a0;
- (id)getObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)removeValuesForKeys:(id)a0;
- (unsigned long long)actualSize;
- (BOOL)isMigrated;
- (id)currentUserMMKV;
- (id)currentUserMMKVOfUid:(long long)a0;
- (void)clearStoreForUser:(long long)a0;
- (void)migrateConfigFromWCDBToMMKV;
- (id)pathWithUserId:(id)a0;
- (void)userDidLogout:(id)a0;
- (id)sharedOperationalQueue;
- (id)getDB;
- (BOOL)containsKey:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)setKeyValues:(id)a0;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeValueForKey:(id)a0;
- (unsigned long long)count;
- (id)allKeys;
- (id)basePath;
- (unsigned long long)totalSize;
- (id)initWithRootObject:(id)a0;
- (void)clearStore;

@end
