@class OpenImResourceStorageCacheInfo;

@interface OpenImResourceStorage : MMObject

@property (retain, nonatomic) OpenImResourceStorageCacheInfo *defaultResCacheInfo;
@property (retain, nonatomic) OpenImResourceStorageCacheInfo *kefuResCacheInfo;

+ (id)resourceRootPath;
+ (id)resourcePathAppid:(id)a0 subType:(unsigned int)a1;

- (id)init;
- (id)cacheInfoForSubType:(unsigned int)a0;
- (void)saveLastUpdateDateToCache:(id)a0 appId:(id)a1 subType:(unsigned int)a2;
- (id)cacheLastUpdateDateWithAppId:(id)a0 subType:(unsigned int)a1;
- (id)cacheResourceWithAppId:(id)a0 subType:(unsigned int)a1;
- (void)saveResourceToCache:(id)a0 appId:(id)a1 subType:(unsigned int)a2;
- (id)tryLoadOpenImResource:(id)a0 subType:(unsigned int)a1;
- (void)saveOpenImResourceToCacheAndFile:(id)a0 appid:(id)a1 subType:(unsigned int)a2;
- (void).cxx_destruct;

@end
