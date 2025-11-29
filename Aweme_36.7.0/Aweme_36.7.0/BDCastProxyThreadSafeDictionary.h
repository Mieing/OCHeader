@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface BDCastProxyThreadSafeDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (id)allObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;

@end
