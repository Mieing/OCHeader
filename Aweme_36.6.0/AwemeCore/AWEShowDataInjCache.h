@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AWEShowDataInjCacheDelegate;

@interface AWEShowDataInjCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableArray *cacheKeys;
@property (weak, nonatomic) id<AWEShowDataInjCacheDelegate> delegate;
@property (copy, nonatomic) NSString *sceneID;
@property (nonatomic) unsigned long long countLimit;
@property (nonatomic) double ageLimit;
@property (nonatomic) double autoTrimInterval;

- (void)sendRemoveEventToObject:(id)a0 forKey:(id)a1 withReason:(unsigned long long)a2;
- (id)generateFingerPrintWithData:(id)a0;
- (void)trimToMaxAge;
- (void)trimToMaxCount;
- (void)setObject:(id)a0 withBusinessParams:(id)a1 forKey:(id)a2;
- (BOOL)isObjectExpiredForKey:(id)a0;
- (id)cacheItemForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (void)removeAllObjects;
- (BOOL)containsObjectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;

@end
