@interface AWESearchGeneralImagePreloader : NSObject

+ (BOOL)enablePrefetchStrategyV2;
+ (void)prefetchV2ForRefreshWithViewModels:(id)a0;
+ (void)preloadSingleVideoCoverForLoadMoreWithModels:(id)a0;
+ (void)preloadSingleVideoCoverForChunkCompleteWithModels:(id)a0;
+ (BOOL)enableSingleVideoCoverPreloadForScrollStart;
+ (void)preloadSingleVideoCoverForScrollStartWithModels:(id)a0;
+ (BOOL)enableSingleVideoCoverPreloadForChunkComplete;
+ (BOOL)enableSingleVideoCoverPreloadForLoadMore;
+ (void)prefetchV2ForChunkPredictWithViewModels:(id)a0;
+ (void)prefetchV2ForChunkAppendWithViewModels:(id)a0;
+ (void)prefetchV2ForLoadMoreWithViewModels:(id)a0;
+ (void)prefetchV2ForRenderBeginWithViewModels:(id)a0 currentIdx:(long long)a1;
+ (void)prefetchV2ForEndDecelerateWithViewModels:(id)a0 currentIdx:(long long)a1;
+ (id)singleVideoCoverPreloadConfig;
+ (void)preloadSingleVideoCoverWithModel:(id)a0;
+ (id)p_prefetchStrategyV2Config;
+ (void)p_prefetchV2ForChunkPredictWithViewModels:(id)a0;
+ (void)p_performInSubThread:(id /* block */)a0;
+ (void)p_prefetchV2ForChunkAppendWithViewModels:(id)a0;
+ (void)p_prefetchV2ForLoadMoreWithViewModels:(id)a0;
+ (void)p_prefetchV2ForRefreshWithViewModels:(id)a0;
+ (void)p_prefetchV2ForRenderBeginWithViewModels:(id)a0 currentIdx:(long long)a1;
+ (void)p_prefetchV2ForEndDecelerateWithViewModels:(id)a0 currentIdx:(long long)a1;
+ (id)p_prefetchSceneConfigV2WithViewModels:(id)a0;
+ (void)p_prefetchWithModel:(id)a0;
+ (void)p_performInSubThreadWithDelay:(long long)a0 block:(id /* block */)a1;
+ (void)p_prefetchWithUrlModels:(id)a0;

@end
