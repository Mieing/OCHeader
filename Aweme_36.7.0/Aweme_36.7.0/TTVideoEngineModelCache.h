@class TTVideoEngineKVStorage, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TTVideoEngineModelCache : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSObject<OS_dispatch_queue> *_trashQueue;
}

@property (retain, nonatomic) NSMutableArray *caches;
@property (nonatomic) long long maxMemoryCount;
@property (nonatomic) long long maxCount;
@property (retain, nonatomic) TTVideoEngineKVStorage *diskStorage;

+ (id)shareCache;

- (void)_applicationDidReceiveMemoryWarningNotification:(id)a0;
- (id)_removeMemoryCacheIfExit:(id)a0;
- (void)_insertItemInMemoryCache:(id)a0 data:(id)a1;
- (void)saveItemToDisk:(id)a0 forKey:(id)a1;
- (void)_exect:(id /* block */)a0;
- (void)removeItemFromDiskForKey:(id)a0;
- (void)getItemFromDiskForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)clearAllMemoryItems;
- (void)addItem:(id)a0 forKey:(id)a1;
- (void)getItemForKey:(id)a0 withBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)clearAllItems;
- (void)dealloc;
- (void)removeItemForKey:(id)a0;

@end
