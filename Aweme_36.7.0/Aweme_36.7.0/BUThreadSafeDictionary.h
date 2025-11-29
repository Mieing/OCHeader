@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BUThreadSafeDictionary : NSMutableDictionary

@property (retain, nonatomic) NSMutableDictionary *buDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)removeObjectsForKeys:(id)a0;
- (void).cxx_destruct;
- (id)dictionary;
- (id)description;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)allValues;
- (void)removeObjectForKey:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)allKeys;
- (id)valueForKey:(id)a0;

@end
