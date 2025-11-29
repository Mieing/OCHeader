@class NSMutableSet;

@interface DownloadCacheManager : NSObject

@property (retain, nonatomic) NSMutableSet *ttOnlyKeyForTaskConfig;

+ (id)shareInstance;

- (void)clearAllCache;
- (BOOL)isExist:(id)a0;
- (void)addTaskConfigKeyToCache:(id)a0;
- (id)findTaskConfigKeyInCache:(id)a0;
- (void)removeTaskConfigKeyFromCache:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
