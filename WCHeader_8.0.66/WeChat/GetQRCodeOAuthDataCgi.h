@class OpenSDKOAuthRequest;

@interface GetQRCodeOAuthDataCgi : WCBaseCgi

@property (nonatomic) BOOL hasHandleEcdhRollback;
@property (retain, nonatomic) OpenSDKOAuthRequest *authReq;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithAuthReq:(id)a0;
- (void)createRequest;
- (void)startWithCompletion:(id /* block */)a0;
- (void)didGetResponse:(id)a0;
- (void)didFailWithError:(id)a0 response:(id)a1;
- (void).cxx_destruct;

@end
