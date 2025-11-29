@class NSMutableArray;

@interface TTVideoEnginePreloadQueue : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSMutableArray *_itemArray;
}

@property long long maxCount;
@property (readonly, nonatomic) long long count;

- (BOOL)_enoughItems;
- (id)frontItem;
- (id)popFrontItem;
- (id)popBackItem;
- (BOOL)enqueueItem:(id)a0;
- (BOOL)containItem:(id)a0;
- (BOOL)containItemForKey:(id)a0;
- (id)popItemForKey:(id)a0;
- (void)popAllItems;
- (id)itemsForKey:(id)a0;
- (void)popItem:(id)a0;
- (id)customCopyAllItems;
- (void).cxx_destruct;
- (id)init;
- (id)backItem;
- (void)dealloc;
- (id)itemForKey:(id)a0;

@end
