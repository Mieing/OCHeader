@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CSJAdFileCacheFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheDictonary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (void)clearAllCache;
+ (id)_pbu_createCacheWithFileCacheType:(long long)a0;
+ (id)fileCacheWithFileCacheType:(long long)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
