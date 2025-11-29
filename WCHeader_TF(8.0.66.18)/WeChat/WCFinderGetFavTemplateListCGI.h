@class NSString;

@interface WCFinderGetFavTemplateListCGI : WCFinderBaseCgi

@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;
@property (nonatomic) BOOL isPrefetchReq;
@property (nonatomic) unsigned long long preFetchType;
@property (copy, nonatomic) NSString *pageBufferUniqueId;

+ (id)mmkvCachedKey;
+ (id)cachedHashKeyWithPageBufferUniqueId:(id)a0;

- (id)initWithPageBuf:(id)a0 preFetchType:(unsigned long long)a1 finderUserName:(id)a2 successfulBlock:(id /* block */)a3 failedBlock:(id /* block */)a4;
- (BOOL)fetchDebugTemplate;
- (void)start;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (void)saveCachedTime:(unsigned long long)a0;
- (unsigned long long)getCachedTime;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (unsigned long long)cacheValidityPeriod:(id)a0;
- (void)prefetchCacheWillBeDropped:(id)a0;
- (id)sha1HashForData:(id)a0;
- (void).cxx_destruct;

@end
