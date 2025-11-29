@class NSString;

@interface AWESearchImagePrefetchSceneConfigV2 : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enablePrefetchForChunkPredict;
@property (nonatomic) BOOL enablePrefetchForChunkAppend;
@property (nonatomic) BOOL enablePrefetchForLoadMore;
@property (nonatomic) BOOL enablePrefetchForRefresh;
@property (nonatomic) long long prefetchAsyncDelayForChunkAppend;
@property (nonatomic) long long prefetchAsyncNumForChunkAppend;
@property (nonatomic) long long prefetchSyncNumForLoadMore;
@property (nonatomic) long long prefetchAsyncNumForLoadMore;
@property (nonatomic) long long prefetchAsyncDelayForLoadMore;
@property (nonatomic) long long prefetchSyncNumForRefresh;
@property (nonatomic) long long prefetchAsyncNumForRefresh;
@property (nonatomic) long long prefetchAsyncDelayForRefresh;
@property (nonatomic) BOOL enablePrefetchForRenderBegin;
@property (nonatomic) BOOL enablePrefetchForEndDecelerate;
@property (nonatomic) long long prefetchSpacingForRenderBegin;
@property (nonatomic) long long prefetchAsyncNumForEndDecelerate;
@property (nonatomic) long long prefetchAsyncDelayForEndDecelerate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;


@end
