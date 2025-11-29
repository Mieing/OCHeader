@class NSLock, NSMutableDictionary, ACCLRUCacheLinkedList;

@interface ACCLRUCache : NSObject

@property (retain, nonatomic) NSLock *lock;
@property (retain, nonatomic) ACCLRUCacheLinkedList *linkedList;
@property (retain, nonatomic) NSMutableDictionary *storage;
@property (nonatomic) unsigned long long capacity;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
