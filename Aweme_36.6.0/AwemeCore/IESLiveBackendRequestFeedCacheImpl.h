@class IESLiveInnerFeedCacheReplaceModel;

@interface IESLiveBackendRequestFeedCacheImpl : IESLiveBackendRequestBaseImpl

@property (retain, nonatomic) IESLiveInnerFeedCacheReplaceModel *feedCacheModel;

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (void)dealFeedCacheWithResponse:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
