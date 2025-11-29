@interface IESLiveMessageInteractionAssetImpl : IESLiveBackendRequestBaseImpl

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
