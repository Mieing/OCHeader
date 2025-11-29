@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface BDCastProxyThreadSafeMapTable : NSObject

@property (retain, nonatomic) NSMapTable *mapTable;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)allObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (long long)count;

@end
