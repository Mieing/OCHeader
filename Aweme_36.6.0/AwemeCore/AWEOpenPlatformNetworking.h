@interface AWEOpenPlatformNetworking : NSObject

+ (void)sendPOSTRequestWithDomain:(id)a0 urlPath:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)requestConfirmQRCodeWithParams:(id)a0 headerField:(id)a1 completion:(id /* block */)a2;
+ (void)notifyQRCodeWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestGetClientScopesWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)sendPOSTRequestWithDomain:(id)a0 headerField:(id)a1 urlPath:(id)a2 params:(id)a3 responseCompletion:(id /* block */)a4;
+ (void)sendGETRequestWithDomain:(id)a0 urlPath:(id)a1 params:(id)a2 completion:(id /* block */)a3;
+ (void)requestGetAppLinkWithParams:(id)a0 completion:(id /* block */)a1;
+ (void)requestRandomIdentityGet:(id)a0 completion:(id /* block */)a1;
+ (void)requestAccountListWithParams:(id)a0 completion:(id /* block */)a1;

@end
