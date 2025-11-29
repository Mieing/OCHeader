@class NSString, TIMXSDKInstance;

@interface TIMXMessageSendTokenManager : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
}

@property (nonatomic) BOOL hasPreloadToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)preloadIdentityTokenForMessageSendingIfNeeded;
- (void)didReceiveAsyncResponse:(id)a0 messageIdentifier:(id)a1 error:(id)a2;
- (void)fetchIdentityTokenForScene:(long long)a0 completion:(id /* block */)a1;
- (void)p_handleFailedIdentityTokenAcquisition:(id)a0 errorCode:(long long)a1 completion:(id /* block */)a2;
- (void)configMessageSendRequestObject:(id)a0 identityToken:(id)a1;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)a0;

@end
