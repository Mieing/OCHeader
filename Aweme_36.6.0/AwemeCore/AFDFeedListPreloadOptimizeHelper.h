@class AFDFeedListPreloadContext, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AFDFeedListPreloadOptimizeHelper : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *setToDiskCacheSerialQueue;
@property (retain, nonatomic) NSMutableArray *avatarUids;
@property (nonatomic) long long preloadCacheExpiredCount;
@property (nonatomic) double forbidRequestStartDate;
@property (nonatomic) long long preloadRequestTimes;
@property (retain, nonatomic) AFDFeedListPreloadContext *context;

- (id)currentUid;
- (void)readDataFromDisk;
- (void)clearPreloadRequestTimes;
- (void)clearExpiredDiskCache;
- (long long)sensitiveLruMaxCount;
- (void)opt_log:(id)a0;
- (long long)preloadStopExpireTimes;
- (double)preloadStopTimeInterval;
- (void)debug_clearAllCache;
- (void)addUidToArray:(id)a0;
- (void)markCacheExpiredOnce;
- (void)markPreloadRequestOnce;
- (void).cxx_destruct;
- (id)init;
- (void)clearMemoryCache;

@end
