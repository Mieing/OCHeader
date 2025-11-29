@class NSString;

@interface IESLiveNativeAppPreloadShelfInfoImpl : IESLiveBackendRequestBaseImpl <IESLiveBackendRequestImplProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)ieslivekit_register_preloadrequstAction;
+ (id)requstBizPath;
+ (BOOL)activeRequestImpl;

- (id)bizParams;
- (void)backendRequestWillRequest;
- (void)backendRequestDidCompleteWithRequest:(id)a0;
- (Class)modelClass;
- (unsigned long long)responseFormat;

@end
