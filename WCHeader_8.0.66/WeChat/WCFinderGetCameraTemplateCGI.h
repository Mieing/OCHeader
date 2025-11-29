@class NSString;

@interface WCFinderGetCameraTemplateCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;
@property (nonatomic) BOOL isPrefetchReq;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long preFetchType;
@property (copy, nonatomic) NSString *fromTempletId;
@property (nonatomic) unsigned long long eventId;
@property (copy, nonatomic) NSString *musicId;
@property (nonatomic) unsigned long long tabId;
@property (copy, nonatomic) NSString *pageBufferUniqueId;
@property (nonatomic) unsigned long long enterScene;
@property (nonatomic) long long sdkVersion;

+ (int)enterTypeWithPreFetchType:(unsigned long long)a0;
+ (id)getCachedCameraVideoTemplateList;
+ (id)mmkvCachedTimeKey;
+ (void)saveCachedTime:(unsigned long long)a0;
+ (unsigned long long)getCachedTime;
+ (id)cachedHashKeyWithScene:(unsigned long long)a0 fromTempalteId:(id)a1 finderEventId:(unsigned long long)a2 tabId:(unsigned long long)a3 musicId:(id)a4 pageBufferUniqueId:(id)a5 enterScene:(unsigned long long)a6;
+ (id)mmkvCachedLandingKey;
+ (void)saveCachedShouldLandOnEmptyTemplate:(BOOL)a0;
+ (BOOL)getCachedShouldLandOnEmptyTemplate;
+ (unsigned long long)cacheValidityPeriod:(id)a0;

- (id)initWithPageBuf:(id)a0 scene:(unsigned long long)a1 preFetchType:(unsigned long long)a2 finderUserName:(id)a3 optionalParams:(id)a4 successfulBlock:(id /* block */)a5 failedBlock:(id /* block */)a6;
- (BOOL)fetchDebugTemplate;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (int)requestType;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (void)prefetchCacheWillBeDropped:(id)a0;
- (id)sha1HashForData:(id)a0;
- (void).cxx_destruct;

@end
