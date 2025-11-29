@class NSMapTable, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESLLTempoWeakValueMap : NSObject

@property (retain, nonatomic) NSMapTable *mapTable;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;

@end
