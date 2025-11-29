@class NSString;

@interface IESIMMessageTabAsyncLoadSnapshotStorage : NSObject

@property (retain, nonatomic) NSString *cacheKey;
@property (nonatomic) double lastCacheTimestamp;

- (void)saveSnapshotViewModels:(id)a0;
- (id)readSnapshotModels;
- (BOOL)p_ifCacheExpired;
- (id)p_cacheDataKey;
- (id)p_crashProtectKey;
- (id)p_cacheModelTimestampKey;
- (id)p_cacheKeyPrefix;
- (void).cxx_destruct;
- (id)initWithKey:(id)a0;

@end
