@interface IESLivePreloadRequestScreenCastSettingImpl : IESLiveBackendRequestBaseImpl

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (unsigned long long)responseFormat;

@end
