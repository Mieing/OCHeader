@class NSString, NSMutableDictionary, NSRecursiveLock;

@interface CKMemoryCache : NSObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSRecursiveLock *lock;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithName:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
