@class NSString;

@interface WARenderCacheMgr : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cachePathForRenderCacheInfo:(id)a0;
+ (id)cachePathForPubVersion:(id)a0 username:(id)a1 debugType:(unsigned int)a2 version:(unsigned int)a3 pagePath:(id)a4;

- (void)saveInitialRenderCache:(id)a0 webviewData:(id)a1 appserviceData:(id)a2 forUsername:(id)a3 path:(id)a4 debugType:(unsigned int)a5 appVersion:(unsigned int)a6 pubVersion:(id)a7;
- (id)getInitialRenderCacheForUsername:(id)a0 path:(id)a1 debugType:(unsigned int)a2 appVersion:(unsigned int)a3 pubVersion:(id)a4;
- (id)mmkvKeyForRecord;
- (BOOL)useMMKVForStorage;
- (void)deleteRenderCacheForUsername:(id)a0 debugType:(unsigned int)a1 underAppVersion:(unsigned int)a2;
- (void)deleteAllRenderCacheForUsername:(id)a0 debugType:(unsigned int)a1;
- (void)deleteAllRenderCacheIfPubVersionNot:(id)a0;
- (void)deleteRenderCache:(id)a0;

@end
