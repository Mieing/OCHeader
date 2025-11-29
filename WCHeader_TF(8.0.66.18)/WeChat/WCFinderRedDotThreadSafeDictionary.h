@class NSMutableDictionary, NSRecursiveLock;

@interface WCFinderRedDotThreadSafeDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *dicContainer;
@property (retain, nonatomic) NSRecursiveLock *lock;

- (id)initWithQueueName:(id)a0;
- (id)currentDic;
- (void)containerReset;
- (void)containerSetObject:(id)a0 forKey:(id)a1;
- (void)containerRemoveObjectForKey:(id)a0;
- (void)containerRemoveObjectsForKeys:(id)a0;
- (void)containerRemoveAllObjects;
- (id)containerObjectForKey:(id)a0;
- (id)containerMutableCopy;
- (unsigned long long)containerCount;
- (void)containerEnumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)containerAllValues;
- (void).cxx_destruct;

@end
