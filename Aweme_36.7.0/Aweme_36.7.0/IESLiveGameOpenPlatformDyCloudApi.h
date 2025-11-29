@class NSString;

@interface IESLiveGameOpenPlatformDyCloudApi : HTSLiveApi

@property (copy, nonatomic) NSString *appId;

- (id)initWithAppId:(id)a0 DIContext:(id)a1;
- (void)requestLoginWithCompletion:(id /* block */)a0;
- (void)requestSidWithCloudCode:(id)a0 completion:(id /* block */)a1;
- (void)refreshSid:(id)a0 completion:(id /* block */)a1;
- (void)callContainerWithRequestParam:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
