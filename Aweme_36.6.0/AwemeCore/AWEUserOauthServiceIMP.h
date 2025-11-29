@class NSString;

@interface AWEUserOauthServiceIMP : HTSService <AWEUserOauthService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isInAuthorizeLogin;
- (BOOL)isInRequireLogin;
- (void)startConfiguration;
- (id)currentConfiguredSchemes;
- (void)nativeOAuthWithParamsInterface:(id)a0 loginCompletion:(id /* block */)a1;
- (void)nativeOAuthV2WithParamsInterface:(id)a0 loginCompletion:(id /* block */)a1;
- (BOOL)handleOpenURL:(id)a0;

@end
