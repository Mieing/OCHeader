@class NSString, IESECTracker;

@interface IESECCartGlobalDataController : NSObject <IESECCartCacheDataProtocol>

@property (nonatomic) double validTimeInterval;
@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) IESECTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prefetchCartDataWithExtraParams:(id)a0;
+ (BOOL)cachedResponseValid:(id)a0;
+ (id)shared;

- (void)trackCacheOperationWithOperateType:(id)a0 operationResult:(id)a1 exParams:(id)a2;
- (void)prefetchCartDataWithExtraParams:(id)a0;
- (id)prepareBasePrefetchRequestExParams;
- (void)storeCacheWithProtocolResponse:(id)a0 schemaParams:(id)a1 isPrefetch:(BOOL)a2;
- (id)processResponseToBeCached:(id)a0;
- (void)trackCacheOperationWithOperateType:(id)a0 operationResult:(id)a1;
- (id)getValidCachedResponseProtocolWithContext:(id)a0;
- (void).cxx_destruct;

@end
