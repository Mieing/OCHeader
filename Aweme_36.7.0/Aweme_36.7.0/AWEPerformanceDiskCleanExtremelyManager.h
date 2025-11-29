@class NSArray, NSMutableDictionary, AWEPerformanceDiskStatistics, NSMutableArray;

@interface AWEPerformanceDiskCleanExtremelyManager : NSObject

@property (retain, nonatomic) NSMutableArray *diskOperations;
@property (retain, nonatomic) NSMutableArray *offlineVideoOperations;
@property (retain, nonatomic) AWEPerformanceDiskStatistics *diskStatistics;
@property (copy, nonatomic) NSArray *mmkvCleanKeys;
@property (retain, nonatomic) NSMutableDictionary *pathSizeCache;

+ (id)shareManager;

- (long long)enableTaskWithDateKey:(id)a0;
- (double)offlineVideoSize;
- (void)removeAllCustomOperations;
- (void)addDiskCustomOperation:(id)a0;
- (void)addDiskOfflineVideoOperation:(id)a0;
- (BOOL)cleanEnable;
- (void)cleanCacheWithCancelForCleanSize:(id /* block */)a0;
- (void)cleanOfflineVideo;
- (id)cachePaths;
- (double)alterCacheSize;
- (void)setSizeForPath:(id)a0 size:(double)a1;
- (unsigned long long)mmkvCleanSize;
- (id)alterCachePaths;
- (BOOL)whiteListContainsKey:(id)a0;
- (id)mmkvKeys;
- (double)getSizeForPath:(id)a0;
- (void)cleanPath:(id)a0;
- (void)cleanMMKV;
- (void)cleanDir:(id)a0;
- (void)cleanFile:(id)a0;
- (id)cacheDowngradeOperations;
- (id)offlineVideoDowngradeOperations;
- (void).cxx_destruct;
- (double)cacheSize;
- (void)cleanCache;

@end
