@class NSData;

@interface WCFinderPostTipsStreamCgi : WCFinderBaseCgi

@property (nonatomic) BOOL isPrefetch;
@property (nonatomic) int scene;
@property (copy, nonatomic) NSData *byPass;
@property (copy, nonatomic) NSData *lastBuf;
@property (copy, nonatomic) id /* block */ successfulBlock;
@property (copy, nonatomic) id /* block */ failedBlock;

+ (id)cachedHashKeyWithScene:(int)a0 byPass:(id)a1 lastBuffer:(id)a2;

- (id)initWithScene:(int)a0 byPass:(id)a1 lastBuffer:(id)a2 isPrefetch:(BOOL)a3 successful:(id /* block */)a4 failed:(id /* block */)a5;
- (void)createRequest;
- (void)didGetResponse:(id)a0;
- (void)finderCgiDidFailWithError:(id)a0 response:(id)a1;
- (BOOL)isPrefetchRequest;
- (BOOL)isConsumeRequest;
- (id)cachedHashKey;
- (BOOL)isEqualWithRequest:(id)a0 extraData:(id)a1;
- (unsigned long long)cacheValidityPeriod:(id)a0;
- (void)prefetchCacheWillBeDropped:(id)a0;
- (void).cxx_destruct;

@end
