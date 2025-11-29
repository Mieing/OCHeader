@class NSObject;
@protocol HTSKVStore, OS_dispatch_queue;

@interface IESECWinCacheManager : NSObject

@property (retain) id<HTSKVStore> kvStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (id)objectOfClass:(Class)a0 forKey:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 duration:(double)a2;
- (void)cleanExpiredDataIfNeed;
- (void).cxx_destruct;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)allKeys;

@end
