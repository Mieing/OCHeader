@class NSOperationQueue, BDLinkedMapEntry, NSMutableDictionary;

@interface BDImageLinkedMap : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lru_lock;
}

@property (retain, nonatomic) BDLinkedMapEntry *head;
@property (retain, nonatomic) BDLinkedMapEntry *mark;
@property (retain, nonatomic) BDLinkedMapEntry *tail;
@property (nonatomic) unsigned long long firstSize;
@property (nonatomic) unsigned long long firstCount;
@property (nonatomic) unsigned long long secondSize;
@property (nonatomic) unsigned long long secondCount;
@property (retain, nonatomic) NSMutableDictionary *map;
@property (retain, nonatomic) NSOperationQueue *trimQueue;
@property (nonatomic) long long trimTasks;
@property unsigned long long firstCountLimit;
@property unsigned long long firstSizeLimit;
@property unsigned long long secondCountLimit;
@property unsigned long long secondSizeLimit;

- (void)afterAccessEntry:(id)a0;
- (void)trimEntryIfNeed;
- (void)afterRemoveEntry:(id)a0;
- (void)afterInsertEntry:(id)a0;
- (BOOL)removeTailEntry;
- (BOOL)isTrimEntryInFirst;
- (BOOL)isTrimEntryInSecond:(double)a0;
- (void)trimEntryReal;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)dealloc;
- (unsigned long long)size;
- (unsigned long long)count;
- (void)setObject:(id)a0 forKey:(id)a1 cost:(unsigned long long)a2;

@end
