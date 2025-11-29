@class NSMutableDictionary, NSRecursiveLock;

@interface WAThreadSafeMutableDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *dic;
@property (retain, nonatomic) NSRecursiveLock *lock;

+ (id)dictionary;

- (id)init;
- (void)directlySetDictionary:(id)a0;
- (void)threadSafeRemoveAllObjects;
- (void)threadSafeSetObject:(id)a0 forKey:(id)a1;
- (id)threadSafeObjectForKey:(id)a0;
- (id)threadSafeRemoveObjectForKey:(id)a0;
- (unsigned long long)count;
- (id)threaadSafeAllKeys;
- (id)threadSafeAllValues;
- (id)innerDictionary;
- (id)getLock;
- (void).cxx_destruct;

@end
