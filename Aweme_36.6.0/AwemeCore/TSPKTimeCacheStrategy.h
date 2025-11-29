@class NSString, NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKTimeCacheStrategy : NSObject <TSPKCacheUpdateStrategy, TSPKCacheStrategyGenerator>

@property (nonatomic) long long duration;
@property (retain, nonatomic) NSMutableDictionary *lastTimeStampDict;
@property (retain, nonatomic) id<TSPKLock> lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)initWithDuration:(long long)a0;
+ (id)generate:(id)a0;

- (BOOL)needUpdate:(id)a0 cacheStore:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
