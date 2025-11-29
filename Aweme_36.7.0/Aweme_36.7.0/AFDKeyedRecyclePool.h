@class NSMutableDictionary, AFDKeyedRecycleNode;

@interface AFDKeyedRecyclePool : NSObject {
    NSMutableDictionary *_recycleMap;
    AFDKeyedRecycleNode *_lruHead;
    AFDKeyedRecycleNode *_lruTail;
    unsigned long long _count;
    unsigned long long _capacity;
    unsigned long long _clock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic) unsigned long long autoCleanTime;

- (id)p_accessRecycleMap:(id)a0 autoCreate:(BOOL)a1;
- (void)p_removeNode:(id)a0;
- (void)recycleObject:(id)a0 forKey:(id)a1;
- (id)reuseObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)init;
- (id)debugDescription;
- (unsigned long long)count;

@end
