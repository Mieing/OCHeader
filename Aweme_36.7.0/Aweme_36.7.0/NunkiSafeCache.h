@class NSLock, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NunkiSafeCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheDic;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue;
@property (retain, nonatomic) NSLock *rwLock;

- (id)nk_objectForKey:(id)a0;
- (void)nk_setObject:(id)a0 forKey:(id)a1;
- (void)nk_removeAllObjects;
- (void)nk_removeObjectForKey:(id)a0;
- (id)nk_numberValueForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(char *)a0;

@end
