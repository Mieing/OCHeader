@interface IESLivePreloadRequestCommonCardImpl : IESLiveBackendRequestBaseImpl

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (BOOL)pbParserWithOutBody;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
