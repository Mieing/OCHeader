@class IESLiveInnerFeedCacheReplaceModel;

@interface IESLivePreloadRequestFeedCacheImpl : IESLivePreloadRequestBaseImpl

@property (retain, nonatomic) IESLiveInnerFeedCacheReplaceModel *feedCacheModel;

+ (void)ieslivekit_register_preloadrequstAction;
+ (unsigned long long)requestBusinessIdentifier;

- (id)p_requestParams;
- (BOOL)canRequestInStage:(unsigned long long)a0;
- (unsigned long long)preloadRequestMethod;
- (id)customRequest;
- (void)preloadRequestDidCompleteWithRequest:(id)a0;
- (void)dealFeedCacheWithResponse:(id)a0 error:(id)a1;
- (void).cxx_destruct;

@end
